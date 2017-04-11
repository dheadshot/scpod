#ifndef __INC_PARSER_H__
#define __INC_PARSER_H__ 1

#define MAX_ELEN 255
#define MAX_ELED 4095
#define MAX_ATTN 1023
#define MAX_ATTD 4095

/* Remember to ignore unknown elements! */

typedef struct rssdate_struct {
  char *fulldate;
  /*-------------*/
  char dayname[10];
  int daynum;
  int month;
  long year;
  char tzone[10];
  int gmtoffseth;
  int gmtoffsetm;
  int hour;
  int minute;
  int second;
} rssdate;

typedef struct rssimage_struct {
  char *url;
  char *title;
  char *link;
  /* Optional: */
  long width;
  long height;
  char *description;
} rssimage;

typedef long * m1tna; /* Defines a minus-one terminated numerical array */
typedef char ** ntsa; /* Defines a NULL-terminated String Array. */

typedef struct chanpropnode_struct {
  unsigned long chanid;
  char *title;
  char *link;
  char *description;
  /* These are optional: */
  char *language_main;
  char *language_sub;
  char *copyright;
  char *managingeditor;
  char *webmaster;
  rssdate pubdate;
  rssdate lastbuilddate;
  char *generator;
  char *docs;
  /* Ignore "cloud" */
  long ttl;
  rssimage image;
  /* Ignore "rating" - PICS is obselete anyway... */
  /* Ignore "textinput" */
  m1tna skiphours;
  ntsa skipdays;
  
  unsigned long dbcid; /* Channel_ID Database field */
  
  struct chanpropnode_struct *next;
} chanpropnode;

typedef struct rssenclosure_struct {
  char *url;
  unsigned long length;
  char *type;
} rssenclosure;

typedef struct rssguid_struct {
  char *guid;
  int ispermalink;
} rssguid;

typedef struct rsssource_struct {
  char *url;
  char *name;
} rsssource;

typedef struct itempropnode_struct {
  unsigned long itemid;
  unsigned long chanid; /* ID of associated channel. */
  char *title;
  char *link;
  char *description;
  /* Optional: */
  char *author;
  char *comments;
  rssenclosure enclosure;
  rssguid guid;
  rssdate pubdate;
  rsssource source;
  /* Used by the BBC */
  rssimage image;
  
  unsigned long dbiid; /* Item_ID Database field */
  
  struct itempropnode_struct *next;
} itempropnode;

enum categorytype {channel_cat, item_cat, none_cat};
union chanitemid {
  unsigned long chanid;
  unsigned long itemid;
};

typedef struct categorynode_struct {
  enum categorytype type;
  union chanitemid id;
  char *domain;
  char *category;
  
  struct categorynode_struct *next;
} catnode;

typedef struct elementpnode_struct {
  char *name;
  char *data;
  int isattribute; /* 0 for element, 1 for attribute */
  struct elementpnode_struct *attlist;
  
  struct elementpnode_struct *next;
} elementpnode;


int createcategory(enum categorytype ctype, unsigned long refid, char *domain, 
                   char *category);
void freeacatn(catnode *acatn);
void destroycategories();
chanpropnode *createchanpropnode(char *title, char *link, char *description); 
/* Assign optional elements later */
void freeacpn(chanpropnode *acpn);
void destroychannels();
itempropnode *createitempropnode(char *title, char *link, char *description, 
                                 unsigned long chanid);
/* Assign optional elements later */
void freeanipn(itempropnode *anipn);
void destroyitems();
elementpnode *createelementpnode(char *name, char *data);
elementpnode *addatttoepn(char *name, char *data, elementpnode *epn);
void freeepn(elementpnode *epn);

int parsersstoll(FILE *rf);
/* Returns: 1=worked, 0=File reading error, -1=Memory error, -2=Not RSS */
void listdata();

#endif
