#ifndef __INC_DBEXCHANGE_H__
#define __INC_DBEXHCANGE_H__ 1

#include <sqlite3.h>

#define DBNAME "scpoddb.bin"
#ifndef SQLITE_OK_LOAD_PERMANENTLY
#define SQLITE_OK_LOAD_PERMANENTLY 256
#endif


int opendb(int dolo);
int closedb();
static int callback_clo(void *NotUsed, int argc, char **argv, char **azColName);
int checklastopened();
int writetopassbackstr(char *astr);
int dbwriteerror(int errorcode);

#endif
