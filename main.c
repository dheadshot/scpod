#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "sfuncs.h"
#include "parser.h"

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
    else if (streq_i(cmdntsa[i+1], "database"))
    {
      /* Open then close the database */
      return testdb();
    }
    else
    {
      fprintf(stderr, "Error: Unknown Test '%s'!\n", cmdntsa[i+1]);
      return 1;
    }
  }
  else if (streq_i(cmdntsa[i], "help"))
  {
    if (cmdntsa[i+1] == NULL || (cmdntsa[i+2] == NULL && streq_i(cmdntsa[i+1], "help")))
    {
      printf("Use the command 'help <command>' where '<command>' is a command you want to\nunderstand.\n");
      printf("Commands:\n*\ttest\n*\thelp\n");
      return 0;
    }
    else if (streq_i(cmdntsa[i+1], "test"))
    {
      if (cmdntsa[i+2] == NULL)
      {
        printf("Test:\n  Tests a function of the program.\nSubcommands of Test:\n*\tparser\n*\tdatabase\n");
        return 0;
      }
      else if (streq_i(cmdntsa[i+2], "parser"))
      {
        printf("Test Parser:\n  Tests the parser of RSS files.  Use the command as 'test parser <feed file>',\nwhere <feed file> is the file containing the RSS feed to parse.  The file must\nbe locally accessible, not a URL.\n");
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
    printf("Commands:\n\ttest\n\thelp\n");
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
    printf("Error opening file %s\n", rssfile);
    return 2;
  }
  int parserret = parsersstoll(feedfile);
  if (parserret == 0)
  {
    printf("Error reading file!\n");
    return 3;
  }
  else if (parserret == -1)
  {
    printf("Memory Error!\n");
    return 4;
  }
  else if (parserret == -2)
  {
    printf("Error!  File is not RSS!\n");
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
