#ifndef __INC_DBEXCHANGE_H__
#define __INC_DBEXHCANGE_H__ 1

#define DBNAME "scpoddb.bin"


int opendb(int dolo);
static int callback_clo(void *NotUsed, int argc, char **argv, char **azColName);
int checklastopened();
int writetopassbackstr(char *astr);
int dbwriteerror(int errorcode);

#endif
