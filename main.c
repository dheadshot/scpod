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
  else if (streq_i(cmdntsa[i], "download") || streq_i(cmdntsa[i], "dl"))
  {
    if (cmdntsa[i+1] == NULL)
    {
      fprintf(stderr, "Error: Download subcommand not specified - see 'help download' for available\nsubcommands.  Download what?\n");
      return 1;
    }
    else if (streq_i(cmdntsa[i+1], "channel"))
    {
      
      if (cmdntsa[i+2] == NULL)
      {
        fprintf(stderr,"Error: Channel Identifier not specified - see 'help download channel' for\ndetails.  Download from which channel?\n");
        return 1;
      }
      else
      {
        if (cmdntsa[i+3] == NULL)
        {
          fprintf(stderr, "Error: Subcommand not specified - see 'help download channel' for details.\nDownload what?\n");
          return 1;
        }
        else if (streq_i(cmdntsa[i+3], "none"))
        {
          //Download None - do nothing!
          return 0;
        }
        else if (streq_i(cmdntsa[i+3], "latest"))
        {
          //Download Latest
          return downloadchannellatest(cmdntsa[i+2]);
        }
        else if (streq_i(cmdntsa[i+3], "all"))
        {
          //Download All
          return downloadchannelall(cmdntsa[i+2]);
        }
        else if (streq_i(cmdntsa[i+3], "item"))
        {
          //Download a specific item:
          if (cmdntsa[i+4] == NULL)
          {
            fprintf(stderr, "Error: Subcommand not specified - see 'help download channel item' for details.\nDownload which item?\n");
            return 1;
          }
          else
          {
            //Download item cmdntsa[i+4]
            return downloadchannelitem(cmdntsa[i+2], cmdntsa[i+4]);
            
          }//Offset 4 Download Channel (chanid) Item __
        }
        else
        {
          fprintf(stderr,"Error: Unknown subcommand '%s' - see 'help download channel' for details.\n", cmdntsa[i+2]);
          return 1;
        }//Offset 3 Download Channel (chanid) __
      }//Offset 2 Download Channel __
    }
    else
    {
      fprintf(stderr,"Error: Unknown subcommand '%s' - see 'help download' for details.\n", cmdntsa[i+2]);
      return 1;
    }//Offset 1 Download __
  }
  else if (streq_i(cmdntsa[i], "list"))
  {
    if (cmdntsa[i+1] == NULL)
    {
      fprintf(stderr, "Error: List subcommand not specified - see 'help list' for available\nsubcommands.  List what?\n");
      return 1;
    }
    else if (streq_i(cmdntsa[i+1], "channels"))
    {
      /* List all channels */
      if (opendb(0) == 0)
      {
        fprintf(stderr, "Error: Could not open database!\n");
        closedb();
        return 2;
      }
      if (listallchannels() == 1)
      {
        closedb();
        return 0;
      }
      closedb();
      return 2;
    }
    else if (streq_i(cmdntsa[i+1], "channel"))
    {
      /* List channel <channel identifier> */
      if (cmdntsa[i+2] == NULL)
      {
        fprintf(stderr,"Error: Channel Identifier not specified - see 'help list channel' for details.\nList which channel?");
        return 1;
      }
      else
      {
        /* list channel n - do this in a subfunction */
        return listchannelarg(cmdntsa[i+2]);
      }
    }
    else if (streq_i(cmdntsa[i+1], "items"))
    {
      /* List items in channel <channel identifier> */
      if (cmdntsa[i+2] == NULL)
      {
        fprintf(stderr,"Error: Subcommand 'in' not specified - see 'help list items' for details.\n");
        return 1;
      }
      else if (streq_i(cmdntsa[i+2], "in"))
      {
        if (cmdntsa[i+3] == NULL)
        {
          fprintf(stderr,"Error: Subcommand 'channel' not specified - see 'help list items' for details.  List items in where?\n");
          return 1;
        }
        else if (streq_i(cmdntsa[i+3],"channel"))
        {
          if (cmdntsa[i+4] == NULL)
          {
            fprintf(stderr,"Error: Channel Identifier not specified - see 'help list items' for details.\nList items in which channel?\n");
            return 1;
          }
          else
          {
            /* List Items in channel n - deal with this in a subfunction */
            return listitemsinchannelarg(cmdntsa[i+4]);
          }
        }
        else
        {
          fprintf(stderr,"Error: Unknown subcommand '%s' - should be 'channel'.  See 'help list items'\nfor details.  List items in where?\n",cmdntsa[i+3]);
          return 1;
        }
      }
      else
      {
        fprintf(stderr,"Error: Unknown subcommand '%s' - should be 'in'.  See 'help list items' for\ndetails.\n",cmdntsa[i+2]);
        return 1;
      }
    }
    else if (streq_i(cmdntsa[i+1], "item"))
    {
      /* List item <item identifier> in channel <channel identifier> */
      if (cmdntsa[i+2] == NULL)
      {
        fprintf(stderr,"Error: Item Identifier not specified - see 'help list item' for details.  List\nwhich item?\n");
        return 1;
      }
      else
      {
        if (cmdntsa[i+3] == NULL)
        {
          fprintf(stderr, "Error: Subcommand 'in' not specified - see 'help list item' for details.\n");
          return 1;
        }
        else if (streq_i(cmdntsa[i+3],"in"))
        {
          if (cmdntsa[i+4] == NULL)
          {
            fprintf(stderr, "Error: Subcommand 'channel' not specified - see 'help list item' for details.\nList item in where?\n");
            return 1;
          }
          else if (streq_i(cmdntsa[i+4],"channel"))
          {
            if (cmdntsa[i+5] == NULL)
            {
              fprintf(stderr, "Error: Channel Identifier not specified - see 'help list item' for details.\nList item in where?\n");
              return 1;
            }
            else
            {
              /* List item x in y - Deal with this in a subfunction */
              return listitemarginchannelarg(cmdntsa[i+2],cmdntsa[i+5]);
            }
          }
          else
          {
            fprintf(stderr, "Error: Unknown subcommand '%s', subcommand 'channel' expected - see\n'help list item' for details.  List item in where?\n", cmdntsa[i+4]);
            return 1;
          }
        }
        else
        {
          fprintf(stderr, "Error: Unknown subcommand '%s', subcommand 'in' expected - see 'help list item'\nfor details.\n",cmdntsa[i+3]);
          return 1;
        }
      }
    }
    else
    {
      fprintf(stderr,"Error: Unknown subcommand '%s' - see 'help list' for details.\n", cmdntsa[i+2]);
      return 1;
    }
  }
  else if (streq_i(cmdntsa[i], "help"))
  {
    if (cmdntsa[i+1] == NULL || (cmdntsa[i+2] == NULL && streq_i(cmdntsa[i+1], "help")))
    {
      printf("Use the command 'help <command>' where '<command>' is a command you want to\nunderstand.\n");
      printf("Commands:\n*\ttest\n*\tconfigure\n*\tsubscribe\n*\tlist\n*\tdownload\n*\thelp\n");
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
    } /* End of Help Test */
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
      
    } /* End of Help Configure */
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
    } /* End of Help Subscribe */
    else if (streq_i(cmdntsa[i+1], "list"))
    {
      if (cmdntsa[i+2] == NULL)
      {
        printf("List:\n  List channels or items in a channel.\n  Subcommands:\n*\tchannels\n*\tchannel\n*\titems\n*\titem\n");
        return 0;
      }
      else if (streq_i(cmdntsa[i+2],"channels"))
      {
        printf("List Channels:\n  Lists all the channels to which you have subscribed.  This subcommand takes\nno arguments.\n");
        return 0;
      }
      else if (streq_i(cmdntsa[i+2],"channel"))
      {
        printf("List Channel:\n  This lists the details of a specific channel.  The syntax of this command is\n'list channel <channel identifier>', where '<channel identifier>' is the\nidentifier of the channel.  This can be:\n*\tThe Channel Title (if this begins with an exclamation mark ('!'),\n\tdouble the exclamation mark to escape it; e.g. '!title' becomes\n\t'!!title').\n*\tAn exclamation mark ('!') followed by the number of the channel (as\n\twritten next to the channel title in the output of the 'list channels'\n\tcommand), e.g. '!1'.\n*\tThe special code '!LATEST', meaning the channel to have been last\n\tupdated.\n*\tThe special code '!ALL', meaning to list all channels providing details\n\ton each.\n");
        return 0;
      }
      else if (streq_i(cmdntsa[i+2],"items"))
      {
        printf("List Items In Channel:\n  This lists the items in a specific channel.  The syntax of this command is\n'list items in channel <channel identifier>', where '<channel identifier>' is\nthe identifier of the channel containing the items.  This can be:\n*\tThe Channel Title (if this begins with an exclamation mark ('!'),\n\tdouble the exclamation mark to escape it; e.g. '!title' becomes\n\t'!!title').\n*\tAn exclamation mark ('!') followed by the number of the channel (as\n\twritten next to the channel title in the output of the 'list channels'\n\tcommand), e.g. '!1'.\n*\tThe special code '!LATEST', meaning the channel to have been last\n\tupdated.\n*\tThe special code '!ALL', meaning to list all channels providing details\n\ton each.\n");
        return 0;
      }
      else if (streq_i(cmdntsa[i+2],"item"))
      {
        printf("List (Specific) Item In Channel:\n  This lists the details of a specific item in a specific channel.  The syntax\nof this command is:\n'list item <item identifier> in channel <channel identifier>', where\n'<item identifier>' is the identifier of the item on which to provide details\nand '<channel identifier>' is the identifier of the channel containing the\nitems.  The Item Identifier can be:\n*\tThe Item Title (if it begins with an exclamation mark ('!'),\n\twrite the exclamation mark twice to escape it; e.g. '!title' becomes\n\t'!!title').\n*\tAn exclamation mark ('!') followed by the number of the item (as written\n\tnext to the title of the item in the output of the\n\t'list items in channel <channel identifier>' command), e.g. '!1'\n*\tThe special code '!LATEST', meaning the item in the channel with the\n\tmost recent publication date.\n*\tThe special code '!DOWNLOADED', meaning to list details on all the\n\titems in the specified channel(s) that have been downloaded.\n*\tThe special code '!NOTDOWNLOADED', meaning to list details on all the\n\titems in the specified channel(s) that have not yet been downloaded.\n*\tThe special code '!ALL', meaning to list all items in the specified\n\tchannel(s) and provide details on each.\n  The output from the last three special codes will be really long and should\nbe piped into a file or a program to break it down.\n  The Channel Identifier can be:\n*\tThe Channel Title (if this begins with an exclamation mark ('!'),\n\tdouble the exclamation mark to escape it; e.g. '!title' becomes\n\t'!!title').\n*\tAn exclamation mark ('!') followed by the number of the channel (as\n\twritten next to the channel title in the output of the 'list channels'\n\tcommand), e.g. '!1'.\n*\tThe special code '!LATEST', meaning the channel to have been last\n\tupdated.\n*\tThe special code '!ALL', meaning to list all channels providing\n\tdetails on each.  This code can only be used with item identifiers of\n\t'!DOWNLOADED', '!NOTDOWNLOADED' and '!ALL'.\n");
        return 0;
      }
      else
      {
        fprintf(stderr,"Error: Invalid Help List Command!\n");
        return 1;
      }
    } /* End of Help List */
    else if (streq_i(cmdntsa[i+1], "download"))
    {
      if (cmdntsa[i+2] == NULL)
      {
        printf("Download:\n  Download items.\n  Subcommands:\n*\tchannel\n");
        return 0;
      }
      else if (streq_i(cmdntsa[i+2], "channel"))
      {
        if (cmdntsa[i+3] == NULL)
        {
          printf("Download Channel:\n  Download items in a subscribed channel.  The syntax of this command is\n  'download channel <channel identifier> <subcommand>', where\n  '<channel identifier>' is the identifier of the channel.  This can be:\n*\tThe Channel Title (if this begins with an exclamation mark ('!'),\n\tdouble the exclamation mark to escape it; e.g. '!title' becomes\n\t('!!title').\n*\tAn exclamation mark ('!') followed by the number of the channel (as\n\twritten next to the channel title in the output of the 'list channels'\n\tcommand), e.g. '!1'.\n*\tThe special code '!LATEST', meaning the last channel to have been\n\tupdated.\n*\tThe special code '!ALL', meaning all channels.\n  Subcommands:\n*\tnone\n*\tlatest\n*\tall\n*\titem\n");
          return 0;
        }
        else if (streq_i(cmdntsa[i+3],"none"))
        {
          printf("Download Channel None:\n  This is a dummy operation that does nothing.  The syntax of this command is\n  'download channel <channel identifier> none', where '<channel identifier>' is\n  the identifier of the channel.  This can be:\n*\tThe Channel Title (if this begins with an exclamation mark ('!'),\n\tdouble the exclamation mark to escape it; e.g. '!title' becomes\n\t'!!title').\n*\tAn exclamation mark ('!') followed by the number of the channel (as\n\twritten next to the channel title in the output of the 'list channels'\n\tcommand), e.g. '!1'.\n*\tThe special code '!LATEST', meaning the channel to have been last\n\tupdated.\n*\tThe special code '!ALL', meaning to download from all channels.\n");
          return 0;
        }
        else if (streq_i(cmdntsa[i+3],"latest"))
        {
          printf("Download Channel Latest:\n  Download the latest item in the specified channel.  The syntax of this\n  command is 'download channel <channel identifier> latest', where\n  '<channel identifier>' is the identifier of the channel.  This can be:\n*\tThe Channel Title (if this begins with an exclamation mark ('!'),\n\tdouble the exclamation mark to escape it; e.g. '!title' becomes\n\t'!!title').\n*\tAn exclamation mark ('!') followed by the number of the channel (as\n\twritten next to the channel title in the output of the 'list channels'\n\tcommand), e.g. '!1'.\n*\tThe special code '!LATEST', meaning the channel to have been last\n\tupdated.\n*\tThe special code '!ALL', meaning to download from all channels.\n");
          return 0;
        }
        else if (streq_i(cmdntsa[i+3],"all"))
        {
          printf("Download Channel All:\n  Download all the undownloaded items in the specified channel.  The syntax of\n  this command is 'download channel <channel identifier> all', where\n  '<channel identifier>' is the identifier of the channel.  This can be:\n*\tThe Channel Title (if this begins with an exclamation mark ('!'),\n\tdouble the exclamation mark to escape it; e.g. '!title' becomes\n\t'!!title').\n*\tAn exclamation mark ('!') followed by the number of the channel (as\n\twritten next to the channel title in the output of the 'list channels'\n\tcommand), e.g. '!1'.\n*\tThe special code '!LATEST', meaning the channel to have been last\n\tupdated.\n*\tThe special code '!ALL', meaning to download from all channels.\n");
          return 0;
        }
        else if (streq_i(cmdntsa[i+3],"item"))
        {
          printf("Download Channel Item:\n  Download the specified item in the specified channel.  The syntax of this\n  command is 'download channel <channel identifier> item <item identifier>',\n  where '<channel identifier>' is the identifier of the channel and\n  '<item identifier>' is the identifier of the item.  The channel identifier\n  can be:\n*\tThe Channel Title (if this begins with an exclamation mark ('!'),\n\tdouble the exclamation mark to escape it; e.g. '!title' becomes\n\t'!!title').\n*\tAn exclamation mark ('!') followed by the number of the channel (as\n\twritten next to the channel title in the output of the 'list channels'\n\tcommand), e.g. '!1'.\n*\tThe special code '!LATEST', meaning the channel to have been last\n\tupdated.\n*\tThe special code '!ALL', meaning to download from all channels.\n");
          printf("  The item identifier can be:\n*\tThe Item Title (if this begins with an exclamation mark ('!'),\n\tdouble the exclamation mark to escape it; e.g. '!title' becomes\n\t'!!title').\n*\tAn exclamation mark ('!') followed by the number of the channel (as\n\twritten next to the channel title in the output of the\n\t'list channels' command), e.g. '!1'.\n*\tThe special code '!LATEST', meaning the latest item in the specified\n\tchannel.\n*\tThe special code '!NOTDOWNLOADED', meaning to download every item in\n\tthe specified channel that has yet to be downloaded\n*\tThe special code '!DOWNLOADED', meaning to re-download every\n\tpreviously-downloaded item in the specified channel (not\n\trecommended).\n*\tThe special code '!ALL', meaning to download every item from the\n\tspecified channle, no matter whether or not it's been previously\n\tdownloaded.\n");
          return 0;
        }
        else
        {
          fprintf(stderr, "Error: Invalid Help Download Channel Command!\n");
          return 1;
        }
      } /* End of Help Download Channel */
      else
      {
        fprintf(stderr, "Error: Invalid Help Download Command!\n");
        return 1;
      }
      
    } /* End of Help Download */
    else if (streq_i(cmdntsa[i+1], "help") && cmdntsa[i+2] != NULL)
    {
      fprintf(stderr, "Error: Too many help commands!  Hey, no recursing!\n");
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
  return 1;
}

int main(int argc, char *argv[])
{
  if (argc < 2 || streq_i(argv[1],"--help"))
  {
    printf("Usage:\n\t%s [-q] [{-y | -n}] [-f] <command> [<subcommand>] [<arguments>]\n", argv[0]);
    printf("Flags:\n\t-q\tQuiet Mode\n\t-y\tAnswer 'Yes' to everything\n\t-n\tAnswer 'No' to everything\n\t-f\tForce command\n");
    printf("Commands:\n*\ttest\n*\tconfigure\n*\tsubscribe\n*\tlist\n*\thelp\n");
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

ci_identifier *argtociid(char *arg)
{
  /* Convert an identifier expressed as an argument into an identifier structure */
  if (arg == NULL || arg[0] == 0 || (arg[0] == '!' && arg[1] == '0'))
  {
    fprintf(stderr,"Error: Invalid identifier specified!\n");
    return NULL;
  }
  ci_identifier *aciid = (ci_identifier *) malloc(sizeof(ci_identifier));
  if (aciid == NULL)
  {
    fprintf(stderr,"Error: Out of memory while converting identifier!\n");
    return NULL;
  }
  aciid->type = ci_none;
  
  if (arg[0] == '!')
  {
    if (arg[1] == '!') /* "!!" at beginning means title starts with "!" (escaped). */
    {
      aciid->type = ci_title;
      aciid->id.title = (char *) malloc(sizeof(char)*(strlen(arg)));
      if (aciid->id.title == NULL)
      {
        fprintf(stderr,"Error: Out of memory while converting identifier!\n");
        freeciid(aciid);
        return NULL;
      }
      strcpy(aciid->id.title, arg+sizeof(char));
    }
    else if (isdigit(arg[1])) /* "!(num)" means id of (num).*/
    {
      aciid->type = ci_dbid;
      aciid->id.id = atoull(arg+sizeof(char));
    }
    else if (streq_i(arg,"!NONE"))
    {
      aciid->type = ci_meta;
      aciid->id.dlcode = DLCODE_NONE;
    }
    else if (streq_i(arg,"!LATEST"))
    {
      aciid->type = ci_meta;
      aciid->id.dlcode = DLCODE_LATEST;
    }
    else if (streq_i(arg,"!NEW"))
    {
      aciid->type = ci_meta;
      aciid->id.dlcode = DLCODE_NEW;
    }
    else if (streq_i(arg,"!ALL"))
    {
      aciid->type = ci_meta;
      aciid->id.dlcode = DLCODE_ALL;
    }
    else if (streq_i(arg,"!DOWNLOADED"))
    {
      aciid->type = ci_meta;
      aciid->id.dlcode = DLCODE_DOWNLOADED;
    }
    else if (streq_i(arg,"!NOTDOWNLOADED"))
    {
      aciid->type = ci_meta;
      aciid->id.dlcode = DLCODE_NOTDOWNLOADED;
    }
    else
    {
      fprintf(stderr,"Error: Unrecognised Identifier code '%s'!\n",arg);
      freeciid(aciid);
      return NULL;
    }
  }
  else
  {
    aciid->type = ci_title;
    aciid->id.title = (char *) malloc(sizeof(char)*(1+strlen(arg)));
    if (aciid->id.title == NULL)
    {
      fprintf(stderr,"Error: Out of memory while converting identifier!\n");
      freeciid(aciid);
      return NULL;
    }
    strcpy(aciid->id.title, arg);
  }
  return aciid;
}

int listchannelarg(char *arg)
{
  /* Returns 0 on success */
  if (opendb(0) == 0)
  {
    fprintf(stderr, "Error: Could not open database!\n");
    closedb();
    return 2;
  }
  ci_identifier *aciid = argtociid(arg);
  if (aciid == NULL)
  {
    closedb();
    return 1;
  }
  if (listchanneldetails(aciid) == 0)
  {
    freeciid(aciid);
    closedb();
    return 2;
  }
  freeciid(aciid);
  closedb();
  return 0;
}

int listitemsinchannelarg(char *arg)
{
  /* Returns 0 on success */
  if (opendb(0) == 0)
  {
    fprintf(stderr, "Error: Could not open database!\n");
    closedb();
    return 2;
  }
  ci_identifier *aciid = argtociid(arg);
  if (aciid == NULL)
  {
    closedb();
    return 1;
  }
  if (listchannelitems(aciid) == 0)
  {
    freeciid(aciid);
    closedb();
    return 2;
  }
  freeciid(aciid);
  closedb();
  return 0;
}

int listitemarginchannelarg(char *itemarg, char *chanarg)
{
  /* Returns 0 on success */
  if (opendb(0) == 0)
  {
    fprintf(stderr, "Error: Could not open database!\n");
    closedb();
    return 2;
  }
  ci_identifier *itemciid = NULL, *chanciid = NULL;
  itemciid = argtociid(itemarg);
  if (itemciid == NULL)
  {
    closedb();
    return 1;
  }
  chanciid = argtociid(chanarg);
  if (chanciid == NULL)
  {
    freeciid(itemciid);
    closedb();
    return 1;
  }
  if (listitemdetails(chanciid, itemciid) == 0)
  {
    freeciid(chanciid);
    freeciid(itemciid);
    closedb();
    return 2;
  }
  freeciid(chanciid);
  freeciid(itemciid);
  closedb();
  return 0;
}

void downloaddberr(int retcode)
{
    if (retcode == SQLITE_BUSY || retcode == SQLITE_LOCKED)
    {
      fprintf(stderr, " - Database is busy!\n");
    }
    else if (retcode == SQLITE_NOMEM || retcode == SQLITE_FULL || retcode == SQLITE_TOOBIG)
    {
      fprintf(stderr, " - Out of Memory!\n");
    }
    else if (retcode == SQLITE_IOERR || retcode == SQLITE_CANTOPEN)
    {
      fprintf(stderr, " - Input/Output Error!\n");
    }
    else if (retcode == SQLITE_CORRUPT | retcode == SQLITE_SCHEMA)
    {
      fprintf(stderr, " - Database is corrupt or has changed!\n");
    }
    else
    {
      fprintf(stderr, " - Internal Error!\n");
    }
    return;
}

int downloadchannelitemmain(ci_identifier *chanident, ci_identifier *itemident)
{
  /* TODO: Finish this! */
  
  /* Returns:
      1 = Success
      2 = Success, but some skipped.
      0 = 
     -1 = OoM
     -2 = DB Error
     -3 = Settings error */
  
  if (chanident->type == ci_none || (chanident->type == ci_title && chanident->id.title == NULL)
      || itemident->type == ci_none || (itemident->type == ci_title && itemident->id.title == NULL))
        return 0;
  unsigned long long dbchanid = 0, dbitemid = 0;
  int specdl = 0;
  /* Channel ID */
  int retcode = getchannelid(chanident, &dbchanid);
  if (retcode == 0) return 1;
  if (retcode < 0) return 0;
#ifdef DEBUG
  	printf("ChannelID=%llu\n",dbchanid);
#endif
  
  /* Item ID */
  retcode = getitemid(itemident, &dbitemid, &specdl, dbchanid);
  if (retcode == 0) return 1;
  if (retcode < 0) return 0;
#ifdef DEBUG
  	printf("ItemID=%llu, DownloadSpec=%d\n",dbchanid, specdl);
#endif
  
  /* SQL and DB Stuff */
  char *wherechantxt = NULL;
  char *whereitemtxt = NULL;
  char *wheredownloadedtxt = NULL;
  if (dbchanid != 0) wherechantxt = "Item.Channel_ID = ?1";
  if (dbitemid != 0) whereitemtxt = "Item.Item_ID = ?2";
  if (specdl < 0) wheredownloadedtxt = "Item.Downloaded = 0";
  else if (specdl > 0) wheredownloadedtxt = "Item.Downloaded = 1";
  
  char *sqlendtxt = (char *) malloc(sizeof(char)*201);
  if (sqlendtxt == NULL)
  {
    return -1;
  }
  sqlendtxt[0] = 0;
  if ((!wherechantxt) && (!whereitemtxt) && (!wheredownloadedtxt))
  {
    strcat(sqlendtxt, ";");
  }
  else
  {
    strcat(sqlendtxt, " WHERE ");
    retcode = 0;
    if (wherechantxt)
    {
      strcat(sqlendtxt, wherechantxt);
      retcode++;
    }
    if (whereitemtxt)
    {
      if (retcode)
      {
        strcat(sqlendtxt, " AND ");
      }
      strcat(sqlendtxt, whereitemtxt);
      retcode++;
    }
    if (wheredownloadedtxt)
    {
      if (retcode)
      {
        strcat(sqlendtxt, " AND ");
      }
      strcat(sqlendtxt, wheredownloadedtxt);
      retcode++;
    }
    strcat(sqlendtxt, ";");
  }
  
#ifdef DEBUG
  	printf("SQLEndTxt='%s'\n",sqlendtxt);
#endif
  
  /* First, let's count the number of items affected */
  char *sqlcounttxt = (char *) malloc(sizeof(char)*(121+201));
  if (sqlcounttxt == NULL)
  {
    free(sqlendtxt);
    return -1;
  }
  
  strcpy(sqlcounttxt, "SELECT COUNT(DISTINCT Item.Item_ID) FROM Item LEFT JOIN Channel ON Item.Channel_ID = Channel.Channel_ID");
  strcat(sqlcounttxt, sqlendtxt);
  
#ifdef DEBUG
  	printf("SQLCountTxt='%s'\n",sqlcounttxt);
#endif
  
  sqlite3 *adb = getdb();
  sqlite3_stmt *countstmt = NULL;
  
  retcode = sqlite3_prepare_v2(adb, sqlcounttxt, strlen(sqlcounttxt), &countstmt, NULL);
  if (retcode != SQLITE_OK)
  {
    /* Do something here */
    fprintf(stderr, "Error: Could not count downloads");
    downloaddberr(retcode);
#ifdef DEBUG
  	fprintf(stderr,"(Prepare)\n");
#endif
    sqlite3_finalize(countstmt);
    free(sqlendtxt);
    free(sqlcounttxt);
    return -2;
    
  }
  
  if (wherechantxt)
  {
    retcode = sqlite3_bind_int64(countstmt, 1, (sqlite3_int64) dbchanid);
    if (retcode != SQLITE_OK)
    {
      /* Do something here! */
      fprintf(stderr, "Error: Could not count downloads");
      downloaddberr(retcode);
#ifdef DEBUG
  	fprintf(stderr,"(Bind Channel)\n");
#endif
      sqlite3_finalize(countstmt);
      free(sqlendtxt);
      free(sqlcounttxt);
      return -2;
    }
  }
  
  if (whereitemtxt)
  {
    retcode = sqlite3_bind_int64(countstmt, 2, (sqlite3_int64) dbitemid);
    if (retcode != SQLITE_OK)
    {
      /* Do something here! */
      fprintf(stderr, "Error: Could not count downloads");
      downloaddberr(retcode);
#ifdef DEBUG
  	fprintf(stderr,"(Bind item)\n");
#endif
      sqlite3_finalize(countstmt);
      free(sqlendtxt);
      free(sqlcounttxt);
      return -2;
    }
  }
  
  unsigned long long numitems;
  
  retcode = sqlite3_step(countstmt);
  if (retcode == SQLITE_ROW)
  {
    numitems = sqlite3_column_int64(countstmt, 0);
  }
  else if (retcode == SQLITE_OK || retcode == SQLITE_DONE)
  {
      fprintf(stderr, "Error: Could not count downloads - download count returned no value\n");
      sqlite3_finalize(countstmt);
#ifdef DEBUG
  	fprintf(stderr,"(Step)\n");
#endif
      free(sqlendtxt);
      free(sqlcounttxt);
      return -2;
  }
  else
  {
    /* Do something here! */
      fprintf(stderr, "Error: Could not count downloads");
      downloaddberr(retcode);
#ifdef DEBUG
  	fprintf(stderr,"(Step)\n");
#endif
      sqlite3_finalize(countstmt);
      free(sqlendtxt);
      free(sqlcounttxt);
      return -2;
  }
  
  retcode = sqlite3_finalize(countstmt);
  if (retcode != SQLITE_OK)
  {
    /* Do something here! */
      fprintf(stderr, "Error: Could not count downloads");
      downloaddberr(retcode);
#ifdef DEBUG
  	fprintf(stderr,"(Finalise)\n");
#endif
      free(sqlendtxt);
      free(sqlcounttxt);
      return -2;
  }
  
  if (numitems <= 0)
  {
    /* Do something important here! */
    printf("No items found to download!\n");
    free(sqlendtxt);
    free(sqlcounttxt);
    return 0;
  }
  
  free(sqlcounttxt); /* We don't need this anymore! */
  
  
  /* Now, create an array to hold the results of the downloads */
  
  /* typedef struct dlresult_struct
  {
    unsigned long long itemid;
    char *fn;
    int downloaded;
  } dlresult; */
  
  dlresult *dlres = (dlresult *) malloc(sizeof(dlresult)*numitems);
  if (dlres == NULL)
  {
    /* Do something important here! */
    free(sqlendtxt);
    return -1;
  }
  
  memset(dlres, 0, sizeof(dlresult)*numitems);
  
  /* Get settings data */
  
  char *poddir = getsettingdata("PODCAST_DIR");
  if (poddir == NULL)
  {
    free(sqlendtxt);
    free(dlres);
    return -1;
  }
  else if (poddir[0] == 0)
  {
    fprintf(stderr, "Error: Podcast Directory not set!\n");
    free(poddir);
    free(sqlendtxt);
    free(dlres);
    return -3;
  }
  
  char *dirsep = getsettingdata("DIR_SEPARATOR");
  if (dirsep == NULL)
  {
    free(poddir);
    free(sqlendtxt);
    free(dlres);
    return -1;
  }
  else if (dirsep[0] == 0)
  {
    fprintf(stderr, "Error: Directory Separator not set!\n");
    free(poddir);
    free(dirsep);
    free(sqlendtxt);
    free(dlres);
    return -3;
  }
  
  int settingssize = strlen(poddir) + strlen(dirsep) + 1;
  
  /* Next, query the DB, do the downloads and hold the results in the array */
  
  char *sqltxt = (char *) malloc(sizeof(char)*(353+121));
  if (sqltxt == NULL)
  {
    free(poddir);
    free(dirsep);
    free(sqlendtxt);
    free(dlres);
    return -1;
  }
  strcpy(sqltxt, "SELECT Item.Item_ID, Item.Channel_ID, Item.Title, Item.Enclosure_URL, Item.Enclosure_Length, Item.Enclosure_Type, Item.Downloaded, Item.Downloaded_Date, Item.Original_Filename, Item.Filename, Channel.Directory, Channel.Title, Channel.Last_Refresh_Date FROM Item LEFT JOIN Channel ON Item.Channel_ID = Channel.Channel_ID");
  strcat(sqltxt, sqlendtxt);
  
#ifdef DEBUG
  	printf("SQLSelectTxt='%s'\n",sqltxt);
#endif
  
  sqlite3_stmt *selstmt = NULL;
  
  retcode = sqlite3_prepare_v2(adb, sqltxt, strlen(sqltxt), &selstmt, NULL);
  if (retcode != SQLITE_OK)
  {
    /* Do something here */
    fprintf(stderr, "Error: Could not select downloads");
    downloaddberr(retcode);
#ifdef DEBUG
  	fprintf(stderr,"(Prepare)\n");
#endif
    sqlite3_finalize(selstmt);
    free(poddir);
    free(dirsep);
    free(sqlendtxt);
    free(dlres);
    free(sqltxt);
    return -2;
    
  }
  
  if (wherechantxt)
  {
    retcode = sqlite3_bind_int64(selstmt, 1, (sqlite3_int64) dbchanid);
    if (retcode != SQLITE_OK)
    {
      /* Do something here! */
      fprintf(stderr, "Error: Could not select downloads");
      downloaddberr(retcode);
#ifdef DEBUG
  	fprintf(stderr,"(Bind Channel)\n");
#endif
      sqlite3_finalize(selstmt);
      free(poddir);
      free(dirsep);
      free(sqlendtxt);
      free(dlres);
      free(sqltxt);
      return -2;
    }
  }
  
  if (whereitemtxt)
  {
    retcode = sqlite3_bind_int64(selstmt, 2, (sqlite3_int64) dbitemid);
    if (retcode != SQLITE_OK)
    {
      /* Do something here! */
      fprintf(stderr, "Error: Could not select downloads");
      downloaddberr(retcode);
#ifdef DEBUG
  	fprintf(stderr,"(Bind Item)\n");
#endif
      sqlite3_finalize(selstmt);
      free(poddir);
      free(dirsep);
      free(sqlendtxt);
      free(dlres);
      free(sqltxt);
      return -2;
    }
  }
  
  /* "SELECT 
    Item.Item_ID, 
    Item.Channel_ID, 
    Item.Title, 
    Item.Enclosure_URL, 
    Item.Enclosure_Length, 
    Item.Enclosure_Type, 
    Item.Downloaded, 
    Item.Download_Date, 
    Item.Original_Filename, 
    Item.Filename, 
    Channel.Directory, 
    Channel.Title, 
    Channel.Last_Refresh_Date"
   */
  unsigned long long db_iid = 0, db_cid = 0, db_ienclen = 0, db_prevcid = 0, 
                     i = 0;
  const char *db_itit = NULL, *db_iencurl = NULL, *db_ienctyp = NULL, 
             *db_idldate = NULL, *db_iofn = NULL, *db_ifn = NULL, 
             *db_cdir = NULL, *db_ctit = NULL, *db_clrd = NULL;
  char *chanpath = NULL, *iofext = NULL, *itfn = NULL;
  int db_idled = 0;
  int retcode2 = 0, dlfails = 0;
  do
  {
    /* Step through results and do downloads, saving results in dlres array */#
    retcode = sqlite3_step(selstmt);
    if (retcode == SQLITE_ROW)
    {
      if (sqlite3_column_count(selstmt) < 13)
      {
        retcode = SQLITE_ERROR;
        break;
      }
      db_prevcid = db_cid;
      db_iid = sqlite3_column_int64(selstmt, 0);
      db_cid = sqlite3_column_int64(selstmt, 1);
      db_itit = sqlite3_column_text(selstmt, 2);
      db_iencurl = sqlite3_column_text(selstmt, 3);
      db_ienclen = sqlite3_column_int64(selstmt, 4);
      db_ienctyp = sqlite3_column_text(selstmt, 5);
      db_idled = sqlite3_column_int(selstmt, 6);
      db_idldate = sqlite3_column_text(selstmt, 7);
      db_iofn = sqlite3_column_text(selstmt, 8);
      db_ifn = sqlite3_column_text(selstmt, 9);
      db_cdir = sqlite3_column_text(selstmt, 10);
      db_ctit = sqlite3_column_text(selstmt, 11);
      db_clrd = sqlite3_column_text(selstmt, 12);
      
      if (db_idled)
      {
        printf("Overwriting download from %s '%s'\n",db_idldate, db_ifn);
      }
      
      chanpath = (char *) malloc(sizeof(char)*(1+settingssize+strlen(db_cdir)));
      if (chanpath == NULL)
      {
        retcode = SQLITE_NOMEM;
        break;
      }
      strcpy(chanpath, poddir);
      strcat(chanpath, dirsep);
      strcat(chanpath, db_cdir);
      
      rssenclosure are; /* Don't need to free this stuff in 'are'! */
      are.url = db_iencurl;
      are.length = db_ienclen;
      are.type = db_ienctyp;
      
      iofext = (char *) malloc(sizeof(char)*(1+strlen(db_iencurl)));
      if (iofext == NULL)
      {
        free(chanpath);
        chanpath = NULL;
        retcode = SQLITE_NOMEM;
        break;
      }
      
      itfn = (char *) malloc(sizeof(char)*(1+strlen(db_iofn)));
      if (itfn == NULL)
      {
        free(chanpath);
        chanpath = NULL;
        free(iofext);
        iofext = NULL;
        retcode = SQLITE_NOMEM;
        break;
      }
      
      retcode2 = getencfileext(iofext,&are);
      if (retcode2 == 0)
      {
        free(chanpath);
        chanpath = NULL;
        free(iofext);
        iofext = NULL;
        free(itfn);
        itfn = NULL;
        retcode = SQLITE_NOMEM;
        break;
      }
      else if (retcode2 == -1) iofext[0] = 0;
      else if (retcode2 == 2) fprintf(stderr, "Warning: Assumed file extension to be '%s'.\n", iofext);
      makevalidfilename(itfn, db_iofn);
      char *dotpos = NULL;
      dotpos = strstr(itfn, ".");
      if (dotpos != NULL) dotpos[0] = 0;
      dotpos = NULL;
      
      char *ifn = NULL;
      
      if (db_ifn == NULL)
      {
        ifn = (char *) malloc(sizeof(char)*(102+strlen(itfn)+strlen(iofext)));
      }
      else ifn = (char *) malloc(sizeof(char)*(1+strlen(db_ifn)));
      
      if (ifn == NULL)
      {
        free(chanpath);
        chanpath = NULL;
        free(iofext);
        iofext = NULL;
        free(itfn);
        itfn = NULL;
        retcode = SQLITE_NOMEM;
        break;
      }
      
      if (db_ifn)
      {
        strcpy(ifn, db_ifn);
      }
      else
      {
        retcode2 = newfilename(ifn, chanpath, itfn, iofext);
        if (retcode2 == 0)
        {
          free(ifn);
          ifn = NULL;
          free(chanpath);
          chanpath = NULL;
          free(iofext);
          iofext = NULL;
          free(itfn);
          itfn = NULL;
          retcode = SQLITE_NOMEM;
          break;
        }
        strcat(ifn,".");
        strcat(ifn,iofext);
      }
      
      if (db_cid != db_prevcid)
      {
        printf("Channel '%s' (%llu) last updated %s:\n",db_ctit,db_cid,db_clrd);
      }
      
      printf("  Downloading item '%s' (%llu) to file '%s%s%s'\n",
             db_itit,db_iid,db_cdir,dirsep,ifn);
      
      retcode2 = dodownload(db_iencurl, db_cdir, ifn);
      
      if (retcode2 == 0)
      {
        fprintf(stderr, "  Warning: Error downloading item '%s' from URL '%s'.  Skipping this download.\n",db_itit,db_iencurl);
        dlres[i].downloaded = 0;
        dlfails++;
      }
      else dlres[i].downloaded = 1;
      
      dlres[i].itemid = db_iid;
      dlres[i].fn = ifn;
      
      /* Free unneeded strings (NOT ifn as it's used for dlres!) */
      free(chanpath);
      chanpath = NULL;
      free(iofext);
      iofext = NULL;
      free(itfn);
      itfn = NULL;
      
      
      i++;
    }
    else if (retcode != SQLITE_DONE && retcode != SQLITE_OK) break;
  } while (retcode != SQLITE_DONE && retcode != SQLITE_OK);
  
  /* With any frees from here, handle dlres.fn strings! */
  /* Handle errors here */
  if (retcode != SQLITE_DONE && retcode != SQLITE_OK)
  {
      fprintf(stderr, "Error: Failed during the download of items");
      downloaddberr(retcode);
      sqlite3_finalize(selstmt);
      free(poddir);
      free(dirsep);
      free(sqlendtxt);
      for (i=0;i<numitems;i++)
      {
        if (dlres[i].fn != NULL) free(dlres[i].fn);
      }
      free(dlres);
      free(sqltxt);
      return -2;
  }
  
  retcode = sqlite3_finalize(selstmt);
  if (retcode != SQLITE_OK)
  {
      fprintf(stderr, "Error: Failed during the finalisation of the download of items");
      downloaddberr(retcode);
      free(poddir);
      free(dirsep);
      free(sqlendtxt);
      for (i=0;i<numitems;i++)
      {
        if (dlres[i].fn != NULL) free(dlres[i].fn);
      }
      free(dlres);
      free(sqltxt);
      return -2;
  }
  
  free(sqltxt); /* Don't need this anymore! */
  sqltxt = NULL;
  free(sqlendtxt); /* Or this! */
  sqlendtxt = NULL;
  
  /* Then put the results from the array into the database! */
  
  char *sqlupdtxt = "UPDATE Item SET Downloaded = ?, Downloaded_Date = datetime('now'), Filename = ? WHERE Item_ID = ?;";
  sqlite3_stmt *updstmt = NULL;
  
  retcode = sqlite3_prepare_v2(adb, sqlupdtxt, strlen(sqlupdtxt), &updstmt, NULL);
  if (retcode != SQLITE_OK)
  {
    /* Do something here */
    fprintf(stderr, "Error: Could not update database");
    downloaddberr(retcode);
    sqlite3_finalize(updstmt);
    free(poddir);
    free(dirsep);
    for (i=0;i<numitems;i++)
    {
      if (dlres[i].fn != NULL) free(dlres[i].fn);
    }
    free(dlres);
    return -2;
  }
  
  for (i=0;i<numitems;i++)
  {
  /* UPDATE Item SET Downloaded = ?, 
     Downloaded_Date = datetime('now'), 
     Filename = ? WHERE Item_ID = ?;";*/
    if (dlres[i].itemid == 0) continue;
    sqlite3_bind_int(updstmt,1,dlres[i].downloaded);
    sqlite3_bind_text(updstmt,2,dlres[i].fn,-1,SQLITE_TRANSIENT);
    sqlite3_bind_int64(updstmt,3,dlres[i].itemid);
    retcode = sqlite3_step(updstmt);
    if (retcode != SQLITE_OK && retcode != SQLITE_DONE && retcode != SQLITE_ROW)
    {
      break;
    }
    retcode = sqlite3_reset(updstmt);
    if (retcode != SQLITE_OK)
    {
      break;
    }
    retcode = SQLITE_OK;
  }
  if (retcode != SQLITE_OK)
  {
    /* Do something here */
    fprintf(stderr, "Error: Could not update database");
    downloaddberr(retcode);
    sqlite3_finalize(updstmt);
    free(poddir);
    free(dirsep);
    for (i=0;i<numitems;i++)
    {
      if (dlres[i].fn != NULL) free(dlres[i].fn);
    }
    free(dlres);
    return -2;
  }
  retcode = sqlite3_finalize(updstmt);
  if (retcode != SQLITE_OK)
  {
    /* Do something here */
    fprintf(stderr, "Warning: Failed to free Database Update data");
    downloaddberr(retcode);
    sqlite3_finalize(updstmt);
  }
  
  
  
  /* Then FINISH! */
  
  free(poddir);
  free(dirsep);
  for (i=0;i<numitems;i++)
  {
    if (dlres[i].fn != NULL) free(dlres[i].fn);
  }
  free(dlres);
  
  if (dlfails) return 2;
  return 1;
  
}

void printdownloadstatus(int retcode)
{
  switch (retcode)
  {
    case 1:
      printf("Downloading complete!  All downloads were successful.\n");
    break;
    
    case 2:
      printf("Downloading complete.  Some downloads were skipped.\n");
    break;
    
    case 0:
      printf("Downloading failed: one or more errors were encountered.\n");
    break;
    
    case -2:
      printf("Downloading failed: one or more database errors were encountered.\n");
    break;
    
    case -3:
      printf("Downloading failed: one or more configuration errors were encountered.\n");
    break;
    
    case -1:
      printf("Downloading failed: out of memory!\n");
    break;
  }
  
}

int downloadchannellatest(char *arg)
{
  /* Return 0 on success */
  if (opendb(1) == 0)
  {
    fprintf(stderr, "Error: could not open database!\n");
    closedb();
    return 1;
  }
  ci_identifier *chanciid = argtociid(arg);
  if (chanciid == NULL)
  {
    closedb();
    return 1;
  }
  ci_identifier *itemciid = (ci_identifier *) malloc(sizeof(ci_identifier));
  if (itemciid == NULL)
  {
    fprintf(stderr,"Error: Out of memory while converting identifier!\n");
    freeciid(chanciid);
    closedb();
    return 1;
  }
  itemciid->type = ci_meta;
  itemciid->id.dlcode = DLCODE_LATEST;
  
  int retcode = downloadchannelitemmain(chanciid,itemciid);
  printdownloadstatus(retcode);
  
  freeciid(itemciid);
  freeciid(chanciid);
  closedb();
  if (retcode < 1) return (1+(0-retcode));
  return 0;
}

int downloadchannelall(char *arg)
{
  /* Return 0 on success.  This will actually implement the download of all
   not downloaded to save time and space */
  if (opendb(1) == 0)
  {
    fprintf(stderr, "Error: could not open database!\n");
    closedb();
    return 1;
  }
  ci_identifier *chanciid = argtociid(arg);
  if (chanciid == NULL)
  {
    closedb();
    return 1;
  }
  ci_identifier *itemciid = (ci_identifier *) malloc(sizeof(ci_identifier));
  if (itemciid == NULL)
  {
    fprintf(stderr,"Error: Out of memory while converting identifier!\n");
    freeciid(chanciid);
    closedb();
    return 1;
  }
  itemciid->type = ci_meta;
  itemciid->id.dlcode = DLCODE_NOTDOWNLOADED;
  
  int retcode = downloadchannelitemmain(chanciid,itemciid);
  printdownloadstatus(retcode);
  
  freeciid(itemciid);
  freeciid(chanciid);
  closedb();
  if (retcode < 1) return (1+(0-retcode));
  return 0;
}

int downloadchannelitem(char *chanarg, char *itemarg)
{
  /* Return 0 on success */
  if (opendb(1) == 0)
  {
    fprintf(stderr, "Error: could not open database!\n");
    closedb();
    return 1;
  }
  ci_identifier *chanciid = argtociid(chanarg);
  if (chanciid == NULL)
  {
    closedb();
    return 1;
  }
  
  ci_identifier *itemciid = argtociid(itemarg);
  if (itemciid == NULL)
  {
    freeciid(chanciid);
    closedb();
    return 1;
  }
  
  int retcode = downloadchannelitemmain(chanciid,itemciid);
  printdownloadstatus(retcode);
  
  freeciid(itemciid);
  freeciid(chanciid);
  closedb();
  if (retcode < 1) return (1+(0-retcode));
  return 0;
}
