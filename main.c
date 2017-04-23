#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "sfuncs.h"
#include "parser.h"
#include "extprgfuncs.h"
#include "dbexchange.h"

#include "main.h"


int isquiet = 0, isallyes = 0, isallno = 0, isforce = 0;


int docmd(char **cmdntsa, int offset)
{
  int i;
  for (i=offset;cmdntsa[i]!=NULL;i++)
  {
    if (cmdntsa[i][0] != '-') break;
    if (streq_i(cmdntsa[i],"-q"))
    {
      isquiet = 1;
    }
    else if (streq_i(cmdntsa[i],"-y"))
    {
      if (isallno == 0) isallyes = 1;
      else isallno = 0;
    }
    else if (streq_i(cmdntsa[i],"-n"))
    {
      if (isallyes == 0) isallno = 1;
      else isallyes = 0;
    }
    else if (streq_i(cmdntsa[i],"-f"))
    {
      isforce = 1;
    }
  }
  if (cmdntsa[i] == NULL) return 0;
  if (streq_i(cmdntsa[i],"test"))
  {
    if (cmdntsa[i+1] == NULL)
    {
      fprintf(stderr, "Error: Test object not specified!  Test what?\n");
      return 1;
    }
    else if (streq_i(cmdntsa[i+1], "parser"))
    {
      if (cmdntsa[i+2] == NULL)
      {
        fprintf(stderr, "Error: Feed File not specified!  Test parser with what?\n");
        return 1;
      }
      return testparser(cmdntsa[i+2]);
    }
    else if (streq_i(cmdntsa[i+1], "download_parser"))
    {
      if (cmdntsa[i+2] == NULL)
      {
        fprintf(stderr, "Error: URL not specified!  Test download_parser with what?\n");
        return 1;
      }
      return testdlparser(cmdntsa[i+2]);
    }
    else if (streq_i(cmdntsa[i+1], "database"))
    {
      /* Open then close the database */
      return testdb();
    }
    else if (streq_i(cmdntsa[i+1], "downloader"))
    {
      if (cmdntsa[i+2] == NULL)
      {
        fprintf(stderr, "Error: URL not specified!  Test downloader with what?\n");
        return 1;
      }
      return testdownload(cmdntsa[i+2]);
    }
    else
    {
      fprintf(stderr, "Error: Unknown Test '%s'!\n", cmdntsa[i+1]);
      return 1;
    }
  }
  else if (streq_i(cmdntsa[i], "subscribe"))
  {
    if (cmdntsa[i+1] == NULL)
    {
      fprintf(stderr, "Error: Feed URL specified!  Subscribe to what?\n");
      return 1;
    }
    else if (cmdntsa[i+2] == NULL)
    {
      fprintf(stderr, "Error: 'Download' command missing!\n");
      return 1;
    }
    else if (streq_i(cmdntsa[i+2], "download") == 0)
    {
      fprintf(stderr, "Error: Invalid sub command - you must specify the download type!\n");
      return 1;
    }
    else if (cmdntsa[i+3] == NULL)
    {
      fprintf(stderr, "Error: 'Download' type missing!  Download which items?\n");
      return 1;
    }
    else if (streq_i(cmdntsa[i+3],"none"))
    {
      /* Just subscribe */
      return dosubscribe(cmdntsa[i+1], DLCODE_NONE);
    }
    else if (streq_i(cmdntsa[i+3],"latest"))
    {
      /* Subscribe and download the latest */
      return dosubscribe(cmdntsa[i+1], DLCODE_LATEST);
    }
    else if (streq_i(cmdntsa[i+3],"all") || streq_i(cmdntsa[i+3],"new"))
    {
      /* Subscribe and download everything */
      return dosubscribe(cmdntsa[i+1], DLCODE_ALL);
    }
    else
    {
      fprintf(stderr, "Error: Invalid 'Download' type - must be 'none', 'latest' or 'all'!\n");
      return 1;
    }
  }
  else if (streq_i(cmdntsa[i], "configure") || streq_i(cmdntsa[i], "config"))
  {
    if (cmdntsa[i+1] == NULL)
    {
      fprintf(stderr, "Error: Configuration command not specified!  Set or View?\n");
      return 1;
    }
    else if (streq_i(cmdntsa[i+1], "set"))
    {
      if (cmdntsa[i+2] == NULL)
      {
        fprintf(stderr, "Error: Setting not specified!  Set what?\n");
        return 1;
      }
      else if ((cmdntsa[i+3] == NULL) || ((streq_(cmdntsa[i+3],"=")) && (cmdntsa[i+4] == NULL)))
      {
        fprintf(stderr, "Error: Value of Setting not specified!  Set %s to what?\n", cmdntsa[i+2]);
        return 1;
      }
      else
      {
        if (streq_(cmdntsa[i+3],"="))
        {
          return configuresetting(cmdntsa[i+2],cmdntsa[i+4]);
        }
        else
        {
          return configuresetting(cmdntsa[i+2],cmdntsa[i+3]);
        }
      }
    }
    else if (streq_i(cmdntsa[i+1], "view"))
    {
      if (cmdntsa[i+2] == NULL)
      {
        /* View all settings */
        if (opendb(0) == 0)
        {
          fprintf(stderr, "Error: Could not open database!\n");
          return 2;
        }
        if (writecsview(NULL)==0)
        {
          fprintf(stderr, "Error: Could not list settings!\n");
          closedb();
          return 3;
        }
        if (closedb() == 0)
        {
          fprintf(stderr, "Error: Could not close database!\n");
          closedb();
          return 2;
        }
        else return 0;
      }
      else
      {
        /* View specified setting */
        if (opendb(0) == 0)
        {
          fprintf(stderr, "Error: Could not open database!\n");
          return 2;
        }
        if (writecsview(cmdntsa[i+2])==0)
        {
          fprintf(stderr, "Error: Could not show setting!\n");
          closedb();
          return 3;
        }
        if (closedb() == 0)
        {
          fprintf(stderr, "Error: Could not close database!\n");
          closedb();
          return 2;
        }
        else return 0;
      }
    }
    else
    {
      fprintf(stderr, "Error: Unknown Configuration Command '%s'!\n", cmdntsa[i+1]);
      return 1;
    }
  }
  else if (streq_i(cmdntsa[i], "help"))
  {
    if (cmdntsa[i+1] == NULL || (cmdntsa[i+2] == NULL && streq_i(cmdntsa[i+1], "help")))
    {
      printf("Use the command 'help <command>' where '<command>' is a command you want to\nunderstand.\n");
      printf("Commands:\n*\ttest\n*\tconfigure\n*\tsubscribe\n*\thelp\n");
      return 0;
    }
    else if (streq_i(cmdntsa[i+1], "test"))
    {
      if (cmdntsa[i+2] == NULL)
      {
        printf("Test:\n  Tests a function of the program.\nSubcommands of Test:\n*\tparser\n*\tdatabase\n*\tdownloader\n*\tdownload_parser\n");
        return 0;
      }
      else if (streq_i(cmdntsa[i+2], "parser"))
      {
        printf("Test Parser:\n  Tests the parser of RSS files.  Use the command as 'test parser <feed file>',\nwhere <feed file> is the file containing the RSS feed to parse.  The file must\nbe locally accessible, not a URL.\n");
        return 0;
      }
      else if (streq_i(cmdntsa[i+2], "download_parser"))
      {
        printf("Test Parser:\n  Tests the downloader and parser of RSS files.  Use the command as\n  'test parser <URL>', where <URL> is the url of the file containing the RSS\n  feed to parse.\n");
        return 0;
      }
      else if (streq_i(cmdntsa[i+2], "downloader"))
      {
        printf("Test Downloader:\n  Tests the downloader of files.  Use the command as 'test downloader <URL>',\n  where <URL> is the URL of the file download.\n");
        return 0;
      }
      else if (streq_i(cmdntsa[i+2], "database"))
      {
        printf("Test Database:\n  Tests the database connectivity.  This command has no arguments.\n");
        return 0;
      }
      else
      {
        fprintf(stderr, "Error: Unknown Help Test command '%s', use 'help test' for commands.\n", cmdntsa[i+2]);
      }
    }
    else if (streq_i(cmdntsa[i+1], "configure") || streq_i(cmdntsa[i+1], "config"))
    {
      if (cmdntsa[i+2] == NULL)
      {
        printf("Configure:\n  Configures a setting of the program.\nSubcommands of Configure:\n*\tset\n*\tview\n");
        return 0;
      }
      else if (streq_i(cmdntsa[i+2], "set"))
      {
        if (cmdntsa[i+3] == NULL)
        {
          printf("Set Configuration:\n  Sets a setting in the configuration.  Use the command as\n  'configure set <setting> = <value>', where <setting> is the setting to\n  change and <value> is the value to give it.\n");
          printf("Possible Settings:\n*\tPODCAST_DIR\n*\tDOWNLOADER\n*\tMEDIA_PLAYER\n*\tDIR_SEPARATOR\n");
          return 0;
        }
        else if (streq_i(cmdntsa[i+3],"LAST OPENED"))
        {
          printf("LAST OPENED:\n  This is the last time the Database was opened for modification.  This setting\n  should not be altered manually!\n");
          return 0;
        }
        else if (streq_i(cmdntsa[i+3],"PODCAST_DIR"))
        {
          printf("PODCAST_DIR:\n  This is full path of the directory in which the downloaded podcasts should be\n  saved.  The user running the program MUST have write permissions for\n  this directory.\n");
          return 0;
        }
        else if (streq_i(cmdntsa[i+3], "DOWNLOADER"))
        {
          printf("DOWNLOADER:\n  This is the full command that will download files for the program.  This must\n  include the full path of the program used, in addition to specifying\n  the URL from which to download as !U, the filename to save the file as !F and\n  the full path in which to save this file as !P.\n");
          return 0;
        }
        else if (streq_i(cmdntsa[i+3], "MEDIA_PLAYER"))
        {
          printf("MEDIA_PLAYER:\n  This is the full command that will play files for the program.  This must\n  include the full path of the program used, in addition to specifying\n  the filename to play as !F and the full path of the file as !P.\n");
          return 0;
        }
        else if (streq_i(cmdntsa[i+3], "DIR_SEPARATOR"))
        {
          printf("DIR_SEPARATOR:\n  This is the character that is used as a directory separator on your system.\n  For UNIX-like systems such as GNU Linux, this is '/', whereas for Windows\n  and similar systems, this is '\\'.\n");
          return 0;
        }
        else
        {
          fprintf(stderr, "Error: Unknown Setting '%s'\n",cmdntsa[i+3]);
          return 1;
        }
      }
      else if (streq_i(cmdntsa[i+2], "view"))
      {
        if (cmdntsa[i+3] == NULL)
        {
          printf("View Configuration:\n  Views a setting in the configuration.  Use the command as\n'configure view <setting>' where <setting> is the setting of which to see the\nvalue.\n");
          printf("Possible Settings:\n*\tPODCAST_DIR\n*\tDOWNLOADER\n*\tMEDIA_PLAYER\n*\tDIR_SEPARATOR\n");
          return 0;
        }
        else if (streq_i(cmdntsa[i+3],"LAST OPENED"))
        {
          printf("LAST OPENED:\n  This is the last time the Database was opened for modification.\n  This setting should not be altered manually!\n");
          return 0;
        }
        else if (streq_i(cmdntsa[i+3],"PODCAST_DIR"))
        {
          printf("PODCAST_DIR:\n  This is full path of the directory in which the downloaded podcasts should be\n  saved.  The user running the program MUST have write permissions for\n  this directory.\n");
          return 0;
        }
        else if (streq_i(cmdntsa[i+3], "DOWNLOADER"))
        {
          printf("DOWNLOADER:\n  This is the full command that will download files for the program.  This must\n  include the full path of the program used, in addition to specifying\n  the URL from which to download as !U, the filename to save the file as !F and\n  the full path in which to save this file as !P.\n");
          return 0;
        }
        else if (streq_i(cmdntsa[i+3], "MEDIA_PLAYER"))
        {
          printf("MEDIA_PLAYER:\n  This is the full command that will play files for the program.  This must\n  include the full path of the program used, in addition to specifying\n  the filename to play as !F and the full path of the file as !P.\n");
          return 0;
        }
        else if (streq_i(cmdntsa[i+3], "DIR_SEPARATOR"))
        {
          printf("DIR_SEPARATOR:\n  This is the character that is used as a directory separator on your system.\n  For UNIX-like systems such as GNU Linux, this is '/', whereas for Windows\n  and similar systems, this is '\\'.\n");
          return 0;
        }
        else
        {
          fprintf(stderr, "Error: Unknown Setting '%s'\n",cmdntsa[i+3]);
          return 1;
        }
      }
      else
      {
        fprintf(stderr, "Error: Unknown Help Configure command '%s', use 'help configure' for commands.\n", cmdntsa[i+2]);
        return 1;
      }
      
    }
    else if (streq_i(cmdntsa[i+1], "subscribe"))
    {
      if (cmdntsa[i+2] == NULL)
      {
        printf("Subscribe:\n  Subscribes to a podcast feed.  Use the command as:\n    'subscribe <URL of feed> download <download type>'.\n  The following download types are available:\n*\tnone\n*\tlatest\n*\tall\n  For help on these, use the command:\n    'help subscribe download <download type>'.\n");
        return 0;
      }
      else if (streq_i(cmdntsa[i+2],"download") == 0)
      {
        fprintf(stderr, "Error: Unknown Help Subscribe command '%s', must be 'download'.\n", cmdntsa[i+2]);
        return 1;
      }
      else if (cmdntsa[i+3] == NULL)
      {
        printf("Subscribe:\n  Subscribes to a podcast feed.  Use the command as:\n    'subscribe <URL of feed> download <download type>'.\n  The following download types are available:\n*\tnone\n*\tlatest\n*\tall\n  For help on these, use the command:\n    'help subscribe download <download type>'.\n");
        return 0;
      }
      else if (streq_i(cmdntsa[i+3],"none"))
      {
        printf("Subscribe and Download None:\n  This command subscribes to a podcast feed but does not download any of the\n  items.  Use this command as 'subscribe <feed URL> download none'.\n");
        return 0;
      }
      else if (streq_i(cmdntsa[i+3],"latest"))
      {
        printf("Subscribe and Download Latest:\n  This command subscribes to a podcast feed and downloads the item with the\n  latest Publication Date (not necessarily the last that was added).  Use this\n  command as 'subscribe <feed URL> download latest'.\n");
        return 0;
      }
      else if (streq_i(cmdntsa[i+3],"all") || streq_i(cmdntsa[i+3],"new"))
      {
        printf("Subscribe and Download All:\n  This command subscribes to a podcast feed and downloads all the items that\n  are on it.  Use this command as 'subscribe <feed URL> download all'.\n");
        return 0;
      }
      else
      {
        fprintf(stderr, "Error: Unknown Download Type '%s' - see 'help subscribe' for the list.\n", cmdntsa[i+3]);
        return 1;
      }
    }
    else if (streq_i(cmdntsa[i+1], "help") && cmdntsa[i+2] != NULL)
    {
      fprintf(stderr, "Error: Too many commands!  Hey, no recursing!\n");
      return 1;
    }
    else
    {
      fprintf(stderr, "Error: Unknown Help command '%s', use 'help' for command list.\n",cmdntsa[i+1]);
      return 1;
    }
  }
  else
  {
    fprintf(stderr, "Error: Unknown Command '%s'!  Use the 'help' command for a command\nlist.\n", cmdntsa[i]);
    return 1;
  }
}

int main(int argc, char *argv[])
{
  if (argc < 2 || streq_i(argv[1],"--help"))
  {
    printf("Usage:\n\t%s [-q] [{-y | -n}] [-f] <command> [<subcommand>] [<arguments>]\n", argv[0]);
    printf("Flags:\n\t-q\tQuiet Mode\n\t-y\tAnswer 'Yes' to everything\n\t-n\tAnswer 'No' to everything\n\t-f\tForce command\n");
    printf("Commands:\n*\ttest\n*\tconfigure\n*\tsubscribe\n*\thelp\n");
    printf("Test Usage: %s test parser <feed file>\n   Where <feed file> is the file containing the RSS feed.\n", argv[0]);
    return 1;
  }
  
#ifdef DEBUG
  	printf("%d, %d\n",streq_i("title","titlE"), endwith_("abc]]>","]]>"));
#endif
  
  /*return testparser(argv[1]);*/
  return docmd(argv, 1);
  
}

int testparser(char *rssfile)
{
  
  FILE *feedfile = fopen(rssfile,"r");
  if (feedfile == NULL)
  {
    fprintf(stderr,"Error opening file %s\n", rssfile);
    return 2;
  }
  int parserret = parsersstoll(feedfile);
  fclose(feedfile);
  if (parserret == 0)
  {
    fprintf(stderr,"Error reading file!\n");
    return 3;
  }
  else if (parserret == -1)
  {
    fprintf(stderr,"Memory Error!\n");
    return 4;
  }
  else if (parserret == -2)
  {
    fprintf(stderr,"Error!  File is not RSS!\n");
    return 5;
  }
  else
  {
    printf("File:\n");
    listdata();
    destroyitems();
    destroychannels();
    destroycategories();
    return 0;
  }
}

int testdb()
{
  closedb();
  if (opendb(1))
  {
    printf("Database Opened and Checked Successfully!\n");
    if (closedb())
    {
      printf("Database Closed Successfully!\n");
      return 0;
    }
    fprintf(stderr, "Error: Database Failed to close!\n");
    closedb();
    return 2;
  }
  fprintf(stderr, "Error: Database Failed to open and check!\n");
  return 2;
}

int testdownload(char *url)
{
  if (dodownload(url, ".", "1.txt") == 0)
  {
    fprintf(stderr, "Error: Test download failed.\n");
    return 3;
  }
  printf("Test Download successful - file is \"1.txt\".\n");
  return 0;
}

int configuresetting(char *setting, char *value)
{
  int settingnum = 0;
  char asetting[256] = "";
  if (setting == NULL || value == NULL) return 1;
  if (streq_i(setting, "LAST OPENED")) settingnum = 1;
  else if (streq_i(setting, "PODCAST_DIR")) settingnum = 2;
  else if (streq_i(setting, "DOWNLOADER")) settingnum = 3;
  else if (streq_i(setting, "MEDIA_PLAYER")) settingnum = 4;
  else if (streq_i(setting, "DIR_SEPARATOR")) settingnum = 5;
  else
  {
    fprintf(stderr, "Error: Unknown setting '%s'!\n", setting);
    return 1;
  }
  if (opendb(1) == 0)
  {
    fprintf(stderr, "Error: Database failed to open!\n");
    return 2;
  }
  
  switch (settingnum)
  {
    case 1:
      strcpy(asetting, "LAST OPENED");
    break;
    
    case 2:
      strcpy(asetting, "PODCAST_DIR");
    break;
    
    case 3:
      strcpy(asetting, "DOWNLOADER");
    break;
    
    case 4:
      strcpy(asetting, "MEDIA_PLAYER");
    break;
    
    case 5:
      strcpy(asetting, "DIR_SEPARATOR");
    break;
  }
  
  /* Set setting to value here */
  if (preparecsstatement(asetting) == 0)
  {
    fprintf(stderr, "Error: Failed prepare SQL for setting adjustment.\n");
    closedb();
    return 3;
  }
  if (setconfigsetting(asetting, value) == 0)
  {
    fprintf(stderr, "Error: Failed execute SQL to adjust setting.\n");
    closedb();
    return 4;
  }
  
  if (closedb() == 0)
  {
    fprintf(stderr, "Error: Failed to close Database\n");
    closedb();
    return 2;
  }
  printf("Successfully set %s to '%s'.\n", asetting, value);
  return 0;
}

int testdlparser(char *url)
{
  if (dodownload(url, ".", "1.xml") == 0)
  {
    fprintf(stderr, "Error: Test download failed.\n");
    return 3;
  }
  char rssfile[2048] = "";
  char *pdir;
  pdir = getsettingdata("PODCAST_DIR");
  if (pdir == NULL)
  {
    fprintf(stderr, "Error: Could not find Podcast Directory.\n");
    return 2;
  }
  else if (pdir[0] == 0)
  {
    fprintf(stderr, "Error: Podcast Directory not set!\n");
    free(pdir);
    return 2;
  }
  char *dirsep;
  dirsep = getsettingdata("DIR_SEPARATOR");
  if (dirsep == NULL)
  {
    fprintf(stderr, "Error: Could not find Directory Separator.\n");
    free(pdir);
    return 2;
  }
  else if (dirsep[0] == 0)
  {
    fprintf(stderr, "Error: Directory Separator not set!\n");
    free(pdir);
    free(dirsep);
    return 2;
  }
  strcpy(rssfile,pdir);
  strcat(rssfile,dirsep);
  strcat(rssfile,"1.xml");
  free(pdir);
  free(dirsep);
  closedb();
  FILE *feedfile = fopen(rssfile,"r");
  if (feedfile == NULL)
  {
    fprintf(stderr,"Error opening file '%s'\n", rssfile);
    return 2;
  }
  int parserret = parsersstoll(feedfile);
  fclose(feedfile);
  if (parserret == 0)
  {
    fprintf(stderr,"Error reading file!\n");
    return 3;
  }
  else if (parserret == -1)
  {
    fprintf(stderr,"Memory Error!\n");
    return 4;
  }
  else if (parserret == -2)
  {
    fprintf(stderr,"Error!  File is not RSS!\n");
    return 5;
  }
  else
  {
    printf("File:\n");
    listdata();
    destroyitems();
    destroychannels();
    destroycategories();
    return 0;
  }
  
}

int dosubscribe(char *url, int dlcode)
{
  if (dodownload(url, ".", "new_feed.xml") == 0)
  {
    fprintf(stderr, "Error: Feed download failed.\n");
    closedb();
    return 3;
  }
  char *pdir;
  char *feedfn;
  pdir = getsettingdata("PODCAST_DIR");
  if (pdir == NULL)
  {
    fprintf(stderr, "Error: Could not find Podcast Directory.\n");
    closedb();
    return 2;
  }
  else if (pdir[0] == 0)
  {
    fprintf(stderr, "Error: Podcast Directory not set!\n");
    free(pdir);
    closedb();
    return 2;
  }
  char *dirsep;
  dirsep = getsettingdata("DIR_SEPARATOR");
  if (dirsep == NULL)
  {
    fprintf(stderr, "Error: Could not find Directory Separator.\n");
    free(pdir);
    closedb();
    return 2;
  }
  else if (dirsep[0] == 0)
  {
    fprintf(stderr, "Error: Directory Separator not set!\n");
    free(pdir);
    free(dirsep);
    closedb();
    return 2;
  }
  feedfn = (char *) malloc(sizeof(char)*(5+strlen(pdir)+strlen(dirsep)+strlen("new_feed.xml")));
  if (feedfn == NULL)
  {
    fprintf(stderr, "Error: Out of Memory opening feed file!\n");
    free(pdir);
    free(dirsep);
    closedb();
    return 2;
  }
  strcpy(feedfn,pdir);
  strcat(feedfn,dirsep);
  strcat(feedfn,"new_feed.xml");
  free(pdir);
  free(dirsep);
  FILE *feedfile = fopen(feedfn,"r");
  if (feedfile == NULL)
  {
    fprintf(stderr,"Error opening file '%s'!\n", feedfn);
    free(feedfn);
    closedb();
    return 2;
  }
  int pncret = parsenewchannel(feedfile, url, dlcode);
  fclose(feedfile);
  if (pncret == 0)
  {
    fprintf(stderr,"Error reading file '%s'!\n", feedfn);
    free(feedfn);
    closedb();
    return 4;
  }
  else if (pncret == -1)
  {
    fprintf(stderr,"Error: Out of Memory parsing feed!\n");
    free(feedfn);
    closedb();
    return 5;
  }
  else if (pncret == -2)
  {
    fprintf(stderr,"Error: Feed type not RSS 2.x!\n");
    free(feedfn);
    closedb();
    return 6;
  }
  else if (pncret == -3)
  {
    fprintf(stderr,"Error accessing/communicating with Database!\n");
    free(feedfn);
    closedb();
    return 7;
  }
  else if (pncret == -4)
  {
    fprintf(stderr,"Error accessing file system!\n");
    free(feedfn);
    closedb();
    return 3;
  }
  else if (pncret == -5)
  {
    fprintf(stderr,"Error: Configuration Error!\n");
    free(feedfn);
    closedb();
    return 2;
  }
  else if (pncret != 1)
  {
    fprintf(stderr,"Error: Unknown Error!\n");
    free(feedfn);
    closedb();
    return 10;
  }
  if (isquiet == 0) printf("Operation completed successfully!\n");
  free(feedfn);
  closedb();
  return 0;
}
