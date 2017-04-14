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
  outstr[i] = 0;
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
  if (strlen(a) != strlen(b)) return 0;
  if (streq_(a,b)) return 1;
  ai = (char *) malloc(sizeof(char)*(1+strlen(a)));
  if (ai==NULL)
  {
#ifdef DEBUG
    	printf("MEMERR\n");
#endif
    return 0;
  }
  bi = (char *) malloc(sizeof(char)*(1+strlen(b)));
  if (bi==NULL)
  {
#ifdef DEBUG
    	printf("MEMERR\n");
#endif
    free(ai);
    return 0;
  }
  strtoupper(ai,a);
  strtoupper(bi,b);
  /*	printf("'%s'=='%s'?\n", ai, bi);*/
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

int startsame_i(char *a, char *b)
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
  int ans = startsame_(ai,bi);
  free(ai);
  free(bi);
  return ans;
}

int endwith_(char *exstring, char *refstring)
{
  unsigned long el, rl;
  el = strlen(exstring);
  rl = strlen(refstring);
  if (el<rl) return 0;
  if (el == rl) return streq_(exstring, refstring);
  return streq_(exstring+(sizeof(char)*(el-rl)), refstring);
}

int endwith_i(char *exstring, char *refstring)
{
  unsigned long el, rl;
  el = strlen(exstring);
  rl = strlen(refstring);
  if (el<rl) return 0;
  if (el == rl) return streq_i(exstring, refstring);
  return streq_i(exstring+(sizeof(char)*(el-rl)), refstring);
}

void strltrim(char *ostr, char *istr)
{
  long n;
  for (n=0;istr[n]!=0;n++) if (istr[n] != ' ') break;
  strcpy(ostr, istr+n);
}

void strtrimws(char *ostr, char *istr)
{
  long n;
  for (n=0;istr[n]!=0;n++)
  {
    if (istr[n]!=' ' && istr[n]!='\n' && istr[n]!='\r' && istr[n]!='\t')
    {
      break;
    }
  }
  strcpy(ostr,istr+n);
  for (n=strlen(ostr)-1;n>=0;n--)
  {
    if (ostr[n]!=' ' && ostr[n]!='\n' && ostr[n]!='\r' && ostr[n]!='\t')
    {
      break;
    }
  }
  n++;
  ostr[n] = 0;
}

int strtrimws1(char *astr)
{
  if (astr == NULL) return 0;
  char *ostr = (char *) malloc(sizeof(char)*(1+strlen(astr)));
  if (ostr == NULL) return 0;
  strtrimws(ostr,astr);
  strcpy(astr,ostr);
  free(ostr);
  return 1;
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

long searchbackch(char *astr, char findchar)
{
  if (astr == NULL) return -1;
  long las = strlen(astr);
  if (las<0) return -1;
  long n;
  for (n=las n>=0; n--)
  {
    if (astr[n] == findchar) return n;
  }
  return -1;
}
