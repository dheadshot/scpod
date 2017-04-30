#ifndef __INC_DBEXCHANGE_H__
#define __INC_DBEXHCANGE_H__ 1

#include <sqlite3.h>
#include "parser.h"

#define DBNAME "scpoddb.bin"
#ifndef SQLITE_OK_LOAD_PERMANENTLY
#define SQLITE_OK_LOAD_PERMANENTLY 256
#endif /* This fixes a bug... */


int opendb(int dolo); /* Run this before ANY DB functions! */
int closedb(); /* Run this at the end of the program */
int preparecsstatement(char *setting); /* Run this before setting a config setting */
int setconfigsetting(char *setting, char *value);
char *getsettingdata(char *setting);
int writecsview(char *setting);
unsigned long long getchannelidfromtitle(char *title);
unsigned long long getlatestupdatedchannel();
int listallchannels();
int listchannelinfo(unsigned long long channelid);
int listallitemsinchannel(unsigned long long chanid);
int listiteminfoinchannel(unsigned long long itemid, 
                          unsigned long long channelid, int specdl);
/* Specdl: 0=all, 1=dled, -1=ndled */
int preparechannelstatement(); /* Run this before adding any channels */
unsigned long long addchannel(chanpropnode *achan, char *chanurl, 
                              char *rss_version, char *directory);
int finalisechannelstatement(); /* Run this after adding all channels */
int preparechancatstatement(); /* Run this before adding any channel categories */
int addchancat(unsigned long long channelid, catnode *acat);
void finalisechancatstatement(); /* Run this after adding all channel categories */
int checkupdatechannel(chanpropnode *achan, char *rss_version);
int prepareitemcatstatement(); /* Run this before adding any item categories */
int additemcat(unsigned long long itemid, catnode *acat);
void finaliseitemcatstatement(); /* Run this after adding all item categories */
int prepareitemstatementdownloaded(); /* Run this before adding any dl items */
int prepareitemstatementnotdownloaded(); /* Run this before adding any non-dl items */
unsigned long long additemdled(itempropnode *anitem, unsigned long long chanid, 
                               char *ofn, char *thefn); /* Add a Downloaded item */
unsigned long long additemndled(itempropnode *anitem, unsigned long long chanid, 
                                char *ofn); /* Add a Non-Downloaded item */
void finaliseitemdlstatement(); /* Run this after adding all the downloaded items */
void finaliseitemndlstatement(); /* Run this after adding all the non-downloaded items */
int prepareuditemdlstatement(); /* Run this before updating any item to be downloaded */
int updateitemdownloaded(char *filename, unsigned long long itemid); /* Update item when it's been downloaded */
void finaliseuditemdlstatement(); /* Run this after updating all items with download information */
int prepareselitemstatement(); /* Run this before checking if the item exists */
int isitemnew(itempropnode *anitem, unsigned long long dbchannelid); /* Returns -1 on error, otherwise 1=true and 0=false */
void finaliseselitemstatement(); /* Run this after checking all items for newness */
rssenclosure *getlatestitemenc(unsigned long long chanid); /* Returns NULL on OoM or DB Error, or empty enc if none in DB */
char *getlatestitemofn(unsigned long long chanid); /* Returns NULL on OoM, blank str on no OFN */
unsigned long long getlatestitemid(unsigned long long chanid);
unsigned long long getchanidfromurl(char *chanurl);
static int callback_glio(void *NotUsed, int argc, char **argv, char **azColName);
static int callback_glie(void *anenc, int argc, char **argv, char **azColName);
static int callback_cuc(void *achan, int argc, char **argv, char **azColName);
static int callback_laiic(void *NotUsed, int argc, char **argv, char **azColName);
static int callback_lac(void *NotUsed, int argc, char **argv, char **azColName);
static int callback_lci(void *NotUsed, int argc, char **argv, char **azColName);
static int callback_csview(void *NotUsed, int argc, char **argv, char **azColName);
static int callback_gsd(void *NotUsed, int argc, char **argv, char **azColName);
static int callback_csset(void *NotUsed, int argc, char **argv, char **azColName);
static int callback_gcid(void *NotUsed, int argc, char **argv, char **azColName);
static int callback_giid(void *NotUsed, int argc, char **argv, char **azColName);
static int callback_ccu(void *NotUsed, int argc, char **argv, char **azColName);
void rssdatetoisodate(char *isodate, rssdate *adate);
static int callback_clo(void *NotUsed, int argc, char **argv, char **azColName);
int checklastopened();
int writetopassbackstr(char *astr);
int dbwriteerror(int errorcode);

#endif
