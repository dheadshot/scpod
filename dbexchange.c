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
unsigned long long passbackull = 0;
sqlite3_stmt *channelstmt = NULL, *itemdlstmt = NULL, *configstmt = NULL, 
             *chancatstmt = NULL, *selitemstmt = NULL, *itemcatstmt = NULL, 
             *itemndlstmt = NULL, *uditemdlstmt = NULL;

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
    if (retcode != SQLITE_OK && retcode != SQLITE_DONE && retcode != SQLITE_ROW)
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
    if (retcode != SQLITE_OK && retcode != SQLITE_DONE && retcode != SQLITE_ROW)
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
  if (passbackstr != NULL) free(passbackstr);
  passbackstr = NULL;
  if (!dbisopen) return -1;
  int rc = sqlite3_close(db);
  if (rc == SQLITE_OK || rc == SQLITE_DONE) return 1;
  dbwriteerror(rc);
  return 0;
}

char *getsettingdata(char *setting)
{
  int rc = 1;
  if (setting == NULL) return NULL;
  if (dbisopen == 0) rc = opendb(0);
  if (rc == 0) return NULL;
  char ucsett[256] = "", *sqpos;
  strtoupper(ucsett,setting);
  while ((sqpos = strstr(ucsett,"'")) != NULL) sqpos[0] = '_';
  char settsql[512] = "", *anerrmsg;
  sprintf(settsql, "SELECT Data FROM Config WHERE Setting = '%s';",ucsett);
  if (passbackstr != NULL) free(passbackstr);
  passbackstr = NULL;
  
  rc = sqlite3_exec(db, settsql, callback_gsd, 0, &anerrmsg);
  if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
  {
    dbwriteerror(rc);
    fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
    sqlite3_free(anerrmsg);
    return NULL;
  }
  char *outstr = NULL;
  if (passbackstr == NULL)
  {
    outstr = (char *) malloc(sizeof(char));
    if (outstr == NULL) return NULL;
    outstr[0] = 0;
    return outstr;
  }
  outstr = (char *) malloc(sizeof(char)*(1+strlen(passbackstr)));
  if (outstr == NULL) return NULL;
  strcpy(outstr, passbackstr);
  return outstr;
}

int writecsview(char *setting)
{
  int rc;
  char *sqpos, setsql[512] = "", *anerrmsg;
  char *setttmp = NULL;
  
  if (setting == NULL)
  {
    strcpy(setsql, "SELECT * FROM Config;");
    printf("Setting = Value\n------------------\n");
  }
  else
  {
    setttmp = (char *) malloc(sizeof(char)*(1+strlen(setting)));
    if (setttmp == NULL) return 0;
    strtoupper(setttmp, setting);
    while ((sqpos = strstr(setttmp, "'")) != NULL) sqpos[0] = '_';
    sprintf(setsql, "SELECT * FROM Config WHERE Setting='%s';", setttmp);
    free(setttmp);
  }
  passbackul = 0;
  rc = sqlite3_exec(db, setsql, callback_csview, 0, &anerrmsg);
  if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
  {
    dbwriteerror(rc);
    fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
    sqlite3_free(anerrmsg);
    return 0;
  }
  if (passbackul == 0)
  {
    if (setting != NULL) fprintf(stderr, "Warning: %s has not been set!\n", setting);
    else fprintf(stderr, "Warning: No settings have been set!\n");
  }
  return 1;
}

int preparecsstatement(char *setting)
{
  int rc, sisset;
  char *anerrmsg = NULL;
  char setsql[512] = "";
  char *sqpos = NULL;
  
  while ((sqpos = strstr(setting, "'")) != NULL) sqpos[0] = '_';
  sprintf(setsql, "SELECT Setting FROM Config WHERE Setting='%s';", setting);
  rc = sqlite3_exec(db, setsql, callback_csset, 0, &anerrmsg);
  if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
  {
    dbwriteerror(rc);
#ifdef DEBUG
    	printf("rc=%d, %d\n",rc, sqlite3_extended_errcode(db));
#endif
    fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
    sqlite3_free(anerrmsg);
    return 0;
  }
  
  if (passbackstr == NULL) sisset = 0;
  else if (streq_i(passbackstr, setting)) sisset = 1;
  else sisset = 0;
  
  char sqlstmt[512] = "";
  if (sisset)
  {
    strcpy(sqlstmt, "UPDATE Config SET Data = ?2 WHERE Setting = ?1;");
  }
  else
  {
    strcpy(sqlstmt, "INSERT INTO Config (Setting, Data) VALUES (?1, ?2);");
  }
  rc = sqlite3_prepare_v2(db, sqlstmt, strlen(sqlstmt)+1, &configstmt, NULL);
  if (rc != SQLITE_OK && rc != SQLITE_DONE)
  {
    dbwriteerror(rc);
#ifdef DEBUG
    	printf("rc=%d, %d\n",rc, sqlite3_extended_errcode(db));
#endif
    if (configstmt != NULL) sqlite3_finalize(configstmt);
    configstmt = NULL;
    return 0;
  }
  return 1;
}

int setconfigsetting(char *setting, char *value)
{
  if (configstmt == NULL) return 0;
  
  int rc;
  
  /* Bind Values */
  rc = sqlite3_bind_text(configstmt, 1, setting, strlen(setting)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    sqlite3_finalize(configstmt);
    return 0;
  }
  rc = sqlite3_bind_text(configstmt, 2, value, strlen(value)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    sqlite3_finalize(configstmt);
    return 0;
  }
  
  /* Execute Statement */
  rc = sqlite3_step(configstmt);
  if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
  {
    dbwriteerror(rc);
    sqlite3_finalize(configstmt);
    return 0;
  }
  
  /* Finalise Statement */
  rc = sqlite3_finalize(configstmt);
  if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
  {
    dbwriteerror(rc);
    sqlite3_finalize(configstmt);
    return 0;
  }
  
  return 1;
}

unsigned long long getchannelidfromtitle(char *title)
{
  char sqlstmt[] = "SELECT Channel_ID FROM Channel WHERE Title = '%s';";
  char *stitle, *sqlcode;
  stitle = (char *) malloc(sizeof(char)*2*(1+strlen(title)));
  if (stitle == NULL)
  {
    fprintf(stderr, "Error: Out of Memory resolving channel title!\n");
    return 0;
  }
  strdsqs(stitle, title);
  sqlcode = (char *) malloc(sizeof(char)*(256+strlen(stitle)));
  if (sqlcode == NULL)
  {
    fprintf(stderr, "Error: Out of Memory resolving channel title!\n");
    free(stitle);
    return 0;
  }
  sprintf(sqlcode, sqlstmt, stitle);
  free(stitle);
  int rc;
  char *anerrmsg;
  passbackull = 0;
  rc = sqlite3_exec(db, sqlcode, callback_gcid, 0, &anerrmsg); /* Reuse callback_gcid */
  if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
  {
    dbwriteerror(rc);
#ifdef DEBUG
    	printf("rc=%d, %d\n",rc, sqlite3_extended_errcode(db));
#endif
    fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
    sqlite3_free(anerrmsg);
    free(sqlcode);
    return 0;
  }
  free(sqlcode);
  if (passbackull == 0) fprintf(stderr, "Error: Channel '%s' not found!\n", title);
  return passbackull;
}

unsigned long long getlatestupdatedchannel()
{
  char sqlstmt[] = "SELECT Channel_ID FROM Channel ORDER BY strftime('%s', Last_Refresh_Date) DESC LIMIT 1;";
  char *anerrmsg;
  int rc;
  passbackull = 0;
  rc = sqlite3_exec(db, sqlstmt, callback_gcid, 0, &anerrmsg); /* Reuse callback_gcid */
  if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
  {
    dbwriteerror(rc);
#ifdef DEBUG
    	printf("rc=%d, %d\n",rc, sqlite3_extended_errcode(db));
#endif
    fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
    sqlite3_free(anerrmsg);
    return 0;
  }
  if (passbackull == 0) fprintf(stderr, "Error: No channels found!\n");
  return passbackull;
}

unsigned long long getitemidfromtitle(char *title, unsigned long long chanid)
{
  char sqlstmt[] = "SELECT Item_ID FROM Item WHERE Title = '%s' AND Channel_ID = '%ull' LIMIT 1;";
  char *stitle, *sqlcode;
  if (chanid == 0) return 0;
  stitle = (char *) malloc(sizeof(char)*2*(1+strlen(title)));
  if (stitle == NULL)
  {
    fprintf(stderr, "Error: Out of Memory resolving item title!\n");
    return 0;
  }
  strdsqs(stitle, title);
  sqlcode = (char *) malloc(sizeof(char)*(512+strlen(stitle)));
  if (sqlcode == NULL)
  {
    fprintf(stderr, "Error: Out of Memory resolving item title!\n");
    free(stitle);
    return 0;
  }
  sprintf(sqlcode, sqlstmt, stitle, chanid);
  free(stitle);
  int rc;
  char *anerrmsg;
  passbackull = 0;
  rc = sqlite3_exec(db, sqlcode, callback_giid, 0, &anerrmsg); /* Reuse callback_giid */
  if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
  {
    dbwriteerror(rc);
#ifdef DEBUG
    	printf("rc=%d, %d\n",rc, sqlite3_extended_errcode(db));
#endif
    fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
    sqlite3_free(anerrmsg);
    free(sqlcode);
    return 0;
  }
  free(sqlcode);
  if (passbackull == 0) fprintf(stderr, "Error: Item '%s' not found in channel number %ull!\n", title, chanid);
  return passbackull;
}

unsigned long long getlatestiteminchannel(unsigned long long chanid)
{
  char sqlstmt[384] = "";
  char *anerrmsg;
  int rc;
  if (chanid == 0) return 0;
  sprintf(sqlstmt,"SELECT Item_ID FROM Item WHERE Channel_ID = %llu ORDER BY strftime('%%s', Publication_Date) DESC LIMIT 1;",chanid);
  passbackull = 0;
  rc = sqlite3_exec(db, sqlstmt, callback_giid, 0, &anerrmsg); /* Reuse callback_giid */
  if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
  {
    dbwriteerror(rc);
#ifdef DEBUG
    	printf("rc=%d, %d\n",rc, sqlite3_extended_errcode(db));
#endif
    fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
    sqlite3_free(anerrmsg);
    return 0;
  }
  if (passbackull == 0) fprintf(stderr, "Error: No items found in this channel!\n");
  return passbackull;
}

int listallchannels()
{
  char sqlstmt[] = "SELECT Channel_ID, Title FROM Channel;";
  char *anerrmsg;
  int rc;
  passbackul = 0;
  printf("ID\tTitle\n----------------\n");
  rc = sqlite3_exec(db, sqlstmt, callback_lac, 0, &anerrmsg);
  if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
  {
    dbwriteerror(rc);
#ifdef DEBUG
    	printf("rc=%d, %d\n",rc, sqlite3_extended_errcode(db));
#endif
    fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
    sqlite3_free(anerrmsg);
    return 0;
  }
  if (passbackul == 0) printf("You have not subscribed to any channels!\n");
  return 1;
}

int listchannelinfo(unsigned long long channelid)
{
  char sqlselstmt[] = "SELECT Channel.Channel_ID, Channel.Title, Channel.Channel_URL, Channel.Link, Channel.Description, Channel.Language_Major, Channel.Language_Minor, Channel.Copyright, Channel.Managing_Editor, Channel.Webmaster, Channel.Publication_Date, Channel.Last_Build_Date, Channel.Generator, Channel.TTL, Channel.Last_Refresh_Date, Channel.Directory, Channel_Category.Category, Channel_Category.Domain FROM Channel LEFT JOIN Channel_Category ON Channel.Channel_ID = Channel_Category.Channel_ID %s ORDER BY Channel.Channel_ID;";
  char sqlwherestmt[] = "WHERE Channel.Channel_ID = %llu";
  char wherebit[256] = "";
  char sqlstmt[1024] = "";
  char *anerrmsg;
  int rc;
  if (channelid != 0) sprintf(wherebit, sqlwherestmt, channelid);
  sprintf(sqlstmt,sqlselstmt,wherebit);
  passbackull = 0;
  rc = sqlite3_exec(db, sqlstmt, callback_lci, 0, &anerrmsg);
  if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
  {
    dbwriteerror(rc);
#ifdef DEBUG
    	printf("rc=%d, %d\n",rc, sqlite3_extended_errcode(db));
#endif
    	printf("Stmt=%s\n",sqlstmt);
    fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
    sqlite3_free(anerrmsg);
    return 0;
  }
  if (passbackull == 0) printf("Channel Not Found!\n");
  return 1;
  
}

int listallitemsinchannel(unsigned long long chanid)
{
  char sqlstmt[1024] = "";
  sprintf(sqlstmt,"SELECT Item_ID, Title FROM Item WHERE Channel_ID = %llu;", chanid);
  char *anerrmsg;
  int rc;
  passbackul = 0;
  printf("ID\tTitle\n----------------\n");
  rc = sqlite3_exec(db, sqlstmt, callback_laiic, 0, &anerrmsg);
  if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
  {
    dbwriteerror(rc);
#ifdef DEBUG
    	printf("rc=%d, %d\n",rc, sqlite3_extended_errcode(db));
#endif
    fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
    sqlite3_free(anerrmsg);
    return 0;
  }
  if (passbackul == 0) printf("No Items Found!\n");
  return 1;
  
}

int listiteminfoinchannel(unsigned long long itemid, 
                          unsigned long long channelid, int specdl)
{ /* Specdl: 0=all, 1=dled, -1=ndled */
  char sqlstmt[1024] = "";
  char sqlsubstmt[256] = "";
  char wheredlstmt[256] = "";
  char *anerrmsg;
  int rc;
  unsigned long long stochanid = 0;
  if (specdl == 1)
  {
    strcpy(wheredlstmt, "AND   Item.Downloaded > 0");
  }
  else if (specdl == -1)
  {
    strcpy(wheredlstmt, "AND   Item.Downloaded = 0");
  }
  if (itemid != 0)
  {
    sprintf(sqlstmt, "SELECT Item.Item_ID, Item.Title, Item.Link, Item.Description, Item.Author, Item.Enclosure_Length, Item.GUID, Item.Publication_Date, Item.Source_URL, Item.Source_Name, Item.Downloaded, Item.Downloaded_Date, Item.Filename, Item.Play_Count, Item_Category.Category, Item_Category.Domain FROM Item LEFT JOIN Item_Category ON Item.Item_ID = Item_Category.Item_ID WHERE Item.Item_ID = %llu %s ORDER BY strftime('%%s',Item.Publication_Date) ASC;", itemid, wheredlstmt);
  }
  else if (channelid != 0)
  {
    sprintf(sqlstmt, "SELECT Item.Item_ID, Item.Title, Item.Link, Item.Description, Item.Author, Item.Enclosure_Length, Item.GUID, Item.Publication_Date, Item.Source_URL, Item.Source_Name, Item.Downloaded, Item.Downloaded_Date, Item.Filename, Item.Play_Count, Item_Category.Category, Item_Category.Domain FROM Item LEFT JOIN Item_Category ON Item.Item_ID = Item_Category.Item_ID WHERE Item.Channel_ID = %llu %s ORDER BY strftime('%%s',Item.Publication_Date) ASC;", channelid, wheredlstmt);
  }
  else
  {
    if (wheredlstmt[0] != 0)
    {
      wheredlstmt[0] = 'W';
      wheredlstmt[1] = 'H';
      wheredlstmt[2] = 'E';
      wheredlstmt[3] = 'R';
      wheredlstmt[4] = 'E';
    }
    sprintf(sqlstmt, "SELECT Channel.Channel_ID, Channel.Title, Item.Item_ID, Item.Title, Item.Link, Item.Description, Item.Author, Item.Enclosure_Length, Item.GUID, Item.Publication_Date, Item.Source_URL, Item.Source_Name, Item.Downloaded, Item.Downloaded_Date, Item.Filename, Item.Play_Count, Item_Category.Category, Item_Category.Domain FROM Channel INNER JOIN Item ON Channel.Channel_ID = Item.Channel_ID LEFT JOIN Item_Category ON Item.Item_ID = Item_Category.Item_ID %s ORDER BY Channel.Channel_ID ASC, strftime('%%s',Item.Publication_Date) ASC;", wheredlstmt);
  }
  if (itemid != 0 || channelid != 0)
  {
    /* Write some channel info */
    sprintf(sqlsubstmt, "SELECT Channel_ID, Title FROM Channel WHERE Channel_ID = %llu LIMIT 1;", channelid);
    passbackul = 0;
    rc = sqlite3_exec(db, sqlsubstmt, callback_ciliiic, 0, &anerrmsg);
    if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
    {
      dbwriteerror(rc);
#ifdef DEBUG
      	printf("rc=%d, %d\n",rc, sqlite3_extended_errcode(db));
#endif
      fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
      sqlite3_free(anerrmsg);
      return 0;
    }
    if (passbackul == 0)
    {
      fprintf(stderr,"Error: Channel Not Found!\n");
      return 0;
    }
  }
  passbackull = 0;
  rc = sqlite3_exec(db, sqlstmt, callback_liiic, &stochanid, &anerrmsg);
  if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
  {
    dbwriteerror(rc);
#ifdef DEBUG
    	printf("rc=%d, %d\n",rc, sqlite3_extended_errcode(db));
#endif
    fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
    sqlite3_free(anerrmsg);
    return 0;
  }
  
  if (passbackull == 0) printf("No Items found\n");
  
  return 1;
}

int preparechannelstatement()
{
  char sqlstmt[] = "INSERT INTO Channel (Channel_ID, Channel_URL, Title, Link, Description, Language_Major, Language_Minor, Copyright, Managing_Editor, Webmaster, Publication_Date, Last_Build_Date, Generator, Documentation, RSS_Version, TTL, Image_URL, Image_Title, Image_Link, Image_Description, Image_Width, Image_Height, Last_Refresh_Date, Directory) VALUES (NULL, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, datetime('now'), ?);";
/*  int rc = sqlite3_prepare_v2(db, sqlstmt, -1, &channelstmt, NULL);*/
  int rc = sqlite3_prepare_v2(db, sqlstmt, strlen(sqlstmt)+1, &channelstmt, NULL);
  if (rc != SQLITE_OK && rc != SQLITE_DONE)
  {
    dbwriteerror(rc);
#ifdef DEBUG
    	printf("rc=%d, %d\n",rc, sqlite3_extended_errcode(db));
#endif
    if (channelstmt != NULL) sqlite3_finalize(channelstmt);
    channelstmt = NULL;
    return 0;
  }
  return 1;
}

unsigned long long addchannel(chanpropnode *achan, char *chanurl, char *rss_version, char *directory)
{
  if (channelstmt == NULL) return 0;
  if (achan == NULL || directory == NULL || chanurl == NULL) return 0;
  char datetext[256] = "";
  int rc;
  
#ifdef DEBUG
  	int c = 0;
    	printf("chanurl='%s'\n",chanurl);
#endif
  /* Check channel URL doesn't already exist */
  char churlsql[2048] = "", *anerrmsg;
  if (strstr(chanurl,"'") != NULL )
  {
    fprintf(stderr, "Invalid Channel URL!\n");
    return 0;
  }
  sprintf(churlsql, "SELECT Channel_URL FROM Channel WHERE Channel_URL = '%s';",chanurl);
  if (passbackstr != NULL) free(passbackstr);
  passbackstr = NULL;
  rc = sqlite3_exec(db, churlsql, callback_ccu, 0, &anerrmsg);
  if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
  {
    dbwriteerror(rc);
#ifdef DEBUG
    	printf("rc=%d, %d\n",rc, sqlite3_extended_errcode(db));
#endif
    fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
    sqlite3_free(anerrmsg);
    return 0;
  }
  if (passbackstr != NULL)
  {
    fprintf(stderr,"A channel with the URL '%s' is already in the database!\n", chanurl);
    return 0;
  }
  
  /* Bind values */
  rc = sqlite3_bind_text(channelstmt, 1, chanurl, strlen(chanurl)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
#ifdef DEBUG
    	printf("rc=%d, %d\n",rc, sqlite3_extended_errcode(db));
#endif
    return 0;
  }
  rc = sqlite3_bind_text(channelstmt, 2, achan->title, strLen(achan->title)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(channelstmt, 3, achan->link, strLen(achan->link)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(channelstmt, 4, achan->description, strLen(achan->description)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(channelstmt, 5, achan->language_main, strLen(achan->language_main)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(channelstmt, 6, achan->language_sub, strLen(achan->language_sub)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(channelstmt, 7, achan->copyright, strLen(achan->copyright)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(channelstmt, 8, achan->managingeditor, strLen(achan->managingeditor)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(channelstmt, 9, achan->webmaster, strLen(achan->webmaster)*sizeof(char), SQLITE_TRANSIENT);
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
  if (datetext[0] != 0)
    rc = sqlite3_bind_text(channelstmt, 10, datetext, strLen(datetext)*sizeof(char), SQLITE_TRANSIENT);
  else
    rc = sqlite3_bind_null(channelstmt, 10);/*, datetext, strLen(datetext)*sizeof(char), SQLITE_TRANSIENT);*/
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rssdatetoisodate(datetext,&(achan->lastbuilddate));
  if (datetext[0] != 0)
    rc = sqlite3_bind_text(channelstmt, 11, datetext, strLen(datetext)*sizeof(char), SQLITE_TRANSIENT);
  else
    rc = sqlite3_bind_null(channelstmt, 11);/*, datetext, strLen(datetext)*sizeof(char), SQLITE_TRANSIENT);*/
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(channelstmt, 12, achan->generator, strLen(achan->generator)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(channelstmt, 13, achan->docs, strLen(achan->docs)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  if (rss_version != NULL)
    rc = sqlite3_bind_text(channelstmt, 14, rss_version, strLen(rss_version)*sizeof(char), SQLITE_TRANSIENT);
  else
    rc = sqlite3_bind_null(channelstmt,14);
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
  rc = sqlite3_bind_text(channelstmt, 16, achan->image.url, strLen(achan->image.url)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(channelstmt, 17, achan->image.title, strLen(achan->image.title)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(channelstmt, 18, achan->image.link, strLen(achan->image.link)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(channelstmt, 19, achan->image.description, strLen(achan->image.description)*sizeof(char), SQLITE_TRANSIENT);
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
  rc = sqlite3_bind_text(channelstmt, 22, directory, strLen(directory)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  
  /* Execute Statement */
  rc = sqlite3_step(channelstmt);
  if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
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
  
#ifdef DEBUG
    	/*c = getchar();*/
#endif
  /* Get Channel_ID */
  char gcidsql[] = "SELECT Channel_ID FROM Channel WHERE ROWID=last_insert_rowid();";
  /*char *anerrmsg;*/
  passbackull = 0;
  rc = sqlite3_exec(db,gcidsql,callback_gcid,0,&anerrmsg);
  if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
  {
    dbwriteerror(rc);
    fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
    sqlite3_free(anerrmsg);
    return 0;
  }
  
  if (passbackull == 0) return 0;
  achan->dbcid = passbackull;
  
  /* Insert Skip-Hours */
  int i;
  char shsql[256] = "";
  if (achan->skiphours != NULL)
  {
    for (i=0;achan->skiphours[i] != -1;i++)
    {
      sprintf(shsql,"INSERT INTO \"Channel_Skip_Hour\" (CSHID, Channel_ID, Hour) VALUES (NULL, %llu, %d);", achan->dbcid, achan->skiphours[i]);
      rc = sqlite3_exec(db,shsql,NULL,0,&anerrmsg);
      if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
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
  char *sqpos = NULL;
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
      while ((sqpos = strstr(achan->skipdays[i],"'")) != NULL) sqpos[0] = '_';
      sprintf(shsql,"INSERT INTO \"Channel_Skip_Day\" (CSHID, Channel_ID, Day_Name, Day_Number) VALUES (NULL, %llu, '%s', %d);", achan->dbcid, achan->skipdays[i], n);
      rc = sqlite3_exec(db,shsql,NULL,0,&anerrmsg);
      if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
      {
        dbwriteerror(rc);
        fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
        sqlite3_free(anerrmsg);
        return 0;
        
      }
    }
  }
  
  return passbackull;
}

int finalisechannelstatement()
{
  if (channelstmt != NULL) sqlite3_finalize(channelstmt);
  channelstmt = NULL;
}

int checkupdatechannel(chanpropnode *achan, char *rss_version)
{
  char somesql[256] = "", *anerrmsg;
  int rc;
  
  /* Find out what needs to be updated */
  sprintf(somesql,"SELECT * FROM Channel WHERE Channel_ID = %llu;",achan->dbcid);
  if (passbackstr != NULL) free(passbackstr);
  passbackstr = NULL;
  rc = sqlite3_exec(db,somesql,callback_cuc,(void *) achan,&anerrmsg);
  if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
  {
    dbwriteerror(rc);
    fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
    sqlite3_free(anerrmsg);
    return 0;
  }
  if (passbackstr == NULL || strlen(passbackstr)<19)
  {
    fprintf(stderr, "Warning: Could not determine where channel update is needed - not updating\n         channel!\n");
    return 0;
  }
  
  /* If nothing needs updating, return. */
  if (startsame_(passbackstr, "0000000000000000000") != 0) return 1;
  
  /* Do updates */
  char *udsql;
  char *tmpstr;
  if (passbackstr[0] == '1' && achan->title != NULL)
  {
    tmpstr = (char *) malloc(2*sizeof(char)*(1+strlen(achan->title)));
    if (tmpstr == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      return 0;
    }
    strdsqs(tmpstr,achan->title);
    udsql = (char *) malloc(sizeof(char)*(257+strlen(tmpstr)));
    if (udsql == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      free(tmpstr);
      return 0;
    }
    sprintf(udsql,"UPDATE Channel SET Title = '%s' WHERE Channel_ID = %llu;",tmpstr,achan->dbcid);
    free(tmpstr);
    rc = sqlite3_exec(db,udsql,NULL,0,&anerrmsg);
    if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
    {
      dbwriteerror(rc);
      fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
      free(udsql);
      sqlite3_free(anerrmsg);
      return 0;
    }
    free(udsql);
  }
  if (passbackstr[1] == '1' && achan->link != NULL)
  {
    tmpstr = (char *) malloc(2*sizeof(char)*(1+strlen(achan->link)));
    if (tmpstr == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      return 0;
    }
    strdsqs(tmpstr,achan->link);
    udsql = (char *) malloc(sizeof(char)*(257+strlen(tmpstr)));
    if (udsql == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      free(tmpstr);
      return 0;
    }
    sprintf(udsql,"UPDATE Channel SET Link = '%s' WHERE Channel_ID = %llu;",tmpstr,achan->dbcid);
    free(tmpstr);
    rc = sqlite3_exec(db,udsql,NULL,0,&anerrmsg);
    if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
    {
      dbwriteerror(rc);
      fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
      free(udsql);
      sqlite3_free(anerrmsg);
      return 0;
    }
    free(udsql);
  }
  if (passbackstr[2] == '1' && achan->description != NULL)
  {
    tmpstr = (char *) malloc(2*sizeof(char)*(1+strlen(achan->description)));
    if (tmpstr == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      return 0;
    }
    strdsqs(tmpstr,achan->description);
    udsql = (char *) malloc(sizeof(char)*(257+strlen(tmpstr)));
    if (udsql == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      free(tmpstr);
      return 0;
    }
    sprintf(udsql,"UPDATE Channel SET Description = '%s' WHERE Channel_ID = %llu;",tmpstr,achan->dbcid);
    free(tmpstr);
    rc = sqlite3_exec(db,udsql,NULL,0,&anerrmsg);
    if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
    {
      dbwriteerror(rc);
      fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
      free(udsql);
      sqlite3_free(anerrmsg);
      return 0;
    }
    free(udsql);
  }
  if (passbackstr[3] == '1' && achan->language_main != NULL)
  {
    tmpstr = (char *) malloc(2*sizeof(char)*(1+strlen(achan->language_main)));
    if (tmpstr == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      return 0;
    }
    strdsqs(tmpstr,achan->language_main);
    udsql = (char *) malloc(sizeof(char)*(257+strlen(tmpstr)));
    if (udsql == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      free(tmpstr);
      return 0;
    }
    sprintf(udsql,"UPDATE Channel SET Language_Major = '%s' WHERE Channel_ID = %llu;",tmpstr,achan->dbcid);
    free(tmpstr);
    rc = sqlite3_exec(db,udsql,NULL,0,&anerrmsg);
    if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
    {
      dbwriteerror(rc);
      fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
      free(udsql);
      sqlite3_free(anerrmsg);
      return 0;
    }
    free(udsql);
  }
  if (passbackstr[4] == '1' && achan->language_sub != NULL)
  {
    tmpstr = (char *) malloc(2*sizeof(char)*(1+strlen(achan->language_sub)));
    if (tmpstr == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      return 0;
    }
    strdsqs(tmpstr,achan->language_sub);
    udsql = (char *) malloc(sizeof(char)*(257+strlen(tmpstr)));
    if (udsql == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      free(tmpstr);
      return 0;
    }
    sprintf(udsql,"UPDATE Channel SET Language_Minor = '%s' WHERE Channel_ID = %llu;",tmpstr,achan->dbcid);
    free(tmpstr);
    rc = sqlite3_exec(db,udsql,NULL,0,&anerrmsg);
    if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
    {
      dbwriteerror(rc);
      fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
      free(udsql);
      sqlite3_free(anerrmsg);
      return 0;
    }
    free(udsql);
  }
  if (passbackstr[5] == '1' && achan->copyright != NULL)
  {
    tmpstr = (char *) malloc(2*sizeof(char)*(1+strlen(achan->copyright)));
    if (tmpstr == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      return 0;
    }
    strdsqs(tmpstr,achan->copyright);
    udsql = (char *) malloc(sizeof(char)*(257+strlen(tmpstr)));
    if (udsql == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      free(tmpstr);
      return 0;
    }
    sprintf(udsql,"UPDATE Channel SET Copyright = '%s' WHERE Channel_ID = %llu;",tmpstr,achan->dbcid);
    free(tmpstr);
    rc = sqlite3_exec(db,udsql,NULL,0,&anerrmsg);
    if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
    {
      dbwriteerror(rc);
      fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
      free(udsql);
      sqlite3_free(anerrmsg);
      return 0;
    }
    free(udsql);
  }
  if (passbackstr[6] == '1' && achan->managingeditor != NULL)
  {
    tmpstr = (char *) malloc(2*sizeof(char)*(1+strlen(achan->managingeditor)));
    if (tmpstr == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      return 0;
    }
    strdsqs(tmpstr,achan->managingeditor);
    udsql = (char *) malloc(sizeof(char)*(257+strlen(tmpstr)));
    if (udsql == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      free(tmpstr);
      return 0;
    }
    sprintf(udsql,"UPDATE Channel SET Managing_Editor = '%s' WHERE Channel_ID = %llu;",tmpstr,achan->dbcid);
    free(tmpstr);
    rc = sqlite3_exec(db,udsql,NULL,0,&anerrmsg);
    if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
    {
      dbwriteerror(rc);
      fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
      free(udsql);
      sqlite3_free(anerrmsg);
      return 0;
    }
    free(udsql);
  }
  if (passbackstr[7] == '1' && achan->webmaster != NULL)
  {
    tmpstr = (char *) malloc(2*sizeof(char)*(1+strlen(achan->webmaster)));
    if (tmpstr == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      return 0;
    }
    strdsqs(tmpstr,achan->webmaster);
    udsql = (char *) malloc(sizeof(char)*(257+strlen(tmpstr)));
    if (udsql == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      free(tmpstr);
      return 0;
    }
    sprintf(udsql,"UPDATE Channel SET Webmaster = '%s' WHERE Channel_ID = %llu;",tmpstr,achan->dbcid);
    free(tmpstr);
    rc = sqlite3_exec(db,udsql,NULL,0,&anerrmsg);
    if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
    {
      dbwriteerror(rc);
      fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
      free(udsql);
      sqlite3_free(anerrmsg);
      return 0;
    }
    free(udsql);
  }
  if (passbackstr[8] == '1' && achan->pubdate.fulldate != NULL)
  {
    tmpstr = (char *) malloc(256*sizeof(char));
    if (tmpstr == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      return 0;
    }
    rssdatetoisodate(tmpstr,&(achan->pubdate));
    udsql = (char *) malloc(sizeof(char)*(257+strlen(tmpstr)));
    if (udsql == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      free(tmpstr);
      return 0;
    }
    sprintf(udsql,"UPDATE Channel SET Publication_Date = '%s' WHERE Channel_ID = %llu;",tmpstr,achan->dbcid);
    free(tmpstr);
    rc = sqlite3_exec(db,udsql,NULL,0,&anerrmsg);
    if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
    {
      dbwriteerror(rc);
      fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
      free(udsql);
      sqlite3_free(anerrmsg);
      return 0;
    }
    free(udsql);
  }
  if (passbackstr[9] == '1' && achan->lastbuilddate.fulldate != NULL)
  {
    tmpstr = (char *) malloc(256*sizeof(char));
    if (tmpstr == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      return 0;
    }
    rssdatetoisodate(tmpstr,&(achan->lastbuilddate));
    udsql = (char *) malloc(sizeof(char)*(257+strlen(tmpstr)));
    if (udsql == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      free(tmpstr);
      return 0;
    }
    sprintf(udsql,"UPDATE Channel SET Last_Build_Date = '%s' WHERE Channel_ID = %llu;",tmpstr,achan->dbcid);
    free(tmpstr);
    rc = sqlite3_exec(db,udsql,NULL,0,&anerrmsg);
    if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
    {
      dbwriteerror(rc);
      fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
      free(udsql);
      sqlite3_free(anerrmsg);
      return 0;
    }
    free(udsql);
  }
  if (passbackstr[10] == '1' && achan->generator != NULL)
  {
    tmpstr = (char *) malloc(2*sizeof(char)*(1+strlen(achan->generator)));
    if (tmpstr == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      return 0;
    }
    strdsqs(tmpstr,achan->generator);
    udsql = (char *) malloc(sizeof(char)*(257+strlen(tmpstr)));
    if (udsql == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      free(tmpstr);
      return 0;
    }
    sprintf(udsql,"UPDATE Channel SET Generator = '%s' WHERE Channel_ID = %llu;",tmpstr,achan->dbcid);
    free(tmpstr);
    rc = sqlite3_exec(db,udsql,NULL,0,&anerrmsg);
    if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
    {
      dbwriteerror(rc);
      fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
      free(udsql);
      sqlite3_free(anerrmsg);
      return 0;
    }
    free(udsql);
  }
  if (passbackstr[11] == '1' && achan->docs != NULL)
  {
    tmpstr = (char *) malloc(2*sizeof(char)*(1+strlen(achan->docs)));
    if (tmpstr == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      return 0;
    }
    strdsqs(tmpstr,achan->docs);
    udsql = (char *) malloc(sizeof(char)*(257+strlen(tmpstr)));
    if (udsql == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      free(tmpstr);
      return 0;
    }
    sprintf(udsql,"UPDATE Channel SET Documentation = '%s' WHERE Channel_ID = %llu;",tmpstr,achan->dbcid);
    free(tmpstr);
    rc = sqlite3_exec(db,udsql,NULL,0,&anerrmsg);
    if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
    {
      dbwriteerror(rc);
      fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
      free(udsql);
      sqlite3_free(anerrmsg);
      return 0;
    }
    free(udsql);
  }
  if (passbackstr[12] == '1' && rss_version != NULL)
  {
    tmpstr = (char *) malloc(2*sizeof(char)*(1+strlen(rss_version)));
    if (tmpstr == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      return 0;
    }
    strdsqs(tmpstr,rss_version);
    udsql = (char *) malloc(sizeof(char)*(257+strlen(tmpstr)));
    if (udsql == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      free(tmpstr);
      return 0;
    }
    sprintf(udsql,"UPDATE Channel SET RSS_Version = '%s' WHERE Channel_ID = %llu;",tmpstr,achan->dbcid);
    free(tmpstr);
    rc = sqlite3_exec(db,udsql,NULL,0,&anerrmsg);
    if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
    {
      dbwriteerror(rc);
      fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
      free(udsql);
      sqlite3_free(anerrmsg);
      return 0;
    }
    free(udsql);
  }
  if (passbackstr[13] == '1')
  {
    tmpstr = (char *) malloc(256*sizeof(char));
    if (tmpstr == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      return 0;
    }
    sprintf(tmpstr,"%ld",achan->ttl);
    udsql = (char *) malloc(sizeof(char)*(257+strlen(tmpstr)));
    if (udsql == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      free(tmpstr);
      return 0;
    }
    sprintf(udsql,"UPDATE Channel SET TTL = %s WHERE Channel_ID = %llu;",tmpstr,achan->dbcid);
    free(tmpstr);
    rc = sqlite3_exec(db,udsql,NULL,0,&anerrmsg);
    if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
    {
      dbwriteerror(rc);
      fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
      free(udsql);
      sqlite3_free(anerrmsg);
      return 0;
    }
    free(udsql);
  }
  if (passbackstr[14] == '1' && achan->image.url != NULL)
  {
    tmpstr = (char *) malloc(2*sizeof(char)*(1+strlen(achan->image.url)));
    if (tmpstr == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      return 0;
    }
    strdsqs(tmpstr,achan->image.url);
    udsql = (char *) malloc(sizeof(char)*(257+strlen(tmpstr)));
    if (udsql == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      free(tmpstr);
      return 0;
    }
    sprintf(udsql,"UPDATE Channel SET Image_URL = '%s' WHERE Channel_ID = %llu;",tmpstr,achan->dbcid);
    free(tmpstr);
    rc = sqlite3_exec(db,udsql,NULL,0,&anerrmsg);
    if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
    {
      dbwriteerror(rc);
      fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
      free(udsql);
      sqlite3_free(anerrmsg);
      return 0;
    }
    free(udsql);
  }
  if (passbackstr[15] == '1' && achan->image.title != NULL)
  {
    tmpstr = (char *) malloc(2*sizeof(char)*(1+strlen(achan->image.title)));
    if (tmpstr == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      return 0;
    }
    strdsqs(tmpstr,achan->image.title);
    udsql = (char *) malloc(sizeof(char)*(257+strlen(tmpstr)));
    if (udsql == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      free(tmpstr);
      return 0;
    }
    sprintf(udsql,"UPDATE Channel SET Image_Title = '%s' WHERE Channel_ID = %llu;",tmpstr,achan->dbcid);
    free(tmpstr);
    rc = sqlite3_exec(db,udsql,NULL,0,&anerrmsg);
    if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
    {
      dbwriteerror(rc);
      fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
      free(udsql);
      sqlite3_free(anerrmsg);
      return 0;
    }
    free(udsql);
  }
  if (passbackstr[16] == '1' && achan->image.link != NULL)
  {
    tmpstr = (char *) malloc(2*sizeof(char)*(1+strlen(achan->image.link)));
    if (tmpstr == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      return 0;
    }
    strdsqs(tmpstr,achan->image.link);
    udsql = (char *) malloc(sizeof(char)*(257+strlen(tmpstr)));
    if (udsql == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      free(tmpstr);
      return 0;
    }
    sprintf(udsql,"UPDATE Channel SET Image_Link = '%s' WHERE Channel_ID = %llu;",tmpstr,achan->dbcid);
    free(tmpstr);
    rc = sqlite3_exec(db,udsql,NULL,0,&anerrmsg);
    if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
    {
      dbwriteerror(rc);
      fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
      free(udsql);
      sqlite3_free(anerrmsg);
      return 0;
    }
    free(udsql);
  }
  if (passbackstr[17] == '1' && achan->image.description != NULL)
  {
    tmpstr = (char *) malloc(2*sizeof(char)*(1+strlen(achan->image.description)));
    if (tmpstr == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      return 0;
    }
    strdsqs(tmpstr,achan->image.description);
    udsql = (char *) malloc(sizeof(char)*(257+strlen(tmpstr)));
    if (udsql == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      free(tmpstr);
      return 0;
    }
    sprintf(udsql,"UPDATE Channel SET Image_Description = '%s' WHERE Channel_ID = %llu;",tmpstr,achan->dbcid);
    free(tmpstr);
    rc = sqlite3_exec(db,udsql,NULL,0,&anerrmsg);
    if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
    {
      dbwriteerror(rc);
      fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
      free(udsql);
      sqlite3_free(anerrmsg);
      return 0;
    }
    free(udsql);
  }
  if (passbackstr[18] == '1')
  {
    tmpstr = (char *) malloc(256*sizeof(char));
    if (tmpstr == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      return 0;
    }
    sprintf(tmpstr,"%ld",achan->image.width);
    udsql = (char *) malloc(sizeof(char)*(257+strlen(tmpstr)));
    if (udsql == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      free(tmpstr);
      return 0;
    }
    sprintf(udsql,"UPDATE Channel SET Image_Width = %s WHERE Channel_ID = %llu;",tmpstr,achan->dbcid);
    free(tmpstr);
    rc = sqlite3_exec(db,udsql,NULL,0,&anerrmsg);
    if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
    {
      dbwriteerror(rc);
      fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
      free(udsql);
      sqlite3_free(anerrmsg);
      return 0;
    }
    free(udsql);
  }
  if (passbackstr[19] == '1')
  {
    tmpstr = (char *) malloc(256*sizeof(char));
    if (tmpstr == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      return 0;
    }
    sprintf(tmpstr,"%ld",achan->image.height);
    udsql = (char *) malloc(sizeof(char)*(257+strlen(tmpstr)));
    if (udsql == NULL)
    {
      fprintf(stderr, "Error: Out of Memory!\n");
      free(tmpstr);
      return 0;
    }
    sprintf(udsql,"UPDATE Channel SET Image_Height = %s WHERE Channel_ID = %llu;",tmpstr,achan->dbcid);
    free(tmpstr);
    rc = sqlite3_exec(db,udsql,NULL,0,&anerrmsg);
    if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
    {
      dbwriteerror(rc);
      fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
      free(udsql);
      sqlite3_free(anerrmsg);
      return 0;
    }
    free(udsql);
  }
  
  /* All updated! */
  return 1;
}

int preparechancatstatement()
{
  char sqlstmt[] = "INSERT INTO Channel_Category (CCID, Channel_ID, Category, Domain) VALUES (NULL, ?, ?, ?);";
  int rc = sqlite3_prepare_v2(db, sqlstmt, strlen(sqlstmt)+1, &chancatstmt, NULL);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    if (chancatstmt != NULL) sqlite3_finalize(chancatstmt);
    chancatstmt = NULL;
    return 0;
  }
  return 1;
}

int addchancat(unsigned long long channelid, catnode *acat)
{
  if (acat == NULL) return 0;
  if (acat->type != channel_cat) return 0;
  
  int rc;
  
  /* Bind Values */
  rc = sqlite3_bind_int64(chancatstmt, 1, channelid);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(chancatstmt, 2, acat->category, strLen(acat->category)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(chancatstmt, 3, acat->domain, strLen(acat->domain)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  
  /* Execute Statement */
  rc = sqlite3_step(chancatstmt);
  if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
  {
    dbwriteerror(rc);
    return 0;
  }
  
  /* Reset ready for next call */
  rc = sqlite3_reset(chancatstmt);
  if (rc != SQLITE_OK && rc != SQLITE_DONE)
  {
    dbwriteerror(rc);
    return 0;
  }
  
  return 1;
}

void finalisechancatstatement()
{
  if (chancatstmt != NULL) sqlite3_finalize(chancatstmt);
  chancatstmt = NULL;
}

int prepareitemcatstatement()
{
  char sqlstmt[] = "INSERT INTO Item_Category (ICID, Item_ID, Category, Domain) VALUES (NULL, ?, ?, ?);";
  int rc = sqlite3_prepare_v2(db, sqlstmt, strlen(sqlstmt)+1, &itemcatstmt, NULL);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    if (itemcatstmt != NULL) sqlite3_finalize(itemcatstmt);
    itemcatstmt = NULL;
    return 0;
  }
  return 1;
}

int additemcat(unsigned long long itemid, catnode *acat)
{
  if (acat == NULL) return 0;
  if (acat->type != item_cat) return 0;
  
  int rc;
  
  /* Bind Values */
  rc = sqlite3_bind_int64(itemcatstmt, 1, itemid);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(itemcatstmt, 2, acat->category, strLen(acat->category)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(itemcatstmt, 3, acat->domain, strLen(acat->domain)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  
  /* Execute Statement */
  rc = sqlite3_step(itemcatstmt);
  if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
  {
    dbwriteerror(rc);
    return 0;
  }
  
  /* Reset ready for next call */
  rc = sqlite3_reset(itemcatstmt);
  if (rc != SQLITE_OK && rc != SQLITE_DONE)
  {
    dbwriteerror(rc);
    return 0;
  }
  
  return 1;
}

void finaliseitemcatstatement()
{
  if (itemcatstmt != NULL) sqlite3_finalize(itemcatstmt);
  itemcatstmt = NULL;
}

int prepareitemstatementdownloaded()
{
  char sqlstmt[] = "INSERT INTO Item (Item_ID, Channel_ID, Title, Link, Description, Author, Enclosure_URL, Enclosure_Length, Enclosure_Type, GUID, GUID_Is_Permalink, Publication_Date, Source_URL, Source_Name, Downloaded, Downloaded_Date, Original_Filename, Filename, Play_Count) VALUES (NULL, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, 1, datetime('now'), ?, ?, 0);";
  int rc = sqlite3_prepare_v2(db, sqlstmt, strlen(sqlstmt)+1, &itemdlstmt, NULL);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
#ifdef DEBUG
    	printf("rc=%d, %d\n",rc, sqlite3_extended_errcode(db));
#endif
    if (itemdlstmt != NULL) sqlite3_finalize(itemdlstmt);
    itemdlstmt = NULL;
    return 0;
  }
  return 1;
}

int prepareitemstatementnotdownloaded()
{
  char sqlstmt[] = "INSERT INTO Item (Item_ID, Channel_ID, Title, Link, Description, Author, Enclosure_URL, Enclosure_Length, Enclosure_Type, GUID, GUID_Is_Permalink, Publication_Date, Source_URL, Source_Name, Downloaded, Downloaded_Date, Original_Filename, Filename, Play_Count) VALUES (NULL, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, 0, NULL, ?, NULL, 0);";
  int rc = sqlite3_prepare_v2(db, sqlstmt, strlen(sqlstmt)+1, &itemndlstmt, NULL);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
#ifdef DEBUG
    	printf("rc=%d, %d\n",rc, sqlite3_extended_errcode(db));
#endif
    if (itemndlstmt != NULL) sqlite3_finalize(itemndlstmt);
    itemndlstmt = NULL;
    return 0;
  }
  return 1;
}

unsigned long long additemdled(itempropnode *anitem, unsigned long long chanid, 
                               char *ofn, char *thefn)
{
  int rc = 0;
  if (ofn == NULL || thefn == NULL || chanid == 0 || anitem == NULL) return 0;
  if (itemdlstmt == NULL) return 0;
  
  /* Bind Values */
  rc = sqlite3_bind_int64(itemdlstmt, 1, chanid);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(itemdlstmt, 2, anitem->title, strLen(anitem->title)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(itemdlstmt, 3, anitem->link, strLen(anitem->link)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(itemdlstmt, 4, anitem->description, strLen(anitem->description)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(itemdlstmt, 5, anitem->author, strLen(anitem->author)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(itemdlstmt, 6, anitem->enclosure.url, strLen(anitem->enclosure.url)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_int64(itemdlstmt, 7, anitem->enclosure.length);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(itemdlstmt, 8, anitem->enclosure.type, strLen(anitem->enclosure.type)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(itemdlstmt, 9, anitem->guid.guid, strLen(anitem->guid.guid)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_int(itemdlstmt, 10, anitem->guid.ispermalink);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  char adate[255] = "";
  rssdatetoisodate(adate,&(anitem->pubdate));
  rc = sqlite3_bind_text(itemdlstmt, 11, adate, strlen(adate)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(itemdlstmt, 12, anitem->source.url, strLen(anitem->source.url)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(itemdlstmt, 13, anitem->source.name, strLen(anitem->source.name)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(itemdlstmt, 14, ofn, strLen(ofn)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(itemdlstmt, 15, thefn, strLen(thefn)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  
  /* Execute Statement */
  rc = sqlite3_step(itemdlstmt);
  if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
  {
    dbwriteerror(rc);
    return 0;
  }
  
  /* Reset Statement for next call */
  rc = sqlite3_reset(itemdlstmt);
  if (rc != SQLITE_OK && rc != SQLITE_DONE)
  {
    dbwriteerror(rc);
    return 0;
  }
  
  /* Get itemid */
  char giidsql[] = "SELECT Item_ID FROM Item WHERE ROWID=last_insert_rowid();";
  char *anerrmsg;
  passbackull = 0;
  rc = sqlite3_exec(db,giidsql,callback_giid,0,&anerrmsg);
  if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
  {
    dbwriteerror(rc);
    fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
    sqlite3_free(anerrmsg);
    return 0;
  }
  
  if (passbackull == 0) return 0;
  anitem->dbiid = passbackull;
  
  return passbackull;
}

unsigned long long additemndled(itempropnode *anitem, unsigned long long chanid, 
                                char *ofn)
{
  int rc = 0;
  if (chanid == 0 || anitem == NULL) return 0;
  if (itemndlstmt == NULL) return 0;
  
  /* Bind Values */
  rc = sqlite3_bind_int64(itemndlstmt, 1, chanid);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(itemndlstmt, 2, anitem->title, strLen(anitem->title)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(itemndlstmt, 3, anitem->link, strLen(anitem->link)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(itemndlstmt, 4, anitem->description, strLen(anitem->description)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(itemndlstmt, 5, anitem->author, strLen(anitem->author)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(itemndlstmt, 6, anitem->enclosure.url, strLen(anitem->enclosure.url)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_int64(itemndlstmt, 7, anitem->enclosure.length);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(itemndlstmt, 8, anitem->enclosure.type, strLen(anitem->enclosure.type)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(itemndlstmt, 9, anitem->guid.guid, strLen(anitem->guid.guid)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_int(itemndlstmt, 10, anitem->guid.ispermalink);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  char adate[255] = "";
  rssdatetoisodate(adate,&(anitem->pubdate));
  rc = sqlite3_bind_text(itemndlstmt, 11, adate, strlen(adate)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(itemndlstmt, 12, anitem->source.url, strLen(anitem->source.url)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(itemndlstmt, 13, anitem->source.name, strLen(anitem->source.name)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_text(itemndlstmt, 14, ofn, strLen(ofn)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  
  /* Execute Statement */
  rc = sqlite3_step(itemndlstmt);
  if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
  {
    dbwriteerror(rc);
    return 0;
  }
  
  /* Reset Statement for next call */
  rc = sqlite3_reset(itemndlstmt);
  if (rc != SQLITE_OK && rc != SQLITE_DONE)
  {
    dbwriteerror(rc);
    return 0;
  }
  
  /* Get itemid */
  char giidsql[] = "SELECT Item_ID FROM Item WHERE ROWID=last_insert_rowid();";
  char *anerrmsg;
  passbackull = 0;
  rc = sqlite3_exec(db,giidsql,callback_giid,0,&anerrmsg);
  if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
  {
    dbwriteerror(rc);
    fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
    sqlite3_free(anerrmsg);
    return 0;
  }
  
  if (passbackull == 0) return 0;
  anitem->dbiid = passbackull;
  
  return passbackull;
}

void finaliseitemdlstatement()
{
  if (itemdlstmt != NULL) sqlite3_finalize(itemdlstmt);
  itemdlstmt = NULL;
}

void finaliseitemndlstatement()
{
  if (itemndlstmt != NULL) sqlite3_finalize(itemndlstmt);
  itemndlstmt = NULL;
}

int prepareuditemdlstatement()
{
  char sqlstmt[] = "UPDATE Item SET Downloaded = 1, Downloaded_Date = datetime('now'), Filename = ? WHERE Item_ID = ?;";
  int rc = sqlite3_prepare_v2(db, sqlstmt, strlen(sqlstmt)+1, &uditemdlstmt, NULL);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
#ifdef DEBUG
    	printf("rc=%d, %d\n",rc, sqlite3_extended_errcode(db));
#endif
    if (uditemdlstmt != NULL) sqlite3_finalize(uditemdlstmt);
    uditemdlstmt = NULL;
    return 0;
  }
  return 1;
}

int updateitemdownloaded(char *filename, unsigned long long itemid)
{
  if (uditemdlstmt == NULL) return 0;
  int rc;
  
  /* Bind item fields */
  rc = sqlite3_bind_text(uditemdlstmt, 1, filename, strLen(filename)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  rc = sqlite3_bind_int64(uditemdlstmt, 2, itemid);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return 0;
  }
  
  /* Execute Statement */
  rc = sqlite3_step(uditemdlstmt);
  if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
  {
    dbwriteerror(rc);
    return 0;
  }
  
  /* Reset statement for next function call */
  rc = sqlite3_reset(uditemdlstmt);
  if (rc != SQLITE_OK && rc != SQLITE_DONE)
  {
    dbwriteerror(rc);
    return 0;
  }
  
  return 1;
}

void finaliseuditemdlstatement()
{
  if (uditemdlstmt != NULL) sqlite3_finalize(uditemdlstmt);
  uditemdlstmt = NULL;
}

int prepareselitemstatement()
{
  char sqlstmt[] = "SELECT * FROM Item WHERE Channel_ID = ? AND Title = ? AND Link = ? AND Description = ? AND Author = ? AND Enclosure_URL = ? AND Enclosure_Length = ? AND Enclosure_Type = ? AND GUID = ? AND GUID_Is_Permalink = ? AND Publication_Date = ? AND Source_URL = ? AND Source_Name = ?;";
  int rc = sqlite3_prepare_v2(db, sqlstmt, strlen(sqlstmt)+1, &selitemstmt, NULL);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
#ifdef DEBUG
    	printf("rc=%d, %d\n",rc, sqlite3_extended_errcode(db));
#endif
    if (selitemstmt != NULL) sqlite3_finalize(selitemstmt);
    selitemstmt = NULL;
    return 0;
  }
  return 1;
}

int isitemnew(itempropnode *anitem, unsigned long long dbchannelid)
{
  /* Returns: 1 if new, 0 if in DB already and -1 on errors */
  if (selitemstmt == NULL) return -1;
  
  int rc, ans = 0;
  
  /* Bind item fields */
  rc = sqlite3_bind_int64(selitemstmt, 1, dbchannelid);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return -1;
  }
  rc = sqlite3_bind_text(selitemstmt, 2, anitem->title, strLen(anitem->title)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return -1;
  }
  rc = sqlite3_bind_text(selitemstmt, 3, anitem->link, strLen(anitem->link)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return -1;
  }
  rc = sqlite3_bind_text(selitemstmt, 4, anitem->description, strLen(anitem->description)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return -1;
  }
  rc = sqlite3_bind_text(selitemstmt, 5, anitem->author, strLen(anitem->author)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return -1;
  }
  rc = sqlite3_bind_text(selitemstmt, 6, anitem->enclosure.url, strLen(anitem->enclosure.url)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return -1;
  }
  rc = sqlite3_bind_int64(selitemstmt, 7, anitem->enclosure.length);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return -1;
  }
  rc = sqlite3_bind_text(selitemstmt, 8, anitem->enclosure.type, strLen(anitem->enclosure.type)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return -1;
  }
  rc = sqlite3_bind_text(selitemstmt, 9, anitem->guid.guid, strLen(anitem->guid.guid)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return -1;
  }
  rc = sqlite3_bind_int(selitemstmt, 10, anitem->guid.ispermalink);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return -1;
  }
  char adate[256] = "";
  rssdatetoisodate(adate,&(anitem->pubdate));
  rc = sqlite3_bind_text(selitemstmt, 11, adate, strlen(adate)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return -1;
  }
  rc = sqlite3_bind_text(selitemstmt, 12, anitem->source.url, strLen(anitem->source.url)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return -1;
  }
  rc = sqlite3_bind_text(selitemstmt, 13, anitem->source.name, strLen(anitem->source.name)*sizeof(char), SQLITE_TRANSIENT);
  if (rc != SQLITE_OK)
  {
    dbwriteerror(rc);
    return -1;
  }
  
  /* Execute Statement */
  rc = sqlite3_step(selitemstmt);
  if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
  {
    dbwriteerror(rc);
    return -1;
  }
  if (rc == SQLITE_ROW) ans = 0;
  else ans = 1;
  
  /* Reset Statement ready for next call */
  rc = sqlite3_reset(selitemstmt);
  if (rc != SQLITE_OK && rc != SQLITE_DONE)
  {
    dbwriteerror(rc);
    return 0;
  }
  
  return ans;
}

void finaliseselitemstatement()
{
  if (selitemstmt != NULL) sqlite3_finalize(selitemstmt);
  selitemstmt = NULL;
}

rssenclosure *getlatestitemenc(unsigned long long chanid)
{
  /* Returns NULL on OoM or DB Error, or empty enc if none in DB */
  char thesql[1024] = "";
  sprintf(thesql, "SELECT Enclosure_URL, Enclosure_Length, Enclosure_Type FROM Item WHERE Channel_ID = %llu AND Enclosure_URL NOT NULL ORDER BY strftime('%%s',Item.Publication_Date) DESC LIMIT 1;",chanid);
  rssenclosure *anenc = NULL;
  anenc = (rssenclosure *) malloc(sizeof(rssenclosure));
  if (anenc == NULL)
  {
    fprintf(stderr,"Error: Out of Memory finding latest enclosure!\n");
    return NULL;
  }
  memset(anenc, 0, sizeof(rssenclosure));
  int rc;
  char *anerrmsg = NULL;
  rc = sqlite3_exec(db,thesql,callback_glie,(void *) anenc,&anerrmsg);
  if (rc == SQLITE_ABORT)
  {
    fprintf(stderr,"Error: Out of Memory finding latest enclosure!\n");
    if (anerrmsg != NULL) sqlite3_free(anerrmsg);
    if (anenc->url != NULL) free(anenc->url);
    if (anenc->type != NULL) free(anenc->type);
    free(anenc);
    return NULL;
  }
  else if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
  {
    dbwriteerror(rc);
    fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
    sqlite3_free(anerrmsg);
    if (anenc->url != NULL) free(anenc->url);
    if (anenc->type != NULL) free(anenc->type);
    free(anenc);
    return NULL;
  }
  return anenc;
}

char *getlatestitemofn(unsigned long long chanid)
{ /* Returns NULL on OoM, blank str on no OFN */
  char thesql[1024] = "";
  sprintf(thesql, "SELECT Original_Filename FROM Item WHERE Channel_ID = %llu AND Enclosure_URL NOT NULL AND Original_Filename NOT NULL ORDER BY strftime('%%s',Item.Publication_Date) DESC LIMIT 1;",chanid);
  int rc;
  char *anerrmsg = NULL;
  if (passbackstr != NULL) free(passbackstr);
  passbackstr = NULL;
  rc = sqlite3_exec(db,thesql,callback_glio,NULL,&anerrmsg);
  if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
  {
    dbwriteerror(rc);
    fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
    sqlite3_free(anerrmsg);
  }
  char *astr = NULL;
  if (passbackstr == NULL)
  {
    astr = (char *) malloc(sizeof(char));
    if (astr == NULL) return NULL;
    astr[0] = 0;
    return astr;
  }
  astr = (char *) malloc(sizeof(char)*(1+strlen(passbackstr)));
  if (astr == NULL) return NULL;
  strcpy(astr,passbackstr);
  return astr;
}

unsigned long long getlatestitemid(unsigned long long chanid)
{
  char thesql[1024] = "";
  sprintf(thesql, "SELECT Item_ID FROM Item WHERE Channel_ID = %llu AND Enclosure_URL NOT NULL  ORDER BY strftime('%%s',Item.Publication_Date) DESC LIMIT 1;",chanid);
  int rc;
  char *anerrmsg = NULL;
  passbackull = 0;
  rc = sqlite3_exec(db,thesql,callback_giid,NULL,&anerrmsg); /* Reuse callback_giid() */
  if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
  {
    dbwriteerror(rc);
    fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
    sqlite3_free(anerrmsg);
    return 0;
  }
  return passbackull;
}

unsigned long long getchanidfromurl(char *chanurl)
{
  if (chanurl == NULL) return 0;
  char *safeurl = (char *) malloc(sizeof(char)*2*(1+strlen(chanurl)));
  if (safeurl == NULL)
  {
    fprintf(stderr,"Error: Out of Memory finding channel data!\n");
    return 0;
  }
  strdsqs(safeurl,chanurl);
  char *somesql = (char *) malloc(sizeof(char)*(257+strlen(safeurl)));
  if (somesql == NULL)
  {
    fprintf(stderr,"Error: Out of Memory finding channel data!\n");
    free(safeurl);
    return 0;
  }
  sprintf(somesql,"SELECT Channel_ID FROM Channel WHERE Channel_URL = '%s';",safeurl);
  free(safeurl);
  passbackull = 0;
  char *anerrmsg = NULL;
  int rc;
  rc = sqlite3_exec(db,somesql,callback_gcid,NULL,&anerrmsg); /* Reuse the callback_gcid function */
  if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
  {
    dbwriteerror(rc);
    fprintf(stderr, "(Returned Error: %s)\n", anerrmsg);
    free(somesql);
    sqlite3_free(anerrmsg);
    return 0;
  }
  
  free(somesql);
  return passbackull;
}



/*--------------------------*/

static int callback_glio(void *NotUsed, int argc, char **argv, char **azColName)
{ /* Get Latest OFN Callback */
  int i;
  for (i=0;i<argc;i++)
  {
    if (streq_i(azColName[i],"Original_Filename"))
    {
      writetopassbackstr(argv[i]);
      return 0;
    }
  }
  return 0;
}

static int callback_glie(void *anenc, int argc, char **argv, char **azColName)
{ /* Get Latest Enc Callback */
  rssenclosure *theenc = (rssenclosure *) anenc;
  int i;
  
  for (i=0;i<argc;i++)
  {
    if (streq_i(azColName[i],"Enclosure_URL"))
    {
      if (theenc->url == NULL)
      {
        theenc->url = (char *) malloc(sizeof(char)*(1+strlen(argv[i])));
        if (theenc->url == NULL) return 1;
        strcpy(theenc->url,argv[i]);
      }
    }
    else if (streq_i(azColName[i], "Enclosure_Length"))
    {
      theenc->length = atoul(argv[i]);
    }
    else if (streq_i(azColName[i], "Enclosure_Type"))
    {
      if (theenc->type == NULL)
      {
        theenc->type = (char *) malloc(sizeof(char)*(1+strlen(argv[i])));
        if (theenc->type == NULL) return 1;
        strcpy(theenc->type,argv[i]);
      }
    }
  }
  return 0;
}

static int callback_cuc(void *achan, int argc, char **argv, char **azColName)
{ /* Check Update Channel Callback */
  int i;
  char rettxt[] = "0000000000000000000000", pubdate[256] = "", lbdate[256] = "";
  if (((chanpropnode *) achan)->pubdate.fulldate != NULL)
    rssdatetoisodate(pubdate,&(((chanpropnode *) achan)->pubdate));
  else
    strcpy(pubdate,"NULL");
  if (((chanpropnode *) achan)->lastbuilddate.fulldate != NULL)
    rssdatetoisodate(lbdate,&(((chanpropnode *) achan)->lastbuilddate));
  else
    strcpy(lbdate,"NULL");
  
  for (i=0;i<argc;i++)
  {
    if (streq_i(azColName[i],"Title"))
    {
      if (!streq_i(argv[i],((chanpropnode *) achan)->title))
        rettxt[0] = '1';
    }
    else if (streq_i(azColName[i],"Link"))
    {
      if (!streq_i(argv[i],((chanpropnode *) achan)->link))
        rettxt[1] = '1';
    }
    else if (streq_i(azColName[i],"Description"))
    {
      if (!streq_i(argv[i],((chanpropnode *) achan)->description))
        rettxt[2] = '1';
    }
    else if (streq_i(azColName[i],"Language_Major"))
    {
      if (!streq_i(argv[i],((chanpropnode *) achan)->language_main))
        rettxt[3] = '1';
    }
    else if (streq_i(azColName[i],"Language_Minor"))
    {
      if (!streq_i(argv[i],((chanpropnode *) achan)->language_sub))
        rettxt[4] = '1';
    }
    else if (streq_i(azColName[i],"Copyright"))
    {
      if (!streq_i(argv[i],((chanpropnode *) achan)->copyright))
        rettxt[5] = '1';
    }
    else if (streq_i(azColName[i],"Managing_Editor"))
    {
      if (!streq_i(argv[i],((chanpropnode *) achan)->managingeditor))
        rettxt[6] = '1';
    }
    else if (streq_i(azColName[i],"Webmaster"))
    {
      if (!streq_i(argv[i],((chanpropnode *) achan)->webmaster))
        rettxt[7] = '1';
    }
    else if (streq_i(azColName[i],"Publication_Date"))
    {
      if (!streq_i(argv[i],pubdate))
        rettxt[8] = '1';
    }
    else if (streq_i(azColName[i],"Last_Build_Date"))
    {
      if (!streq_i(argv[i],lbdate))
        rettxt[9] = '1';
    }
    else if (streq_i(azColName[i],"Generator"))
    {
      if (!streq_i(argv[i],((chanpropnode *) achan)->generator))
        rettxt[10] = '1';
    }
    else if (streq_i(azColName[i],"Documentation"))
    {
      if (!streq_i(argv[i],((chanpropnode *) achan)->docs))
        rettxt[11] = '1';
    }
    else if (streq_i(azColName[i],"TTL"))
    {
      if (atol(argv[i]) != ((chanpropnode *) achan)->ttl)
        rettxt[13] = '1';
    }
    else if (streq_i(azColName[i],"Image_URL"))
    {
      if (!streq_i(argv[i],((chanpropnode *) achan)->image.url))
        rettxt[14] = '1';
    }
    else if (streq_i(azColName[i],"Image_Title"))
    {
      if (!streq_i(argv[i],((chanpropnode *) achan)->image.title))
        rettxt[15] = '1';
    }
    else if (streq_i(azColName[i],"Image_Link"))
    {
      if (!streq_i(argv[i],((chanpropnode *) achan)->image.link))
        rettxt[16] = '1';
    }
    else if (streq_i(azColName[i],"Image_Description"))
    {
      if (!streq_i(argv[i],((chanpropnode *) achan)->image.description))
        rettxt[17] = '1';
    }
    else if (streq_i(azColName[i],"Image_Width"))
    {
      if (atol(argv[i]) != ((chanpropnode *) achan)->image.width)
        rettxt[18] = '1';
    }
    else if (streq_i(azColName[i],"Image_Height"))
    {
      if (atol(argv[i]) != ((chanpropnode *) achan)->image.height)
        rettxt[19] = '1';
    }
    
  }
  writetopassbackstr(rettxt);
  return 0;
  
}

static int callback_csset(void *NotUsed, int argc, char **argv, char **azColName)
{ /* Configure Setting Set Callback */
  int i;
  for (i=0;i<argc;i++)
  {
    if (streq_i(azColName[i],"Setting"))
    {
      /*if (!streq_i(argv[i],"Last Opened")) return 0;*/
      writetopassbackstr(argv[i]);
      return 0;
    }
  }
  return 0;
  
}

static int callback_gsd(void *NotUsed, int argc, char **argv, char **azColName)
{ /* Get Setting Data Callback */
  int i;
  for (i=0;i<argc;i++)
  {
    if (streq_i(azColName[i],"Data"))
    {
      /*if (!streq_i(argv[i],"Last Opened")) return 0;*/
      writetopassbackstr(argv[i]);
      return 0;
    }
  }
  return 0;
  
}

static int callback_laiic(void *NotUsed, int argc, char **argv, char **azColName)
{ /* List All Items In Channel Callback */
  int i, sn = 0, dn = 0;
  for (i=0;i<argc;i++)
  {
    if (streq_i(azColName[i],"Item_id"))
    {
      sn = i;
    }
    else if (streq_i(azColName[i],"Title"))
    {
      dn = i;
    }
  }
  
  printf("%s\t%s\n", argv[sn], argv[dn]);
  passbackul = 1;
  
  return 0;
  
}

static int callback_liiic(void *StoChannelID, int argc, char **argv, char **azColName)
{ /* List Item Info In Channel Callback */
/*  *((unsigned long long *) StoChannelID)*/
  int i, citeration, iiteration;
  int cin = -1, ctn = -1, iin = 0, itn = 0, iln = 0, idn = 0, ian = 0, ieln = 0, 
      ign = 0, ipdn = 0, isun = 0, isnn = 0, idon = 0, idodn = 0, ifn = 0, 
      ipcn = 0, iccn = 0, icdn = 0;
/* "SELECT Channel.Channel_ID, Channel.Title, Item.Item_ID, Item.Title, 
           Item.Link, Item.Description, Item.Author, Item.Enclosure_Length, 
           Item.GUID, Item.Publication_Date, Item.Source_URL, Item.Source_Name, 
           Item.Downloaded, Item.Downloaded_Date, Item.Filename, 
           Item.Play_Count, Item_Category.Category, Item_Category.Domain 
    FROM Channel INNER JOIN Item ON Channel.Channel_ID = Item.Channel_ID 
    LEFT JOIN Item_Category ON Item.Item_ID = Item_Category.Item_ID 
    ORDER BY Channel.Channel_ID ASC, strftime('%s',Item.Publication_Date) ASC;" */
/* "SELECT Item.Item_ID, Item.Title, Item.Link, Item.Description, Item.Author, 
           Item.Enclosure_Length, Item.GUID, Item.Publication_Date, 
           Item.Source_URL, Item.Source_Name, Item.Downloaded, 
           Item.Downloaded_Date, Item.Filename, Item.Play_Count, 
           Item_Category.Category, Item_Category.Domain 
    FROM Item LEFT JOIN Item_Category ON Item.Item_ID = Item_Category.Item_ID 
    WHERE Item.Channel_ID = %llu 
    ORDER BY strftime('%s',Item.Publication_Date) ASC;" */
  for (i=0;i<argc;i++)
  {
    if (endwith_i(azColName[i],"Channel_ID"))
    {
      cin = i;
      if ((*((unsigned long long *) StoChannelID)) == atoull(argv[i])) citeration = 1;
      else
      {
        citeration = 0;
        (*((unsigned long long *) StoChannelID)) = atoull(argv[i]);
      }
    }
    else if (endwith_i(azColName[i],"Channel.Title"))
    {
      ctn = i;
    }
    else if (endwith_i(azColName[i],"Item.Item_ID"))
    {
      iin = i;
      if (passbackull == atoull(argv[i])) iiteration = 1;
      else
      {
        iiteration = 0;
        passbackull = atoull(argv[i]);
      }
    }
    else if (endwith_i(azColName[i],"Item.Title"))
    {
      itn = i;
    }
    else if (endwith_i(azColName[i],"Link"))
    {
      iln = i;
    }
    else if (endwith_i(azColName[i],"Description"))
    {
      idn = i;
    }
    else if (endwith_i(azColName[i],"Author"))
    {
      ian = i;
    }
    else if (endwith_i(azColName[i],"Enclosure_Length"))
    {
      ieln = i;
    }
    else if (endwith_i(azColName[i],"GUID"))
    {
      ign = i;
    }
    else if (endwith_i(azColName[i],"Publication_Date"))
    {
      ipdn = i;
    }
    else if (endwith_i(azColName[i],"Source_URL"))
    {
      isun = i;
    }
    else if (endwith_i(azColName[i],"Source_Name"))
    {
      isnn = i;
    }
    else if (endwith_i(azColName[i],"Downloaded"))
    {
      idon = i;
    }
    else if (endwith_i(azColName[i],"Downloaded_Date"))
    {
      idodn = i;
    }
    else if (endwith_i(azColName[i],"Filename"))
    {
      ifn = i;
    }
    else if (endwith_i(azColName[i],"Play_Count"))
    {
      ipcn = i;
    }
    else if (endwith_i(azColName[i],"Item_Category.Category"))
    {
      iccn = i;
    }
    else if (endwith_i(azColName[i],"Item_Category.Domain"))
    {
      icdn = i;
    }
    
  }
  /* Write it all out here, as before */
  if (citeration == 0)
  {
    /* Channel Details */
    if (cin >= 0)
    {
      printf("Channel %s: ", argv[cin]);
      if (ctn >= 0 && argv[ctn] != NULL && argv[ctn][0] != 0) printf("- %s",argv[ctn]);
      printf("\n------------------------------------------------------------------------------\n");
    }
  }
  if (iiteration == 0)
  {
    /* Item Details */
    printf("  Item: %s ", argv[iin]);
    if (argv[itn] != NULL && argv[itn][0] != 0) printf("- %s",argv[itn]);
    printf("\n");
    if (argv[iln] != NULL && argv[iln][0] != 0) printf("    Link: %s\n",argv[iln]);
    if (argv[idn] != NULL && argv[idn][0] != 0) printf("    Description: %s\n",argv[idn]);
    if (argv[ian] != NULL && argv[ian][0] != 0) printf("    Author: %s\n",argv[ian]);
    if (argv[ign] != NULL && argv[ign][0] != 0) printf("    GUID: '%s'\n",argv[ign]);
    if ((argv[isnn] != NULL && argv[isnn][0] != 0) || (argv[isun] != NULL && argv[isun][0] != 0))
    {
      printf("    Source: ");
      if (argv[isnn] != NULL && argv[isnn][0] != 0) printf("%s ",argv[isnn]);
      if (argv[isun] != NULL && argv[isun][0] != 0) printf("(%s)",argv[isun]);
      printf("\n");
    }
    if (atol(argv[idon]) > 0)
    {
      printf("    Item was downloaded ");
      if (argv[idodn] != NULL && argv[idodn][0] != 0) printf("on: %s",argv[idodn]);
      printf("\n");
      if (argv[ifn] != NULL && argv[ifn][0] != 0) printf("    File Name: %s\n",argv[ifn]);
      if (argv[ieln] != NULL && argv[ieln][0] != 0) printf("    File Size: %s\n",argv[ieln]);
      if (argv[ipcn] != NULL && argv[ipcn][0] != 0) printf("    Played %s time(s)\n",argv[ipcn]);
    }
    else
    {
      printf("    Item not yet downloaded.\n");
    }
    printf("    Categories:\n");
  }
  /* Item Category Details */
  if (argv[iccn] != NULL && argv[iccn][0] != 0)
  {
    printf("    *\t%s",argv[iccn]);
    if (argv[icdn] != NULL && argv[icdn][0] != 0) printf(" (%s)", argv[icdn]);
    printf("\n");
  }
}

static int callback_ciliiic(void *NotUsed, int argc, char **argv, char **azColName)
{ /* List Channel Info for Item Info In Channel Callback */
  int i, sn = 0, dn = 0;
  for (i=0;i<argc;i++)
  {
    if (streq_i(azColName[i],"Channel_id"))
    {
      sn = i;
    }
    else if (streq_i(azColName[i],"Title"))
    {
      dn = i;
    }
  }
  
  printf("%s\t%s:\n", argv[sn], argv[dn]);
  printf("-----------------------------------------------------------------------------\n");
  passbackul = 1;
  
  return 0;
  
}

static int callback_lac(void *NotUsed, int argc, char **argv, char **azColName)
{ /* List All Channels Callback */
  int i, sn = 0, dn = 0;
  for (i=0;i<argc;i++)
  {
    if (streq_i(azColName[i],"Channel_id"))
    {
      sn = i;
    }
    else if (streq_i(azColName[i],"Title"))
    {
      dn = i;
    }
  }
  
  printf("%s\t%s\n", argv[sn], argv[dn]);
  passbackul = 1;
  
  return 0;
  
}

static int callback_lci(void *NotUsed, int argc, char **argv, char **azColName)
{ /* List Channel Info Callback */
  int i, cn = 0, tn = 0, un = 0, ln = 0, dn = 0, lmjn = 0, lmnn = 0, crn = 0, 
      men = 0, wn = 0, pdn = 0, lbdn = 0, gn = 0, ttln = 0, lrdn = 0, dirn = 0, 
      catn = 0, domn = 0, iteration = 0;
  for (i=0;i<argc;i++)
  {
    if (endwith_i(azColName[i],"Channel_id"))
    {
      cn = i;
      if (passbackull == atoull(argv[i])) iteration = 1;
      else
      {
        iteration = 0;
        passbackull = atoull(argv[i]);
      }
    }
    else if (endwith_i(azColName[i],"Title"))
    {
      tn = i;
    }
    else if (endwith_i(azColName[i],"Channel_URL"))
    {
      un = i;
    }
    else if (endwith_i(azColName[i],"Link"))
    {
      ln = i;
    }
    else if (endwith_i(azColName[i],"Description"))
    {
      dn = i;
    }
    else if (endwith_i(azColName[i],"Language_Major"))
    {
      lmjn = i;
    }
    else if (endwith_i(azColName[i],"Language_Minor"))
    {
      lmnn = i;
    }
    else if (endwith_i(azColName[i],"Copyright"))
    {
      crn = i;
    }
    else if (endwith_i(azColName[i],"Managing_Editor"))
    {
      men = i;
    }
    else if (endwith_i(azColName[i],"Webmaster"))
    {
      wn = i;
    }
    else if (endwith_i(azColName[i],"Publication_Date"))
    {
      pdn = i;
    }
    else if (endwith_i(azColName[i],"Last_Build_Date"))
    {
      lbdn = i;
    }
    else if (endwith_i(azColName[i],"Generator"))
    {
      gn = i;
    }
    else if (endwith_i(azColName[i],"TTL"))
    {
      ttln = i;
    }
    else if (endwith_i(azColName[i],"Last_Refresh_Date"))
    {
      lrdn = i;
    }
    else if (endwith_i(azColName[i],"Directory"))
    {
      dirn = i;
    }
    else if (endwith_i(azColName[i],"Category"))
    {
      catn = i;
    }
    else if (endwith_i(azColName[i],"Domain"))
    {
      domn = i;
    }
  }
  
  if (iteration == 0)
  {
    printf("\n%s\t%s\n  URL: %s\n  Link: %s\n", argv[cn], argv[tn], argv[un], argv[ln]);
    printf("  Description: %s\n", argv[dn]);
    if (argv[lmjn] != NULL && argv[lmjn][0] != 0) printf("  Language: %s",argv[lmjn]);
    if (argv[lmnn] != NULL && argv[lmnn][0] != 0) printf("-%s\n",argv[lmnn]);
    else if (argv[lmjn] != NULL && argv[lmjn][0] != 0) printf("\n");
    if (argv[crn] != NULL && argv[crn][0] != 0) printf("  Copyright: %s\n",argv[crn]);
    if (argv[men] != NULL && argv[men][0] != 0) printf("  Managing Editor: %s\n",argv[men]);
    if (argv[wn] != NULL && argv[wn][0] != 0) printf("  Webmaster: %s\n",argv[wn]);
    if (argv[pdn] != NULL && argv[pdn][0] != 0) printf("  Publication Date: %s\n",argv[pdn]);
    if (argv[lbdn] != NULL && argv[lbdn][0] != 0) printf("  Last Build Date: %s\n",argv[lbdn]);
    if (argv[gn] != NULL && argv[gn][0] != 0) printf("  Generator: %s\n",argv[gn]);
    if (argv[ttln] != NULL && argv[ttln][0] != 0) printf("  Time To Live: %s minute(s)\n",argv[ttln]);
    if (argv[lrdn] != NULL && argv[lrdn][0] != 0) printf("  Last Update: %s\n",argv[lrdn]);
    if (argv[dirn] != NULL && argv[dirn][0] != 0) printf("  Directory: %s\n",argv[dirn]);
    printf("  Categories:\n");
  }
  if (argv[catn] != NULL && argv[catn][0] != 0)
  {
    printf("  *\t%s",argv[catn]);
    if (argv[domn] != NULL && argv[domn][0] != 0) printf(" (of domain %s)",argv[domn]);
    printf("\n");
  }
  
  return 0;
  
}

static int callback_csview(void *NotUsed, int argc, char **argv, char **azColName)
{ /* Configure Setting View Callback */
  int i, sn = 0, dn = 0;
  for (i=0;i<argc;i++)
  {
    if (streq_i(azColName[i],"Setting"))
    {
      sn = i;
    }
    else if (streq_i(azColName[i],"Data"))
    {
      dn = i;
    }
  }
  
  printf("%s = %s\n", argv[sn], argv[dn]);
  passbackul = 1;
  
  return 0;
  
}

static int callback_ccu(void *NotUsed, int argc, char **argv, char **azColName)
{ /* Check Channel_URL Callback */
  int i;
  for (i=0;i<argc;i++)
  {
    if (streq_i(azColName[i],"Channel_URL"))
    {
      /*if (!streq_i(argv[i],"Last Opened")) return 0;*/
      writetopassbackstr(argv[i]);
      return 0;
    }
  }
  return 0;
  
}

static int callback_gcid(void *NotUsed, int argc, char **argv, char **azColName)
{ /* Get Channel_ID Callback */
  int i;
  for (i=0;i<argc;i++)
  {
    if (streq_i(azColName[i],"Channel_ID"))
    {
      /*if (!streq_i(argv[i],"Last Opened")) return 0;*/
      passbackull = atoull(argv[i]);
      return 0;
    }
  }
  return 0;
  
}

static int callback_giid(void *NotUsed, int argc, char **argv, char **azColName)
{ /* Get Item_ID Callback */
  int i;
  for (i=0;i<argc;i++)
  {
    if (streq_i(azColName[i],"Item_ID"))
    {
      /*if (!streq_i(argv[i],"Last Opened")) return 0;*/
      passbackull = atoull(argv[i]);
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
  
  if (adate->fulldate == NULL)
  {
    isodate[0] = 0;
    return;
  }
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
  if (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
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
