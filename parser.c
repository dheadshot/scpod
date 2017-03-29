#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "parser.h"


chanpropnode *cproot = NULL, *cpptr = NULL;
itempropnode *iproot = NULL, *ipptr = NULL;
catnode *catroot = NULL; *catptr = NULL;

unsigned long nextitemid = 1;
unsigned long nextchanid = 1;


int createcategory(enum categorytype ctype, unsigned long refid, char *domain, 
                   char *category)
{
  catnode *acat = (catnode *) malloc(sizeof(catnode));
  if (acat == NULL) return 0; /* OoM! */
  acat->next = NULL;
  acat->type = ctype;
  if (ctype == channel_cat) acat->id.chanid = refid;
  else if (ctype == item_cat) acat->id.itemid = refid;
  if (domain != NULL)
  {
    acat->domain = (char *) malloc(sizeof(char)*(1+strlen(domain)));
    if (acat->domain == NULL)
    {
      free(acat);
      return 0; /* OoM! */
    }
    strcpy(acat->domain,domain);
  }
  else acat->domain = NULL;
  if (category != NULL)
  {
    acat->category = (char *) malloc(sizeof(char)*(1+strlen(category)));
    if (acat->category == NULL)
    {
      if (acat->domain != NULL) free(acat->domain);
      free(acat);
      return 0; /* OoM! */
    }
    strcpy(acat->category, category);
  }
  else acat->category = NULL;
  
  if (catroot == NULL)
  {
    catroot = acat;
  }
  else
  {
    for (catptr = catroot; catptr->next != NULL; catptr = catptr->next) {}
    catptr->next = acat;
  }
  return 1;
}

chanpropnode *createchanpropnode(char *title, char *link, char *description)
/* Assign optional elements later */
{
  chanpropnode *acpn = (chanpropnode *) malloc(sizeof(chanpropnode));
  if (acpn == NULL) return NULL; /* OoM! */
  memset(acpn, 0, sizeof(chanpropnode));
  acpn->chanid = nextchanid;
  nextchanid++;
  acpn->next = NULL;
  if (title != NULL)
  {
    acpn->title = (char *) malloc(sizeof(char)*(1+strlen(title)));
    if (acpn->title == NULL)
    {
      free(acpn);
      return NULL; /* OoM! */
    }
    strcpy(acpn->title, title);
  }
  else acpn->title = NULL;
  if (link != NULL)
  {
    acpn->link = (char *) malloc(sizeof(char)*(1+strlen(link)));
    if (acpn->link == NULL)
    {
      if (acpn->title!=NULL) free(acpn->title);
      free(acpn);
      return NULL; /* OoM! */
    }
    strcpy(acpn->link, link);
  }
  else acpn->link = NULL;
  if (description != NULL)
  {
    acpn->description = (char *) malloc(sizeof(char)*(1+strlen(description)));
    if (acpn->description == NULL)
    {
      if (acpn->title!=NULL) free(acpn->title);
      if (acpn->link!=NULL) free(acpn->link);
      free(acpn);
      return NULL; /* OoM! */
    }
    strcpy(acpn->description, description);
  }
  else acpn->description = NULL;
  if (cproot == NULL)
  {
    cproot = acpn;
  }
  else
  {
    for (cpptr = cproot; cpptr->next != NULL; cpptr = cpptr->next) {}
    cpptr->next = acpn;
  }
  return acpn;
}



int parsersstoll(FILE *rf)
{
  
}
