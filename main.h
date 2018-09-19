#ifndef __INC_MAIN_H__
#define __INC_MAIN_H__ 1

#include "parser.h"

typedef struct dlresult_struct
{
  unsigned long long itemid;
  char *fn;
  int downloaded;
} dlresult;


int docmd(char **cmdntsa, int offset);
/*
 * Working cmds: (~=still checking, ^=ostensibly works but needs testing)
 * ---------------
 * test parser
 * test download_parser
 * test database
 * test downloader
 * subscribe download none	^
 * subscribe download latest	~~? see notes in parser.h:parsenewchannel
 * subscribe download all	^
 * configure set (setting) = (value)
 * configure set (setting) (value)
 * configure view
 * configure view (setting)
 * list channels		~
 * list channel (chanid)	~
 * list items in channel (chanid)	~
 * list item (itemid) in channel (chanid)	~
 * download channel (chanid) none
 * download channel (chanid) latest		~
 * download channel (chanid) all		^ (Actually downloads all that have'nt yet been downloaded
 * download channel (chanid) item (itemid)	^
 * help
 * help test
 * help test parser
 * help test download_parser
 * help test database
 * help test downloader
 * help configure
 * help configure set
 * help configure set (setting)
 * help configure view
 * help configure view (setting)
 * help subscribe
 * help subscribe download
 * help subscribe download none
 * help subscribe download latest
 * help subscribe download all
 * help list
 * help list channels
 * help list channel
 * help list items
 * help list item
 * help help
 */

/*
 * TODO: Commands:
 * ---------------
 * update channel (chanid) download none
 * update channel (chanid) download latest
 * update channel (chanid) download new
 * update channel (chanid) download all
 * play channel (chanid) none
 * play channel (chanid) latest
 * play channel (chanid) all
 * play channel (chanid) item (itemid)
 * help update
 * help update channel
 * help update channel download
 * help update channel download none
 * help update channel download latest
 * help update channel download new
 * help update channel download all
 * help update channel download item
 * help download			(TODO: Need to do this section ASAP!)
 * help download channel
 * help download channel none
 * help download channel latest
 * help download channel all
 * help download channel item
 * help play
 * help play channel
 * help play channel none
 * help play channel latest
 * help play channel all
 * help play channel item
 */
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
void downloaddberr(int retcode);
int downloadchannelitemmain(ci_identifier *chanident, ci_identifier *itemident);
void printdownloadstatus(int retcode);
int downloadchannellatest(char *arg);
int downloadchannelall(char *arg);  /* Actually downloads not downloaded rather than everything! */
int downloadchannelitem(char *chanarg, char *itemarg);

#endif
