#ifndef __INC_DBEXCHANGE_H__
#define __INC_DBEXHCANGE_H__ 1

#include <sqlite3.h>

#define DBNAME "scpoddb.bin"
#ifndef SQLITE_OK_LOAD_PERMANENTLY
#define SQLITE_OK_LOAD_PERMANENTLY 256
#endif


int opendb(int dolo);
int closedb();
int preparecsstatement(char *setting);
int setconfigsetting(char *setting, char *value);
int writecsview(char *setting);
int preparechannelstatement();
unsigned long addchannel(chanpropnode *achan, char *chanurl, 
                         char *rss_version, char *directory);
static int callback_csview(void *NotUsed, int argc, char **argv, char **azColName);
static int callback_csset(void *NotUsed, int argc, char **argv, char **azColName);
static int callback_gcid(void *NotUsed, int argc, char **argv, char **azColName);
void rssdatetoisodate(char *isodate, rssdate *adate);
static int callback_clo(void *NotUsed, int argc, char **argv, char **azColName);
int checklastopened();
int writetopassbackstr(char *astr);
int dbwriteerror(int errorcode);

#endif
