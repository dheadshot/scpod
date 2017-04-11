#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sqlite3.h>

#include "sfuncs.h"
#include "parser.h"

#include "dbexchange.h"


int dbisopen = 0;
sqlite3 *db;
char *passbackstr = NULL;
unsigned long passbackul = 0;
sqlite3_stmt *channelstmt = NULL, *itemstmt = NULL;

int opendb(int dolo)
{
  int isnewdb = 0;
  if (dbisopen) return -1;
  int retcode = sqlite3_open_v2(DBNAME, &db, SQLITE_OPEN_READWRITE, NULL);
  if (retcode != SQLITE_OK)
  {
    dbwriteerror(retcode);
    sqlite3_close(db);
    return 0;
  }
  dbisopen = 1;
  if (!dolo) return 1;
  /* Check last opened and update */
  retcode = checklastopened();
  if (retcode == -1)
  {
    isnewdb = 1;
    printf("New Database Started\n"); /* Silence if -q specified */
  }
  else if (retcode == 0)
  {
    sqlite3_close(db);
    dbisopen = 0;
    return 0;
  }
  else
  {
    printf("Last accessed on %s\n",passbackstr); /* Silence if -q specified */
    free(passbackstr);
    passbackstr = NULL;
  }
  char *anerrmsg;
  if (isnewdb)
  {
    retcode = sqlite3_exec(db, "INSERT INTO Config (Setting, Data) VALUES ('LAST OPENED', datetime(CURRENT_TIMESTAMP));", NULL, 0, &anerrmsg);
    if (retcode != SQLITE_OK && retcode != SQLITE_DONE)
    {
      dbwriteerror(retcode);
      fprintf(stderr, "(Returned error: %s)\n",anerrmsg);
      sqlite3_free(anerrmsg);
      sqlite3_close(db);
      dbisopen = 0;
      return 0;
    }
  }
  else
  {
    retcode = sqlite3_exec(db, "UPDATE Config SET Data = datetime(CURRENT_TIMESTAMP) WHERE Setting IS 'LAST OPENED';", NULL, 0, &anerrmsg);
    if (retcode != SQLITE_OK && retcode != SQLITE_DONE)
    {
      dbwriteerror(retcode);
      fprintf(stderr, "(Returned error: %s)\n",anerrmsg);
      sqlite3_free(anerrmsg);
      sqlite3_close(db);
      dbisopen = 0;
      return 0;
    }
  }
  return 1;
}

int closedb()
{
  if (!dbisopen) return -1;
  int rc = sqlite3_close(db);
  if (rc == SQLITE_OK || rc == SQLITE_DONE) return 1;
  dbwriteerror(rc);
  return 0;
}

int preparechannelstatement()
{
  char sqlstmt[] = "INSERT INTO Channel (Channel_ID, Channel_URL, Title, Link, Description, Language_Major, Language_Minor, Copyright, Managing_Editor, Webmaster, Publication_Date, Last_Build_Date, Generator, Documentation, RSS_Version, TTL, Image_URL, Image_Title, Image_Link, Image_Description, Image_Width, Image_Height, Last_Refresh_Date, Directory) VALUES (NULL, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, now, ?);";
  int rc = sqlite3_prepare_v2(db, sqlstmt, strlen(sqlstmt)+1, &channelstmt, NULL);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    if (channelstmt != NULL) sqlite3_finalize(channelstmt);
    channelstmt = NULL;
    return 0;
  }
  return 1;
}

unsigned long addchannel(chanpropnode *achan, char *chanurl, char *rss_version, char *directory)
{
  if (channelstmt == NULL) return 0;
  if (achan == NULL || directory == NULL || chanurl == NULL) return 0;
  char datetext[256] = "";
  int rc;
  
  /* Bind values */
  rc = sqlite3_bind_text(channelstmt, 1, chanurl, strlen(chanurl)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(channelstmt, 2, achan->title, strlen(achan->title)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(channelstmt, 3, achan->link, strlen(achan->link)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(channelstmt, 4, achan->description, strlen(achan->description)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(channelstmt, 5, achan->language_main, strlen(achan->language_main)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(channelstmt, 6, achan->language_sub, strlen(achan->language_sub)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(channelstmt, 7, achan->copyright, strlen(achan->copyright)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(channelstmt, 8, achan->managingeditor, strlen(achan->managingeditor)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(channelstmt, 9, achan->webmaster, strlen(achan->webmaster)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  /*
  sprintf(datetext,"%-.4ld-%-.2d-%-.2d %-.2d:%-.2d:%-.2d",achan->pubdate.year, achan->pubdate.month, achan->pubdate.daynum, achan->pubdate.hour, achan->pubdate.minute, achan->pubdate.second);
  if (achan->pubdate.gmtoffseth<0 || achan->pubdate.gmtoffsetm<0) strcat(datetext, "-");
  else strcat(datetext, "+");
  doffh = achan->pubdate.gmtoffseth;
  if (doffh<0) doffh = 0 - doffh;
  doffm = achan->pubdate.gmtoffsetm;
  if (doffm<0) doffm = 0 - doffm;
  sprintf(dateoffsettext, "%-.2d:%-.2d", doffh, doffm);
  strcat(datetext,dateoffsettext);
  */
  rssdatetoisodate(datetext,&(achan->pubdate));
  rc = sqlite3_bind_text(channelstmt, 10, datetext, strlen(datetext)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rssdatetoisodate(datetext,&(achan->lastbuilddate));
  rc = sqlite3_bind_text(channelstmt, 11, datetext, strlen(datetext)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(channelstmt, 12, achan->generator, strlen(achan->generator)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(channelstmt, 13, achan->docs, strlen(achan->docs)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(channelstmt, 14, rss_version, strlen(rss_version)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_int(channelstmt, 15, achan->ttl);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(channelstmt, 16, achan->image.url, strlen(achan->image.url)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(channelstmt, 17, achan->image.title, strlen(achan->image.title)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(channelstmt, 18, achan->image.link, strlen(achan->image.link)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(channelstmt, 19, achan->image.description, strlen(achan->image.description)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_int(channelstmt, 20, achan->image.width);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_int(channelstmt, 21, achan->image.height);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(channelstmt, 22, directory, strlen(directory)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  
  /* Execute Statement */
  rc = sqlite3_step(channelstmt);
  if (rc != SQLITE_OK && rc != SQLITE_DONE)
  {
    dbwriteerror(rc);
    return 0;
  }
  
  /* Reset ready for next call */
  rc = sqlite3_reset(channelstmt);
  if (rc != SQLITE_OK && rc != SQLITE_DONE)
  {
    dbwriteerror(rc);
    return 0;
  }
  
  /* Get Channel_ID */
  char gcidsql[] = "SELECT Channel_ID FROM Channel WHERE ROWID=last_rowid();";
  char *anerrmsg;
  passbackul = 0;
  rc = sqlite3_exec(db,gcidsql,callback_gcid,0,&anerrmsg);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
    sqlite3_free(anerrmsg);
    return 0;
  }
  
  if (passbackul == 0) return 0;
  achan->dbcid = passbackul;
  
  /* Insert Skip-Hours */
  int i;
  char shsql[256] = "";
  if (achan->skiphours != NULL)
  {
    for (i=0;achan->skiphours[i] != -1;i++)
    {
      sprintf(shsql,"INSERT INTO \"Channel_Skip_Hour\" (CSHID, Channel_ID, Hour) VALUES (NULL, %lu, %d);", achan->dbcid, achan->skiphours[i]);
      rc = sqlite3_exec(db,shsql,NULL,0,&anerrmsg);
      if (rc != SQLITE_OK && rc != SQLITE_DONE)
      {
        dbwriteerror(rc);
        fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
        sqlite3_free(anerrmsg);
        return 0;
        
      }
    }
  }
  
  /* Insert Skip-Days */
  int n = 0;
  if (achan->skipdays != NULL)
  {
    for (i=0;achan->skipdays[i] != NULL;i++)
    {
      if (startsame_i(achan->skipdays[i],"Sun")) n = 0;
      else if (startsame_i(achan->skipdays[i],"Mon")) n = 1;
      else if (startsame_i(achan->skipdays[i],"Tue")) n = 2;
      else if (startsame_i(achan->skipdays[i],"Wed")) n = 3;
      else if (startsame_i(achan->skipdays[i],"Thu")) n = 4;
      else if (startsame_i(achan->skipdays[i],"Fri")) n = 5;
      else if (startsame_i(achan->skipdays[i],"Sat")) n = 6;
      else n = 0;
      sprintf(shsql,"INSERT INTO \"Channel_Skip_Day\" (CSHID, Channel_ID, Day_Name, Day_Number) VALUES (NULL, %lu, %s, %d);", achan->dbcid, achan->skipdays[i], n);
      rc = sqlite3_exec(db,shsql,NULL,0,&anerrmsg);
      if (rc != SQLITE_OK && rc != SQLITE_DONE)
      {
        dbwriteerror(rc);
        fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
        sqlite3_free(anerrmsg);
        return 0;
        
      }
    }
  }
  
  return passbackul;
}

static int callback_gcid(void *NotUsed, int argc, char **argv, char **azColName)
{ /* Get Channel_ID Callback */
  int i;
  for (i=0;i<argc;i++)
  {
    if (streq_i(azColName[i],"Channel_ID"))
    {
      /*if (!streq_i(argv[i],"Last Opened")) return 0;*/
      passbackul = atol(argv[i]);
      return 0;
    }
  }
  return 0;
  
}

void rssdatetoisodate(char *isodate, rssdate *adate)
{
  char datetext[256] = "";
  char dateoffsettext[16] = "";
  int doffh, doffm, rc;
  
  sprintf(datetext,"%-.4ld-%-.2d-%-.2d %-.2d:%-.2d:%-.2d",adate->year, adate->month, adate->daynum, adate->hour, adate->minute, adate->second);
  if (adate->gmtoffseth<0 || adate->gmtoffsetm<0) strcat(datetext, "-");
  else strcat(datetext, "+");
  doffh = adate->gmtoffseth;
  if (doffh<0) doffh = 0 - doffh;
  doffm = adate->gmtoffsetm;
  if (doffm<0) doffm = 0 - doffm;
  sprintf(dateoffsettext, "%-.2d:%-.2d", doffh, doffm);
  strcat(datetext,dateoffsettext);
  strcpy(isodate,datetext);
  return;
}

static int callback_clo(void *NotUsed, int argc, char **argv, char **azColName)
{ /* Check Last Opened Callback */
  int i;
  for (i=0;i<argc;i++)
  {
    if (streq_i(azColName[i],"Setting"))
    {
      if (!streq_i(argv[i],"Last Opened")) return 0;
    }
    else if (streq_i(azColName[i],"Data"))
    {
      writetopassbackstr(argv[i]);
    }
  }
  return 0;
}

int checklastopened()
{
  char *anerrmsg = NULL;
  int rc;
  char sqlstatement[] = "SELECT Setting, Data FROM Config WHERE Setting IS 'LAST OPENED';";
  if (passbackstr != NULL) free(passbackstr);
  passbackstr = NULL;
  rc = sqlite3_exec(db,sqlstatement,callback_clo,0,&anerrmsg);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
    sqlite3_free(anerrmsg);
    return 0;
  }
  if (passbackstr == NULL) return -1;
  return 1;
}

int writetopassbackstr(char *astr)
{
  if (astr == NULL) return 0;
  if (passbackstr != NULL) free(passbackstr);
  passbackstr = (char *) malloc(sizeof(char)*(1+strlen(astr)));
  if (passbackstr == NULL) return 0;
  strcpy(passbackstr,astr);
}

int dbwriteerror(int errorcode)
{
  switch (errorcode)
  {
    case SQLITE_OK:
      printf("OK\n");
    break;
    
    case SQLITE_ERROR:
      fprintf(stderr, "Error: An Unknown Database Error has occurred!\n");
    break;
    
    case SQLITE_INTERNAL:
      fprintf(stderr, "Error: An Internal Database Engine Error has occurred!\n");
    break;
    
    case SQLITE_PERM:
      fprintf(stderr, "Error: Could not access Database with requested mode!\n");
    break;
    
    case SQLITE_ABORT:
      fprintf(stderr, "Error: Operation Aborted!\n");
    break;
    
    case SQLITE_BUSY:
    case SQLITE_BUSY_SNAPSHOT:
      fprintf(stderr, "Error: Database is Busy - must wait until other processes have finished before accessing database!\n");
    break;
    
    case SQLITE_LOCKED:
      fprintf(stderr, "Error: Database is Busy - must wait intil other threads have completed operations before accessing database!\n");
    break;
    
    case SQLITE_NOMEM:
    case SQLITE_IOERR_NOMEM:
      fprintf(stderr, "Error: Out of Memory for Database!\n");
    break;
    
    case SQLITE_READONLY:
      fprintf(stderr, "Error: Cannot write to Database - connection is Read Only!\n");
    break;
    
    case SQLITE_INTERRUPT:
      fprintf(stderr, "Error: Database operation was interrupted!\n");
    break;
    
    case SQLITE_IOERR:
    case SQLITE_IOERR_READ:
    case SQLITE_IOERR_WRITE:
    case SQLITE_IOERR_RDLOCK:
    case SQLITE_IOERR_SEEK:
      fprintf(stderr, "Error: Input/Output Error accessing Database!  (Did you remove a disk/drive?)\n");
    break;
    
    case SQLITE_CORRUPT:
      fprintf(stderr, "Error: The database is corrupt!\n");
    break;
    
    case SQLITE_NOTFOUND:
      fprintf(stderr, "Error: Database File not found!\n");
    break;
    
    case SQLITE_FULL:
      fprintf(stderr, "Error: Drive Full - Cannot write to database/temporary files!\n");
    break;
    
    case SQLITE_CANTOPEN:
      fprintf(stderr, "Error: Cannot open database/temporary file!\n");
    break;
    
    case SQLITE_PROTOCOL:
      fprintf(stderr, "Error: Database is busy from use by other process!\n");
    break;
    
    case SQLITE_EMPTY:
      fprintf(stderr, "Error: An Unknown Database Error has occurred!\n");
    break;
    
    case SQLITE_SCHEMA:
      fprintf(stderr, "Error: Database setup has changed!\n");
    break;
    
    case SQLITE_TOOBIG:
      fprintf(stderr, "Error: Too much data is being processed at once!\n");
      /* Might get this when writing a description! */
    break;
    
    case SQLITE_CONSTRAINT:
      fprintf(stderr, "Error: Operation violated database constraint (%s)!\n", sqlite3_errmsg(db));
    break;
    
    case SQLITE_MISMATCH:
      fprintf(stderr, "Error: Mismatched Datatype writing to Database!\n");
    break;
    
    case SQLITE_MISUSE:
      fprintf(stderr, "Error: Bad Database code encountered!\n");
    break;
    
    case SQLITE_NOLFS:
      fprintf(stderr, "Error: The Database file has grown too big for the filesystem!\n");
    break;
    
    case SQLITE_AUTH:
      fprintf(stderr, "Error: Unauthorised Database Access!\n");
    break;
    
    case SQLITE_FORMAT:
      fprintf(stderr, "Error: An Unknown Database Error has occurred!\n");
    break;
    
    case SQLITE_RANGE:
      fprintf(stderr, "Error: Database Parameter Access out of range!\n");
    break;
    
    case SQLITE_NOTADB:
      fprintf(stderr, "Error: Database file is corrupt!\n");
    break;
    
    case SQLITE_NOTICE:
    case SQLITE_WARNING:
      fprintf(stderr, "Error: An Unknown Database Error has occurred!\n");
    break;
    
    case SQLITE_ROW:
      printf("More database output available\n");
    break;
    
    case SQLITE_DONE:
      printf("Operation Complete\n");
    break;
    
    case SQLITE_OK_LOAD_PERMANENTLY:
      printf("Database Extension loaded permanently!\n");
    break;
    
    case SQLITE_BUSY_RECOVERY:
      fprintf(stderr, "Error: Another process accessing the Database is recovering from a serious error!\n");
    break;
    
    case SQLITE_LOCKED_SHAREDCACHE:
      fprintf(stderr, "Error: Another process is using the database's cache!\n");
    break;
    
    case SQLITE_READONLY_RECOVERY:
      fprintf(stderr, "Error: Database needs to be recovered from a serious error but is Read Only!\n");
    break;
    
    case SQLITE_CORRUPT_VTAB:
      fprintf(stderr, "Error: Virtual Table in Database is corrupt!\n");
    break;
    
    case SQLITE_CANTOPEN_NOTEMPDIR:
      fprintf(stderr, "Error: An Unknown Database Error has occurred!\n");
    break;
    
    case SQLITE_CONSTRAINT_CHECK:
      fprintf(stderr, "Error: Database 'Check' Constraint failed!\n");
    break;
    
    case SQLITE_NOTICE_RECOVER_WAL:
      fprintf(stdin, "Database Recovered after serious error!\n");
    break;
    
    case SQLITE_WARNING_AUTOINDEX:
      fprintf(stderr, "Warning: Databse used automatic indexing.\n");
    break;
    
    case SQLITE_ABORT_ROLLBACK:
      fprintf(stderr, "Error: Operation aborted due to Rollback!\n");
    break;
    
    case SQLITE_READONLY_CANTLOCK:
      fprintf(stderr, "Error: Cannot read Database - Database's Shared Memory File is Read Only!\n");
    break;
    
    case SQLITE_IOERR_SHORT_READ:
      fprintf(stderr, "Error: Could not read all the required data from database!\n");
    break;
    
    case SQLITE_CANTOPEN_ISDIR:
      fprintf(stderr, "Error: Specified Database File is a Directory!\n");
    break;
    
    case SQLITE_CONSTRAINT_COMMITHOOK:
      fprintf(stderr, "Error: Database Constraint caused transaction to be rolled back!\n");
    break;
    
    case SQLITE_NOTICE_RECOVER_ROLLBACK:
      fprintf(stderr, "Warning: Database Journal rolled back!\n");
    break;
    
    case SQLITE_READONLY_ROLLBACK:
      fprintf(stderr, "Error: Database Journal needs to be rolled back but is Read Only!\n");
    break;
    
    case SQLITE_CANTOPEN_FULLPATH:
    case SQLITE_CANTOPEN_CONVPATH:
      fprintf(stderr, "Error: Cannot open database - File path cannot be found!\n");
    break;
    
    case SQLITE_CONSTRAINT_FOREIGNKEY:
      fprintf(stderr, "Error: Database 'Foreign Key' Constraint failed!\n");
    break;
    
    case SQLITE_READONLY_DBMOVED:
      fprintf(stderr, "Error: The Database appears to have moved!\n");
    break;
    
    case SQLITE_IOERR_FSYNC:
    case SQLITE_IOERR_DIR_FSYNC:
      fprintf(stderr, "Error: Database Input/Output Error occured while trying to flush drive buffers!\n");
    break;
    
    case SQLITE_CONSTRAINT_FUNCTION:
      fprintf(stderr, "Error: An Unknown Database Error has occurred!\n");
    break;
    
    case SQLITE_CONSTRAINT_NOTNULL:
      fprintf(stderr, "Error: Attempted to add Null data into a database field that requires data!\n");
    break;
    
    case SQLITE_IOERR_TRUNCATE:
      fprintf(stderr, "Error: Input/Output error attempting to truncate file!\n");
    break;
    
    case SQLITE_CONSTRAINT_PRIMARYKEY:
      fprintf(stderr, "Error: Database 'Primary Key' Constraint failed!\n");
    break;
    
    case SQLITE_IOERR_FSTAT:
      fprintf(stderr, "Error: Input/Output error accessing file stats!\n");
    break;
    
    case SQLITE_CONSTRAINT_TRIGGER:
      fprintf(stderr, "Error: Database Operation Aborted because of Database Trigger Error!\n");
    break;
    
    case SQLITE_IOERR_UNLOCK:
      fprintf(stderr, "Error: Input/Output Error unlocking file!\n");
    break;
    
    case SQLITE_CONSTRAINT_UNIQUE:
    case SQLITE_CONSTRAINT_ROWID:
      fprintf(stderr, "Error: Attempted to insert a duplicate value in a Unique field in database!\n");
    break;
    
    case SQLITE_CONSTRAINT_VTAB:
    case SQLITE_IOERR_BLOCKED:
      fprintf(stderr, "Error: An Unknown Database Error has occurred!\n");
    break;
    
    case SQLITE_IOERR_DELETE:
      fprintf(stderr, "Error: Input/Output Error encountered attempting to delete file!\n");
    break;
    
    case SQLITE_IOERR_ACCESS:
      fprintf(stderr, "Error: Input/Output Error encountered attempting to access file!\n");
    break;
    
    case SQLITE_IOERR_CHECKRESERVEDLOCK:
    case SQLITE_IOERR_LOCK:
      fprintf(stderr, "Error: An Unknown Input/Output Error was encountered during a file lock operation!\n");
    break;
    
    case SQLITE_IOERR_CLOSE:
      fprintf(stderr, "Error: Input/Output Error encountered closing file!\n");
    break;
    
    case SQLITE_IOERR_DIR_CLOSE:
      fprintf(stderr, "Error: An Unknown Database Error has occurred!\n");
    break;
    
    case SQLITE_IOERR_SHMOPEN:
    case SQLITE_IOERR_SHMSIZE:
    case SQLITE_IOERR_SHMLOCK:
    case SQLITE_IOERR_SHMMAP:
      fprintf(stderr, "Error: Input/Output Error encountered while working with Shared Memory!\n");
    break;
    
    case SQLITE_IOERR_DELETE_NOENT:
      fprintf(stderr, "Error: Error deleting file - file does not exist!\n");
    break;
    
    case SQLITE_IOERR_MMAP:
      fprintf(stderr, "Error: Input/Output Error encountered while attempting to map database into memory!\n");
    break;
    
    case SQLITE_IOERR_GETTEMPPATH:
      fprintf(stderr, "Error: Cannot locate temporary files directory!\n");
    break;
    
    case SQLITE_IOERR_CONVPATH:
      fprintf(stderr, "Error: An Input/Output Error occurred accessing file path!\n");
    break;
    
    default:
      fprintf(stderr, "Error: A Completely Unknown Database Error has occurred!\n");
    break;
  }
}
