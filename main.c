#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "sfuncs.h"
#include "parser.h"

#include "main.h"


int main(int argc, char *argv[])
{
  if (argc != 2 || streq_i(argv[1],"--help"))
  {
    printf("Test Usage: %s <feed file>\n   Where <feed file> is the file containing the RSS feed.\n", argv[0]);
    return 1;
  }
  FILE *feedfile = fopen(argv[1],"r");
  if (feedfile == NULL)
  {
    printf("Error opening file %s\n", argv[1]);
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
