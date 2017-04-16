#ifndef __INC_DBEXCHANGE_H__
#define __INC_DBEXHCANGE_H__ 1

#include <sqlite3.h>
#include "parser.h"

#define DBNAME "scpoddb.bin"
#ifndef SQLITE_OK_LOAD_PERMANENTLY
#define SQLITE_OK_LOAD_PERMANENTLY 256
#endif


int opendb(int dolo); /* Run this before ANY DB functions! */
int closedb(); /* Run this at the end of the program */
int preparecsstatement(char *setting); /* Run this before setting a config setting */
int setconfigsetting(char *setting, char *value);
char *getsettingdata(char *setting);
int writecsview(char *setting);
int preparechannelstatement(); /* Run this before adding any channels */
unsigned long addchannel(chanpropnode *achan, char *chanurl, 
                         char *rss_version, char *directory);
int finalisechannelstatement(); /* Run this after adding all channels */
int preparechancatstatement(); /* Run this before adding any channel categories */
int addchancat(unsigned long channelid, catnode *acat);
void finalisechancatstatement(); /* Run this after adding all channel categories */
int checkupdatechannel(chanpropnode *achan, char *rss_version);
int prepareitemstatement(); /* Run this before adding any items */
int prepareselitemstatement(); /* Run this before checking if the item exists */
int isitemnew(itempropnode *anitem, unsigned long dbchannelid); /* Returns -1 on error, otherwise 1=true and 0=false */
void finaliseselitemstatement(); /* Run this after checking all items for newness */
static int callback_cuc(void *achan, int argc, char **argv, char **azColName);
static int callback_csview(void *NotUsed, int argc, char **argv, char **azColName);
static int callback_gsd(void *NotUsed, int argc, char **argv, char **azColName);
static int callback_csset(void *NotUsed, int argc, char **argv, char **azColName);
static int callback_gcid(void *NotUsed, int argc, char **argv, char **azColName);
static int callback_ccu(void *NotUsed, int argc, char **argv, char **azColName);
void rssdatetoisodate(char *isodate, rssdate *adate);
static int callback_clo(void *NotUsed, int argc, char **argv, char **azColName);
int checklastopened();
int writetopassbackstr(char *astr);
int dbwriteerror(int errorcode);

#endif
