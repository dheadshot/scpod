#ifndef __INC_MAIN_H__
#define __INC_MAIN_H__ 1

#include "parser.h"

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
