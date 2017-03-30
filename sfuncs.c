#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "sfuncs.h"


void strtoupper(char *outstr, char *instr)
{
  long i;
  for (i=0;instr[i]!=0;i++)
  {
    outstr[i] = toupper(instr[i]);
  }
}

int streq_(char *a, char *b)
{
  unsigned long al, bl;
  if (a == NULL || b == NULL) return 0;
  al = strlen(a);
  bl = strlen(b);
  if (al != bl) return 0;
  if (memcmp(a,b,al)==0) return 1;
  return 0;
}

int streq_i(char *a, char *b)
{
  char *ai, *bi;
  if (a==NULL || b==NULL) return 0;
  ai = (char *) malloc(sizeof(char)*(1+strlen(a)));
  if (ai==NULL) return 0;
  bi = (char *) malloc(sizeof(char)*(1+strlen(b)));
  if (bi==NULL)
  {
    free(ai);
    return 0;
  }
  strtoupper(ai,a);
  strtoupper(bi,b);
  int ans = streq_(ai,bi);
  free(ai);
  free(bi);
  return ans;
}

int startsame_(char *a, char *b)
{
  unsigned long al, bl;
  if (a == NULL || b == NULL) return 0;
  al = strlen(a);
  bl = strlen(b);
  if (al < bl)
  {
    if (memcmp(a,b,al)==0) return 1;
  }
  else
  {
    if (memcmp(a,b,bl)==0) return 1;
  }
  return 0;
}

void strltrim(char *ostr, char *istr)
{
  long n;
  for (n=0;istr[n]!=0;n++) if (istr[n] != ' ') break;
  strcpy(ostr, istr+n);
}

void freentsa(char **antsa)
{
  unsigned long n;
  for (n=0;antsa[n]!=(char *)NULL;n++)
  {
    free(antsa[n]);
  }
  free(antsa);
}
