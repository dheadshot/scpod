#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "parser.h"


chanpropnode *cproot = NULL, *cpptr = NULL;
itempropnode *iproot = NULL, *ipptr = NULL;
catnode *catroot = NULL; *catptr = NULL;
elementpnode *eproot = NULL, *epptr = NULL;

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

itempropnode *createitempropnode(char *title, char *link, char *description)
/* Assign optional elements later */
{
  itempropnode *anipn = (itempropnode *) malloc(sizeof(itempropnode));
  if (anipn == NULL) return NULL; /* OoM! */
  memset(anipn, 0, sizeof(itempropnode));
  anipn->next = NULL;
  anipn->itemid = nextitemid;
  nextitemid++;
  if (title == NULL) anipn->title = NULL;
  else
  {
    anipn->title = (char *) malloc(sizeof(char) * (1+strlen(title)));
    if (anipn->title == NULL)
    {
      free(anipn);
      return NULL; /* OoM! */
    }
    strcpy(anipn->title,title);
  }
  if (link == NULL) anipn->link == NULL;
  else
  {
    anipn->link = (char *) malloc(sizeof(char)*(1+strlen(link)));
    if (anipn->link == NULL)
    {
      if (anipn->title != NULL) free(anipn->title);
      free(anipn);
      return NULL; /* OoM! */
    }
    strcpy(anipn->link, link);
  }
  if (description == NULL) anipn->description == NULL;
  else
  {
    anipn->description = (char *) malloc(sizeof(char)*(1+strlen(description)));
    if (anipn->description == NULL)
    {
      if (anipn->title != NULL) free(anipn->title);
      if (anipn->link != NULL) free(anipn->link);
      free(anipn);
      return NULL; /* OoM! */
    }
    strcpy(anipn->description, description);
  }
  if (iproot == NULL)
  {
    iproot = anipn;
  }
  else
  {
    for (ipptr = iproot; ipptr->next != NULL; ipptr = ipptr->next) {}
    ipptr->next = anipn;
  }
  return anipn;
}

elementpnode *createelementpnode(char *name, char *data)
{
  elementpnode *anepn = (elementpnode *) malloc(sizeof(elementpnode));
  if (anepn == NULL) return NULL /* OoM! */
  anepn->next = NULL;
  anepn->attlist = NULL;
  anepn->isattribute = 0;
  if (name == NULL) anepn->name = NULL;
  else
  {
    anepn->name = (char *) malloc(sizeof(char) * (strlen(name)+1));
    if (anepn->name == NULL)
    {
      free(anepn);
      return NULL; /* OoM! */
    }
    strcpy(anepn->name, name);
  }
  if (data == NULL) anepn->data = NULL;
  else
  {
    anepn->data = (char *) malloc(sizeof(char) * (strlen(data)+1));
    if (anepn->data == NULL)
    {
      if (anepn->name != NULL) free(anepn->name);
      free(anepn);
      return NULL; /* OoM! */
    }
    strcpy(anepn->data, data);
  }
  if (eproot == NULL) eproot = anepn;
  else
  {
    for (epptr = eproot; epptr->next != NULL; epptr = epptr->next) {}
    epptr->next = anepn;
  }
  return anepn;
}

elementpnode *addatttoepn(char *name, char *data, elementpnode *epn)
{
  elementpnode *anepn = (elementpnode *) malloc(sizeof(elementpnode));
  elementpnode *epnaptr;
  if (anepn == NULL) return NULL /* OoM! */
  anepn->next = NULL;
  anepn->attlist = NULL;
  anepn->isattribute = 1;
  if (name == NULL) anepn->name = NULL;
  else
  {
    anepn->name = (char *) malloc(sizeof(char) * (strlen(name)+1));
    if (anepn->name == NULL)
    {
      free(anepn);
      return NULL; /* OoM! */
    }
    strcpy(anepn->name, name);
  }
  if (data == NULL) anepn->data = NULL;
  else
  {
    anepn->data = (char *) malloc(sizeof(char) * (strlen(data)+1));
    if (anepn->data == NULL)
    {
      if (anepn->name != NULL) free(anepn->name);
      free(anepn);
      return NULL; /* OoM! */
    }
    strcpy(anepn->data, data);
  }
  if (epn->attlist == NULL) epn->attlist = anepn;
  else
  {
    for (epnaptr = epn->attlist; epnaptr->next != NULL; epnaptr = epnaptr->next) {}
    epnaptr->next = anepn;
  }
  return anepn;
}

void freeepn(elementpnode *epn)
{
  elementpnode *tepn = NULL;
  if (epn->name != NULL) free(epn->name);
  if (epn->data != NULL) free(epn->data);
  if (isattribute == 0)
  {
    epptr = epn->attlist;
    while (epptr != NULL)
    {
      tepn = epptr->next;
      freeepn(epptr);
      epptr = tepn;
    }
    tepn = NULL;
    for (epptr = eproot; epptr != NULL; epptr = epptr->next)
    {
      if (epptr == epn) break;
      tepn = epptr;
    }
    if (epptr == NULL) return;
    if (tepn == NULL) eproot = epptr->next;
    else tepn->next = epptr->next;
    free(epn);
  }
  else free(epn);
}

int parsersstoll(FILE *rf)
{
  char curelementname[256] = "", curattname[256] = "", *curelementdata, *curattdata;
  long ceni=0,cani=0,cedi=0,cadi=0;
  char *title, *link, *desc;
  char cchar = 0;
  int inatt = 0, inelename = 0, ineletag = 0, inctag = 0, inattname = 0, inattdata = 0;
  elementpnode *curepn = NULL;
  
  
  curelementdata = (char *) malloc(sizeof(char)*2048);
  if (curelementdata == NULL) return 0; /* OoM! */
  curattdata = (char *) malloc(sizeof(char)*1024);
  if (curattdata == NULL)
  {
    free(curelementdata);
    return 0; /* OoM! */
  }
  curelementdata[0] = 0;
  curattdata[0] = 0;
  
  while ((cchar = (char *) fgetc(rf)) != EOF)
  {
    if (cchar == '<')
    {
      inelename = 1;
      ineletag = 1;
    }
    else if (cchar == ' ')
    {
      if (inelename)
      {
        inelename = 0;
        curelementname[ceni] = 0;
        curepn = createelementpnode(curelementname,NULL);
        if (curepn == NULL)
        {
          /* Free everything and end */
        }
        inattname = 1;
        ceni = 0;
      }
      
    }
    else if (cchar == '=')
    {
      if (inattname && ineletag)
      {
        inattname = 0;
        inattdata = 1;
        curattname[cani] = 0;
        cani = 0;
      }
      else
      {
        /* Add to whatever... */
      }
    }
    else if (cchar == '/')
    {
      if (ineletag && inelename && ceni==0)
      {
        /* Closing tag */
        inctag = 1;
      }
      else
      {
        /* Add to whatever... */
      }
    }
    else if (cchar == '>')
    {
      if (inelename)
      {
        inelename = 0;
        curelementname[ceni] = 0;
        curepn = createelementpnode(curelementname,NULL);
        if (curepn == NULL)
        {
          /* Free everything and end */
        }
        
        ceni = 0;
      }
      ineletag = 0;
      if (inctag)
      {
      }
    }
    else
    {
      if (inelename)
      {
        curelementname[ceni] = cchar;
        ceni++;
        
      }
    }
    
  }
  if (ferror(rf))
  {
  }
}
