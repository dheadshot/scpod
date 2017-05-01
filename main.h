#ifndef __INC_MAIN_H__
#define __INC_MAIN_H__ 1

#include "parser.h"

int docmd(char **cmdntsa, int offset);
int main(int argc, char *argv[]);
int testparser(char *rssfile);
int testdb();
int testdownload(char *url);
int configuresetting(char *setting, char *value);
int testdlparser(char *url);
int dosubscribe(char *url, int dlcode);
ci_identifier *argtociid(char *arg);
int listchannelarg(char *arg);
int listitemsinchannelarg(char *arg);
int listitemarginchannelarg(char *itemarg, char *chanarg);

#endif
