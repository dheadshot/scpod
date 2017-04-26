#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "sfuncs.h"
#include "dbexchange.h"
#include "extprgfuncs.h"

#include "parser.h"


chanpropnode *cproot = NULL, *cpptr = NULL;
itempropnode *iproot = NULL, *ipptr = NULL;
catnode *catroot = NULL, *catptr = NULL;
elementpnode *eproot = NULL, *epptr = NULL;

unsigned long nextitemid = 1;
unsigned long nextchanid = 1;

char *rssversion = NULL;


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

void freeacatn(catnode *acatn)
{
  if (acatn == NULL) return;
  if (acatn->domain != NULL) free(acatn->domain);
  if (acatn->category != NULL) free(acatn->category);
  free(acatn);
}

void destroycategories()
{
  catnode *tcatn = NULL;
  catptr = catroot;
  while (catptr != NULL)
  {
    tcatn = catptr->next;
    freeacatn(catptr);
    catptr = tcatn;
  }
  catroot = NULL;
  catptr = NULL;
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

void freeacpn(chanpropnode *acpn)
{
  if (acpn == NULL) return;
  if (acpn->title != NULL) free(acpn->title);
  if (acpn->link != NULL) free(acpn->link);
  if (acpn->description != NULL) free(acpn->description);
  if (acpn->language_main != NULL) free(acpn->language_main);
  if (acpn->language_sub != NULL) free(acpn->language_sub);
  if (acpn->copyright != NULL) free(acpn->copyright);
  if (acpn->managingeditor != NULL) free(acpn->managingeditor);
  if (acpn->webmaster != NULL) free(acpn->webmaster);
  if (acpn->generator != NULL) free(acpn->generator);
  if (acpn->docs != NULL) free(acpn->docs);
  if (acpn->pubdate.fulldate != NULL) free(acpn->pubdate.fulldate);
  if (acpn->lastbuilddate.fulldate != NULL) free(acpn->lastbuilddate.fulldate);
  if (acpn->image.url != NULL) free(acpn->image.url);
  if (acpn->image.title != NULL) free(acpn->image.title);
  if (acpn->image.link != NULL) free(acpn->image.link);
  if (acpn->image.description != NULL) free(acpn->image.description);
  if (acpn->skiphours != NULL) free(acpn->skiphours);
  if (acpn->skipdays != NULL) freentsa(acpn->skipdays);
  free(acpn);
}

void destroychannels()
{
  chanpropnode *tcpn = NULL;
  cpptr = cproot;
  while (cpptr != NULL)
  {
    tcpn = cpptr->next;
    freeacpn(cpptr);
    cpptr = tcpn;
  }
  cproot = NULL;
  cpptr = NULL;
}

itempropnode *createitempropnode(char *title, char *link, char *description, 
                                 unsigned long chanid)
/* Assign optional elements later */
{
  itempropnode *anipn = (itempropnode *) malloc(sizeof(itempropnode));
  if (anipn == NULL) return NULL; /* OoM! */
  memset(anipn, 0, sizeof(itempropnode));
  anipn->next = NULL;
  anipn->itemid = nextitemid;
  anipn->chanid = chanid;
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

void freeanipn(itempropnode *anipn)
{
  if (anipn == NULL) return;
  if (anipn->title != NULL) free(anipn->title);
  if (anipn->link != NULL) free(anipn->link);
  if (anipn->description != NULL) free(anipn->description);
  if (anipn->author != NULL) free(anipn->author);
  if (anipn->comments != NULL) free(anipn->comments);
  if (anipn->enclosure.url != NULL) free(anipn->enclosure.url);
  if (anipn->enclosure.type != NULL) free(anipn->enclosure.type);
  if (anipn->guid.guid != NULL) free(anipn->guid.guid);
  if (anipn->source.url != NULL) free(anipn->source.url);
  if (anipn->source.name != NULL) free(anipn->source.name);
  if (anipn->image.url != NULL) free(anipn->image.url);
  if (anipn->image.title != NULL) free(anipn->image.title);
  if (anipn->image.link != NULL) free(anipn->image.link);
  if (anipn->image.description != NULL) free(anipn->image.description);
  if (anipn->pubdate.fulldate != NULL) free(anipn->pubdate.fulldate);
  free(anipn);
}

void destroyitems()
{
  itempropnode *tipn = NULL;
  ipptr = iproot;
  while (ipptr != NULL)
  {
    tipn = ipptr->next;
    freeanipn(ipptr);
    ipptr = tipn;
  }
  iproot = NULL;
  ipptr = NULL;
}

elementpnode *createelementpnode(char *name, char *data)
{
  elementpnode *anepn = (elementpnode *) malloc(sizeof(elementpnode));
  if (anepn == NULL) return NULL; /* OoM! */
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
  if (epn == NULL) return NULL;
  elementpnode *anepn = (elementpnode *) malloc(sizeof(elementpnode));
  elementpnode *epnaptr;
  if (anepn == NULL) return NULL; /* OoM! */
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
  if (epn == NULL) return;
  if (epn->name != NULL) free(epn->name);
  if (epn->data != NULL) free(epn->data);
  if (epn->isattribute == 0)
  {
    epptr = epn->attlist;
    while (epptr != NULL)
    {
      tepn = epptr->next;
      freeepn(epptr);
      epptr = tepn;
    }
    epn->attlist = NULL;
    tepn = NULL;
    for (epptr = eproot; epptr != NULL; epptr = epptr->next)
    {
      if (epptr == epn) break;
      tepn = epptr;
    }
    if (epptr == NULL)
    {
      free(epn);
      return;
    }
    if (tepn == NULL) eproot = epptr->next;
    else tepn->next = epptr->next;
    free(epn);
  }
  else free(epn);
}

int parsersstoll(FILE *rf)
{
  /* Returns: 1=worked, 0=File reading error, -1=Memory error, -2=Not RSS */
  char curelementname[MAX_ELEN+1] = "", curattname[MAX_ATTN+1] = "", *curelementdata, *curattdata;
  long ceni=0,cani=0,cedi=0,cadi=0;
  char *title = NULL, *link = NULL, *desc = NULL;
  char cchar = 0;
  int inatt = 0, inelename = 0, ineletag = 0, inctag = 0, inattname = 0, 
      inattdata = 0, issingletag = 0, initem = 0, inchan = 0, inimage = 0, 
      intxtinp = 0, indq = 0;
  elementpnode *curepn = NULL;
  itempropnode *curitem = NULL;
  chanpropnode *curchan = NULL;
  
  
  curelementdata = (char *) malloc(sizeof(char)*(MAX_ELED+1));
  if (curelementdata == NULL) return -1; /* OoM! */
  curattdata = (char *) malloc(sizeof(char)*(MAX_ATTD+1));
  if (curattdata == NULL)
  {
    free(curelementdata);
    return -1; /* OoM! */
  }
  curelementdata[0] = 0;
  curattdata[0] = 0;
  
  /* Hopefully, this won't fall down on XML comments... */
  
#ifdef DEBUG
  	unsigned long epndepth = 0; /* Not sure this stays accurate all the way through... */
#endif
  
  while ((cchar = (char) fgetc(rf)) != EOF)
  {
    if (cchar == '<')
    {
      if ((!ineletag))
      {
        inelename = 1;
        ineletag = 1;
        curelementdata[cedi] = 0;
        cedi = 0;
        indq = 0; /* Force indq to be off, as quotes outside the tag don't matter! */
      }
    }
    else if (cchar == '?' || cchar == '!')
    {
      if (inelename)
      {
        issingletag = 1;
      }
      else
      {
        /* Add to whatever... */
        if (ineletag && inelename && ceni<MAX_ELEN)
        { /* Shouldn't occur */
          curelementname[ceni] = cchar;
          ceni++;
          curelementname[ceni] = 0;
          if (issingletag && (endwith_(curelementname,"[CDATA[") || endwith_(curelementname,"![CDATA[")))
          {
            issingletag = 0;
            inelename = 0;
            ineletag = 0;
            ceni = 0;
            cedi = strlen(curelementdata);
          }
        }
        else if (ineletag && inattname && cani<MAX_ATTN)
        {
          curattname[cani] = cchar;
          cani++;
        }
        else if (ineletag && inattdata && cadi<MAX_ATTD)
        {
          curattdata[cadi] = cchar;
          cadi++;
        }
        else if ((!ineletag) && curepn != NULL && cedi<MAX_ELED)
        {
          curelementdata[cedi] = cchar;
          cedi++;
          curelementdata[cedi] = 0;
          if (endwith_(curelementdata,"]]>"))
          {
            cedi -= (3*sizeof(char));
            curelementdata[cedi] = 0;
          }
        }
        
      }
    }
    else if (cchar == '\r')
    {
      /* Ignore these */
    }
    else if (cchar == ' ' || cchar == '\t' || cchar == '\n')
    {
      if (ineletag && inelename && !inctag && ceni>0)
      {
        inelename = 0;
        curelementname[ceni] = 0;
#ifdef DEBUG
        	printf("Found element \"%s\"",curelementname);
#endif
        curepn = createelementpnode(curelementname,NULL);
#ifdef DEBUG
        	epndepth++;
        	printf("[%lu]\n",epndepth);
#endif
        if (curepn == NULL)
        {
          /* Free everything and end */
          goto OOMEMERROR;
        }
        inattname = 1;
        ceni = 0;
        if (streq_i(curepn->name,"item")) initem = 1;
        else if (streq_i(curepn->name,"channel")) inchan = 1;
        else if (streq_i(curepn->name,"image")) inimage = 1;
        else if (streq_i(curepn->name,"textinput")) intxtinp = 1;
      }
      else if (ineletag && inattname)
      {
        /* Do Nothing. */
      }
      else if (ineletag && inattdata)
      {
        if (indq)
        {
          /* Add to whatever... */
          if (ineletag && inelename && ceni<MAX_ELEN)
          {
            curelementname[ceni] = cchar;
            ceni++;
            curelementname[ceni] = 0;
            if (issingletag && (endwith_(curelementname,"[CDATA[") || endwith_(curelementname,"![CDATA[")))
            {
              issingletag = 0;
              inelename = 0;
              ineletag = 0;
              ceni = 0;
              cedi = strlen(curelementdata);
            }
          }
          else if (ineletag && inattname && cani<MAX_ATTN)
          {
            curattname[cani] = cchar;
            cani++;
          }
          else if (ineletag && inattdata && cadi<MAX_ATTD)
          {
            curattdata[cadi] = cchar;
            cadi++;
          }
          else if ((!ineletag) && curepn != NULL && cedi<MAX_ELED)
          {
            curelementdata[cedi] = cchar;
            cedi++;
            curelementdata[cedi] = 0;
            if (endwith_(curelementdata,"]]>"))
            {
              cedi -= (3*sizeof(char));
              curelementdata[cedi] = 0;
            }
          }
        }
        else
        {
          inattdata = 0;
          inattname = 1;
          curattdata[cadi] = 0;
          cadi = 0;
          if (addatttoepn(curattname, curattdata, curepn) == NULL)
          {
            /* Free everything and end! */
            goto OOMEMERROR;
          }
#ifdef DEBUG
          	printf("Attribute [of '%s'] '%s' = '%s'\n",curepn->name,curattname, curattdata);
#endif
        }
      }
      else
      {
        /* Add to whatever... */
        if (ineletag && inelename && !inctag && ceni>0 && ceni<MAX_ELEN) /* Warning: non-standard! */
        {
          curelementname[ceni] = cchar;
          ceni++;
          curelementname[ceni] = 0;
          if (issingletag && (endwith_(curelementname,"[CDATA[") || endwith_(curelementname,"![CDATA[")))
          {
            issingletag = 0;
            inelename = 0;
            ineletag = 0;
            ceni = 0;
            cedi = strlen(curelementdata);
          }
        }
        else if (ineletag && inattname && cani<MAX_ATTN)
        {
          curattname[cani] = cchar;
          cani++;
        }
        else if (ineletag && inattdata && cadi<MAX_ATTD)
        {
          curattdata[cadi] = cchar;
          cadi++;
        }
        else if ((!ineletag) && curepn != NULL && cedi<MAX_ELED)
        {
          curelementdata[cedi] = cchar;
          cedi++;
          curelementdata[cedi] = 0;
          if (endwith_(curelementdata,"]]>"))
          {
            cedi -= (3*sizeof(char));
            curelementdata[cedi] = 0;
          }
        }
      }
    }
    else if (cchar == '"')
    {
      indq = 1 - indq;
      /* Add to whatever... */
      if (ineletag && inelename && ceni<MAX_ELEN)
      {
        curelementname[ceni] = cchar;
        ceni++;
        curelementname[ceni] = 0;
        if (issingletag && (endwith_(curelementname,"[CDATA[") || endwith_(curelementname,"![CDATA[")))
        {
          issingletag = 0;
          inelename = 0;
          ineletag = 0;
          ceni = 0;
          cedi = strlen(curelementdata);
        }
      }
      else if (ineletag && inattname && cani<MAX_ATTN)
      {
        curattname[cani] = cchar;
        cani++;
      }
      else if (ineletag && inattdata && cadi<MAX_ATTD)
      {
        curattdata[cadi] = cchar;
        cadi++;
      }
      else if ((!ineletag) && curepn != NULL && cedi<MAX_ELED)
      {
        curelementdata[cedi] = cchar;
        cedi++;
        curelementdata[cedi] = 0;
        if (endwith_(curelementdata,"]]>"))
        {
          cedi -= (3*sizeof(char));
          curelementdata[cedi] = 0;
        }
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
#ifdef DEBUG
        /*	printf("(Att='%s')\t",curattname);*/
#endif
      }
      else
      {
        /* Add to whatever... */
        if (ineletag && inelename && ceni<MAX_ELEN)
        {
          curelementname[ceni] = cchar;
          ceni++;
          curelementname[ceni] = 0;
          if (issingletag && (endwith_(curelementname,"[CDATA[") || endwith_(curelementname,"![CDATA[")))
          {
            issingletag = 0;
            inelename = 0;
            ineletag = 0;
            ceni = 0;
            cedi = strlen(curelementdata);
          }
        }
        else if (ineletag && inattname && cani<MAX_ATTN) /* Shouldn't occur */
        {
          curattname[cani] = cchar;
          cani++;
        }
        else if (ineletag && inattdata && cadi<MAX_ATTD)
        {
          curattdata[cadi] = cchar;
          cadi++;
        }
        else if ((!ineletag) && curepn != NULL && cedi<MAX_ELED)
        {
          curelementdata[cedi] = cchar;
          cedi++;
          curelementdata[cedi] = 0;
          if (endwith_(curelementdata,"]]>"))
          {
            cedi -= (3*sizeof(char));
            curelementdata[cedi] = 0;
          }
        }
        
      }
    }
    else if (cchar == '/')
    {
      if (ineletag && inelename && ceni==0)
      {
        /* Closing tag */
        inctag = 1;
      }
      else if (ineletag && inattname)
      {
        issingletag = 1;
      }
      else if (ineletag != 0 && inattdata != 0 && indq == 0)
        issingletag = 1;
      else
      {
        /* Add to whatever... */
        if (ineletag && inelename && ceni<MAX_ELEN)
        {
          curelementname[ceni] = cchar;
          ceni++;
          curelementname[ceni] = 0;
          if (issingletag && (endwith_(curelementname,"[CDATA[") || endwith_(curelementname,"![CDATA[")))
          {
            issingletag = 0;
            inelename = 0;
            ineletag = 0;
            ceni = 0;
            cedi = strlen(curelementdata);
          }
        }
        else if (ineletag && inattname && cani<MAX_ATTN)
        {
          curattname[cani] = cchar;
          cani++;
        }
        else if (ineletag && inattdata && cadi<MAX_ATTD)
        {
          curattdata[cadi] = cchar;
          cadi++;
        }
        else if (!ineletag && curepn != NULL && cedi<MAX_ELED)
        {
          curelementdata[cedi] = cchar;
          cedi++;
          curelementdata[cedi] = 0;
          if (endwith_(curelementdata,"]]>"))
          {
            cedi -= (3*sizeof(char));
            curelementdata[cedi] = 0;
          }
        }
        
      }
    }
    else if (cchar == '>' && ineletag == 0)
    {
      /* Add to whatever... */
      if (ineletag && inelename && ceni<MAX_ELEN)
      {
        curelementname[ceni] = cchar;
        ceni++;
        curelementname[ceni] = 0;
        if (issingletag && (endwith_(curelementname,"[CDATA[") || endwith_(curelementname,"![CDATA[")))
        {
          issingletag = 0;
          inelename = 0;
          ineletag = 0;
          ceni = 0;
          cedi = strlen(curelementdata);
        }
      }
      else if (ineletag && inattname && cani<MAX_ATTN)
      {
        curattname[cani] = cchar;
        cani++;
      }
      else if (ineletag && inattdata && cadi<MAX_ATTD)
      {
        curattdata[cadi] = cchar;
        cadi++;
      }
      else if (!ineletag && curepn != NULL && cedi<MAX_ELED)
      {
        curelementdata[cedi] = cchar;
        cedi++;
        curelementdata[cedi] = 0;
        if (endwith_(curelementdata,"]]>"))
        {
#ifdef DEBUG
            printf("Fixing ']]>'\t'%s'\t",curelementdata);
#endif
          cedi -= (3*sizeof(char));
          curelementdata[cedi] = 0;
        }
      }
    }
    else if (cchar == '>' && ineletag != 0)
    {
      if (inelename)
      {
        inelename = 0;
        curelementname[ceni] = 0;
        if (!inctag)
        {
          curepn = createelementpnode(curelementname,NULL);
#ifdef DEBUG
          	epndepth++;
        	printf("[%lu]",epndepth);
#endif
          if (curepn == NULL)
          {
            /* Free everything and end */
            goto OOMEMERROR;
          }
#ifdef DEBUG
          	printf("Found element \"%s\"\n",curelementname);
#endif
        }
        
        ceni = 0;
        if (streq_i(curepn->name,"item")) initem = 1;
        else if (streq_i(curepn->name,"channel")) inchan = 1;
        else if (streq_i(curepn->name,"image")) inimage = 1;
        else if (streq_i(curepn->name,"textinput")) intxtinp = 1;
        ineletag = 0;
      }
      else if (inattdata && !indq)
      {
        inattdata = 0;
        inattname = 0;
        curattdata[cadi] = 0;
        cadi = 0;
        if (addatttoepn(curattname, curattdata, curepn) == NULL)
        {
          /* Free everything and end! */
          goto OOMEMERROR;
        }
#ifdef DEBUG
          	printf("Attribute [of '%s'] '%s' = '%s'\n",curepn->name,curattname, curattdata);
        	/*printf("Attribute '%s' = '%s'\n", curattname, curattdata);*/
#endif
      }
      else if (inattname && cani>0)
      {
        inattname = 0;
        curattname[cani] = 0;
        cani = 0;
#ifdef DEBUG
        	printf("Attribute '%s' specified!\n", curattname);
#endif
      }
      
      if (inattdata != 0 && indq != 0 && inelename == 0)
      {
        /* Add to whatever... (Non-Standard) */
        if (inattname && cani<MAX_ATTN)
        {
          curattname[cani] = cchar;
          cani++;
        }
        else if (inattdata && cadi<MAX_ATTD)
        {
          curattdata[cadi] = cchar;
          cadi++;
        }
        else if ((!ineletag) && curepn != NULL && cedi<MAX_ELED)
        {
          curelementdata[cedi] = cchar;
          cedi++;
          curelementdata[cedi] = 0;
          if (endwith_(curelementdata,"]]>"))
          {
#ifdef DEBUG
            	printf("Fixing ']]>'");
#endif
            cedi -= (3*sizeof(char));
            curelementdata[cedi] = 0;
          }
        }
#ifdef DEBUG
        	curattdata[cadi] = 0;
        	printf("LT in attdata: %s\n", curattdata);
#endif
      }
      else
      {
        ineletag = 0;
        inattdata = 0;
        inattname = 0;
      }
      
      if (inctag)
      {
        if (cedi>0)
        {
          curelementdata[cedi] = 0;
          cedi = 0;
        }
        if (curepn->data == NULL)
        {
          curepn->data = (char *) malloc(sizeof(char)*(1+strlen(curelementdata)));
          if (curepn->data == NULL)
          {
            /* Free everything and end! */
            goto OOMEMERROR;
          }
          strtrimws(curepn->data, curelementdata); /* Copy and trim data */
#ifdef DEBUG
        	printf("Element data: \"%s\"\n",curepn->data);
#endif
        }
        else
        {
#ifdef DEBUG
          	printf("AMA\n");
#endif
          char *cepntstr = (char *) malloc(sizeof(char)*(1+strlen(curelementdata)+strlen(curepn->data)));
          if (cepntstr == NULL)
          {
            /* Free everything and end! */
            goto OOMEMERROR;
          }
          strcpy(cepntstr, curepn->data);
          strcat(cepntstr, curelementdata);
          free(curepn->data);
          curepn->data = cepntstr;
          cepntstr = NULL;
          if (strtrimws1(curepn->data) == 0)
          {
            /* Free everything and end! */
            goto OOMEMERROR;
          }
#ifdef DEBUG
        	printf("Amalgumated Element data: \"%s\"\n",curepn->data);
#endif
        }
        if (endwith_(curepn->data,"]]>"))
        {
          curepn->data[strlen(curepn->data)-3] = 0;
        }
      }
      if ((inctag || issingletag) && !indq)
      {
#ifdef DEBUG
        	printf("End of element \"%s\".\n",curepn->name);
        	if (issingletag) printf("STAG: '%s'\n",curepn->name);
#endif
        issingletag = 0;
        inctag = 0;
        /*ineletag = 0;
        inattdata = 0;
        inattname = 0;*/
        /*...*/
        if (startsame_i(curepn->name, "[CDATA[") || startsame_i(curepn->name,"![CDATA["))
        {
#ifdef DEBUG
          	printf("\tUnfiltered CDATA!\n");
#endif
          /* Find above epn */
          for (epptr = eproot; epptr != NULL; epptr = epptr->next)
          {
            if (epptr->next == curepn) break;
          }
#ifdef DEBUG
            	if (epptr != NULL) printf("CDATA: above epn is %s\n",epptr->name);
#endif
          if (epptr != NULL)
          {
            if (epptr->data != NULL)
            {
              char *cdattstr = (char *) malloc(sizeof(char)*(1+strlen(epptr->data)+strlen(curepn->name)));
              if (cdattstr == NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
              strcpy(cdattstr, epptr->data);
              strcat(cdattstr, curepn->name+(strlen("[CDATA[")*sizeof(char)));
              if (cdattstr[strlen(cdattstr)-1] == '>') cdattstr[strlen(cdattstr)-1] = 0;
              if (cdattstr[strlen(cdattstr)-1] == '[') cdattstr[strlen(cdattstr)-1] = 0;
              if (cdattstr[strlen(cdattstr)-1] == '[') cdattstr[strlen(cdattstr)-1] = 0;
              free(epptr->data);
              epptr->data = cdattstr;
              cdattstr = NULL;
            }
            else
            {
              epptr->data = (char *) malloc(sizeof(char)*(1+strlen(curepn->name)));
              if (epptr->data == NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
              strcpy(epptr->data, curepn->name+(strlen("[CDATA[")*sizeof(char)));
              if (epptr->data[strlen(epptr->data)-1] == '>') epptr->data[strlen(epptr->data)-1] = 0;
              if (epptr->data[strlen(epptr->data)-1] == '[') epptr->data[strlen(epptr->data)-1] = 0;
              if (epptr->data[strlen(epptr->data)-1] == '[') epptr->data[strlen(epptr->data)-1] = 0;
            }
            
          }
        }
        else if (streq_i(curepn->name, "rss"))
        {
#ifdef DEBUG
          	printf("\tRSS\n");
#endif
          /* Ignore the overarching element (though maybe do something with version?) */
          if (rssversion == NULL)
          {
            for (epptr = curepn->attlist; epptr != NULL; epptr = epptr->next)
            {
              if (streq_i(epptr->name,"version"))
              {
                rssversion = (char *) malloc(sizeof(char)*(1+strlen(epptr->data)));
                if (rssversion == NULL)
                {
                  /* Free everything and end. */
                  goto OOMEMERROR;
                }
                if (epptr->data[0] == '"' && epptr->data[strlen(epptr->data)-1] == '"')
                {
                  epptr->data[strlen(epptr->data)-1] = 0;
                  strcpy(rssversion, epptr->data+sizeof(char));
                }
                else strcpy(rssversion,epptr->data);
                break;
              }
            }
            
          }
        }
        else if (streq_i(curepn->name, "item"))
        {
          /*...*/
#ifdef DEBUG
          	printf("\tITEM\n");
#endif
          initem = 0;
          if (curitem == NULL)
          {
            if (curchan != NULL)
              curitem = createitempropnode(title,link,desc,curchan->chanid);
            else
              curitem = createitempropnode(title,link,desc,nextchanid);
            if (curitem == NULL)
            {
              /* Free everything and end. */
              goto OOMEMERROR;
            }
            if (title != NULL) free(title);
            if (link != NULL) free(link);
            if (desc != NULL) free(desc);
            title = NULL;
            link = NULL;
            desc = NULL;
          }
          if (curitem->title == NULL && title != NULL)
          {
            curitem->title = title; /* Shouldn't really do it this way, but it saves memory... */
            title = NULL;
          }
          if (curitem->link == NULL && link != NULL)
          {
            curitem->link = link; /* Shouldn't really do it this way, but it saves memory... */
            link = NULL;
          }
          if (curitem->description == NULL && desc != NULL)
          {
            curitem->description = desc; /* Shouldn't really do it this way, but it saves memory... */
            desc = NULL;
          }
          
          curitem = NULL;
        }
        else if (streq_i(curepn->name, "channel"))
        {
#ifdef DEBUG
          	printf("\tCHANNEL\n");
#endif
          /*...*/
          inchan = 0;
          if (curchan == NULL)
          {
            curchan = createchanpropnode(title,link,desc);
            if (curchan == NULL)
            {
              /* Free everything and end. */
              goto OOMEMERROR;
            }
            if (title != NULL) free(title);
            if (link != NULL) free(link);
            if (desc != NULL) free(desc);
            title = NULL;
            link = NULL;
            desc = NULL;
          }
          if (curchan->title == NULL && title != NULL)
          {
            curchan->title = title; /* Shouldn't really do it this way, but it saves memory... */
            title = NULL;
          }
          if (curchan->link == NULL && link != NULL)
          {
            curchan->link = link; /* Shouldn't really do it this way, but it saves memory... */
            link = NULL;
          }
          if (curchan->description == NULL && desc != NULL)
          {
            curchan->description = desc; /* Shouldn't really do it this way, but it saves memory... */
            desc = NULL;
          }
          curchan = NULL;
        }
        else if (streq_i(curepn->name, "title") != 0)
        {
#ifdef DEBUG
        	printf("\tTITLE\n");
#endif
          if (title == NULL)
          {
            title = (char *) malloc(sizeof(char)*(1+strlen(curepn->data)));
            if (title == NULL)
            {
              /* Free everything and end. */
              goto OOMEMERROR;
            }
            strcpy(title,curepn->data);
            if (initem && !inimage && !intxtinp)
            {
              if (title!=NULL && link!=NULL && desc!=NULL && curitem == NULL)
              {
                if (curchan == NULL)
                  curitem = createitempropnode(title, link, desc, nextchanid);
                else
                  curitem = createitempropnode(title, link, desc, curchan->chanid);
                if (curitem == NULL)
                {
                  /* Free everything and end. */
                  goto OOMEMERROR;
                }
                free(title);
                title = NULL;
                free(link);
                link = NULL;
                free(desc);
                desc = NULL;
              }
              else if (curitem != NULL && curitem->title == NULL)
              {
                curitem->title = (char *) malloc(sizeof(char)*(1+strlen(title)));
                if (curitem->title == NULL)
                {
                  /* Free everything and end. */
                  goto OOMEMERROR;
                }
                strcpy(curitem->title, title);
                free(title);
                title = NULL;
              }
            }
            else if (inchan && !inimage && !intxtinp)
            {
              if (title!=NULL && link!=NULL && desc!=NULL && curchan == NULL)
              {
                curchan = createchanpropnode(title, link, desc);
                if (curchan == NULL)
                {
                  /* Free everything and end. */
                  goto OOMEMERROR;
                }
                free(title);
                title = NULL;
                free(link);
                link = NULL;
                free(desc);
                desc = NULL;
              }
              else if (curchan != NULL && curchan->title == NULL)
              {
                curchan->title = (char *) malloc(sizeof(char)*(1+strlen(title)));
                if (curchan->title == NULL)
                {
                  /* Free everything and end. */
                  goto OOMEMERROR;
                }
                strcpy(curchan->title, title);
                free(title);
                title = NULL;
              }
            }
            else if (inimage && !intxtinp)
            {
              /* Find above epn */
              for (epptr = eproot; epptr != NULL; epptr = epptr->next)
              {
                if (epptr->next == curepn) break;
              }
#ifdef DEBUG
            	if (epptr != NULL) printf("image title: above epn is %s\n",epptr->name);
#endif
              if (epptr != NULL && streq_i(epptr->name,"image"))
              {
                /* Assign data as attribute */
                if (addatttoepn(curepn->name,curepn->data,epptr)==NULL)
                {
                  /* Free everything and end. */
                  goto OOMEMERROR;
                }
              }
              free(title);
              title = NULL;
            }
            else if (intxtinp && !inimage)
            {
              /* Find above epn */
              for (epptr = eproot; epptr != NULL; epptr = epptr->next)
              {
                if (epptr->next == curepn) break;
              }
#ifdef DEBUG
            	if (epptr != NULL) printf("textinput title: above epn is %s\n",epptr->name);
#endif
              if (epptr != NULL && streq_i(epptr->name,"textinput"))
              {
                /* Assign data as attribute */
                if (addatttoepn(curepn->name,curepn->data,epptr)==NULL)
                {
                  /* Free everything and end. */
                  goto OOMEMERROR;
                }
              }
              free(title);
              title = NULL;
            }
          }
        }
        else if (streq_i(curepn->name, "link"))
        {
#ifdef DEBUG
        	printf("\tLINK\n");
#endif
          if (link == NULL)
          {
            link = (char *) malloc(sizeof(char)*(1+strlen(curepn->data)));
            if (link == NULL)
            {
              /* Free everything and end. */
              goto OOMEMERROR;
            }
            strcpy(link,curepn->data);
            if (initem && !inimage && !intxtinp)
            {
              if (title!=NULL && link!=NULL && desc!=NULL && curitem == NULL)
              {
                if (curchan == NULL)
                  curitem = createitempropnode(title, link, desc, nextchanid);
                else
                  curitem = createitempropnode(title, link, desc, curchan->chanid);
                if (curitem == NULL)
                {
                  /* Free everything and end. */
                  goto OOMEMERROR;
                }
                free(title);
                title = NULL;
                free(link);
                link = NULL;
                free(desc);
                desc = NULL;
              }
              else if (curitem != NULL && curitem->link == NULL)
              {
                curitem->link = (char *) malloc(sizeof(char)*(1+strlen(link)));
                if (curitem->link == NULL)
                {
                  /* Free everything and end. */
                  goto OOMEMERROR;
                }
                strcpy(curitem->link, link);
                free(link);
                link = NULL;
              }
            }
            else if (inchan && !inimage && !intxtinp)
            {
              if (title!=NULL && link!=NULL && desc!=NULL && curchan == NULL)
              {
                curchan = createchanpropnode(title, link, desc);
                if (curchan == NULL)
                {
                  /* Free everything and end. */
                  goto OOMEMERROR;
                  
                }
                free(title);
                title = NULL;
                free(link);
                link = NULL;
                free(desc);
                desc = NULL;
              }
              else if (curchan != NULL && curchan->link == NULL)
              {
                curchan->link = (char *) malloc(sizeof(char)*(1+strlen(link)));
                if (curchan->link == NULL)
                {
                  /* Free everything and end. */
                  goto OOMEMERROR;
                }
                strcpy(curchan->link, link);
                free(link);
                link = NULL;
              }
            }
            else if (inimage && !intxtinp)
            {
              /* Find above epn */
              for (epptr = eproot; epptr != NULL; epptr = epptr->next)
              {
                if (epptr->next == curepn) break;
              }
#ifdef DEBUG
            	if (epptr != NULL) printf("image link: above epn is %s\n",epptr->name);
#endif
              if (epptr != NULL && streq_i(epptr->name,"image"))
              {
                /* Assign data as attribute */
                if (addatttoepn(curepn->name,curepn->data,epptr)==NULL)
                {
                  /* Free everything and end. */
                  goto OOMEMERROR;
                }
              }
              free(link);
              link = NULL;
            }
            else if (intxtinp && !inimage)
            {
              /* Find above epn */
              for (epptr = eproot; epptr != NULL; epptr = epptr->next)
              {
                if (epptr->next == curepn) break;
              }
#ifdef DEBUG
            	if (epptr != NULL) printf("textinput link: above epn is %s\n",epptr->name);
#endif
              if (epptr != NULL && streq_i(epptr->name,"textinput"))
              {
                /* Assign data as attribute */
                if (addatttoepn(curepn->name,curepn->data,epptr)==NULL)
                {
                  /* Free everything and end. */
                  goto OOMEMERROR;
                }
              }
              free(link);
              link = NULL;
            }
          }
        }
        else if (streq_i(curepn->name, "description"))
        {
          if (desc == NULL)
          {
            desc = (char *) malloc(sizeof(char)*(1+strlen(curepn->data)));
            if (desc == NULL)
            {
              /* Free everything and end. */
              goto OOMEMERROR;
            }
            strcpy(desc,curepn->data);
            if (initem && !inimage && !intxtinp)
            {
              if (title!=NULL && link!=NULL && desc!=NULL && curitem == NULL)
              {
                if (curchan == NULL)
                  curitem = createitempropnode(title, link, desc, nextchanid);
                else
                  curitem = createitempropnode(title, link, desc, curchan->chanid);
                if (curitem == NULL)
                {
                  /* Free everything and end. */
                  goto OOMEMERROR;
                }
                free(title);
                title = NULL;
                free(link);
                link = NULL;
                free(desc);
                desc = NULL;
              }
              else if (curitem != NULL && curitem->description == NULL)
              {
                curitem->description = (char *) malloc(sizeof(char)*(1+strlen(desc)));
                if (curitem->description == NULL)
                {
                  /* Free everything and end. */
                  goto OOMEMERROR;
                }
                strcpy(curitem->description, desc);
                free(desc);
                desc = NULL;
              }
            }
            else if (inchan && !initem && !inimage && !intxtinp)
            {
              if (title!=NULL && link!=NULL && desc!=NULL && curchan == NULL)
              {
#ifdef DEBUG
                	printf("Creating Channel...\n");
#endif
                curchan = createchanpropnode(title, link, desc);
                if (curchan == NULL)
                {
                  /* Free everything and end. */
                  goto OOMEMERROR;
                }
                free(title);
                title = NULL;
                free(link);
                link = NULL;
                free(desc);
                desc = NULL;
              }
              else if (curchan != NULL && curchan->description == NULL)
              {
#ifdef DEBUG
                	printf("Adding description '%s' to channel...\n",desc);
#endif
                curchan->description = (char *) malloc(sizeof(char)*(1+strlen(desc)));
                if (curchan->description == NULL)
                {
                  /* Free everything and end. */
                  goto OOMEMERROR;
                }
                strcpy(curchan->description, desc);
#ifdef DEBUG
                	printf("Written channel description.\n");
#endif
                free(desc);
                desc = NULL;
#ifdef DEBUG
                	printf("Desc is free.\n");
#endif
              }
            }
            else if (inimage && !intxtinp)
            {
              /* Find above epn */
              for (epptr = eproot; epptr != NULL; epptr = epptr->next)
              {
                if (epptr->next == curepn) break;
              }
#ifdef DEBUG
            	if (epptr != NULL) printf("image description: above epn is %s\n",epptr->name);
#endif
              if (epptr != NULL && streq_i(epptr->name,"image"))
              {
                /* Assign data as attribute */
                if (addatttoepn(curepn->name,curepn->data,epptr)==NULL)
                {
                  /* Free everything and end. */
                  goto OOMEMERROR;
                }
              }
              free(desc);
              desc = NULL;
            }
            else if (intxtinp && !inimage)
            {
              /* Find above epn */
              for (epptr = eproot; epptr != NULL; epptr = epptr->next)
              {
                if (epptr->next == curepn) break;
              }
#ifdef DEBUG
            	if (epptr != NULL) printf("textinput description: above epn is %s\n",epptr->name);
#endif
              if (epptr != NULL && streq_i(epptr->name,"textinput"))
              {
                /* Assign data as attribute */
                if (addatttoepn(curepn->name,curepn->data,epptr)==NULL)
                {
                  /* Free everything and end. */
                  goto OOMEMERROR;
                }
              }
              free(desc);
              desc = NULL;
              
            }
          }
        }
        else if (streq_i(curepn->name,"language"))
        {
          if ((!initem) && inchan && !inimage && !intxtinp)
          {
            if (curchan == NULL)
            {
              curchan = createchanpropnode(title,link,desc);
              if (curchan == NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
              if (title != NULL) free(title);
              if (link != NULL) free(link);
              if (desc != NULL) free(desc);
              title = NULL;
              link = NULL;
              desc = NULL;
            }
            if (curchan->language_main == NULL && curchan->language_sub == NULL)
            {
              char *dashloc = strstr(curepn->data,"-");
              if (dashloc != NULL)
              {
                dashloc[0] = 0;
                dashloc += sizeof(char);
                curchan->language_main = (char *) malloc(sizeof(char)*(1+strlen(curepn->data)));
                if (curchan->language_main == NULL)
                {
                  /* Free everything and end. */
                  goto OOMEMERROR;
                }
                curchan->language_sub = (char *) malloc(sizeof(char)*(1+strlen(dashloc)));
                if (curchan->language_sub == NULL)
                {
                  /* Free everything and end. */
                  goto OOMEMERROR;
                }
                strcpy(curchan->language_main,curepn->data);
                strcpy(curchan->language_sub, dashloc);
              }
              else
              {
                curchan->language_main = (char *) malloc(sizeof(char)*(1+strlen(curepn->data)));
                if (curchan->language_main == NULL)
                {
                  /* Free everything and end. */
                  goto OOMEMERROR;
                }
                strcpy(curchan->language_main,curepn->data);
                curchan->language_sub = NULL;
              }
            }
            
          }
        }
        else if (streq_i(curepn->name, "copyright"))
        {
          if (inchan && !initem && !inimage && !intxtinp)
          {
            if (curchan == NULL)
            {
              curchan = createchanpropnode(title,link,desc);
              if (curchan == NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
              if (title != NULL) free(title);
              if (link != NULL) free(link);
              if (desc != NULL) free(desc);
              title = NULL;
              link = NULL;
              desc = NULL;
            }
            if (curchan->copyright == NULL)
            {
              curchan->copyright = (char *) malloc(sizeof(char)*(1+strlen(curepn->data)));
              if (curchan->copyright == NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
              strcpy(curchan->copyright,curepn->data);
            }
            
          }
        }
        else if (streq_i(curepn->name,"managingeditor"))
        {
          if (inchan && !initem && !inimage && !intxtinp)
          {
            if (curchan == NULL)
            {
              curchan = createchanpropnode(title,link,desc);
              if (curchan == NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
              if (title != NULL) free(title);
              if (link != NULL) free(link);
              if (desc != NULL) free(desc);
              title = NULL;
              link = NULL;
              desc = NULL;
            }
            if (curchan->managingeditor == NULL)
            {
              curchan->managingeditor = (char *) malloc(sizeof(char)*(1+strlen(curepn->data)));
              if (curchan->managingeditor == NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
              strcpy(curchan->managingeditor,curepn->data);
            }
            
          }
        }
        else if (streq_i(curepn->name,"webmaster"))
        {
          if (inchan && !initem && !inimage && !intxtinp)
          {
            if (curchan == NULL)
            {
              curchan = createchanpropnode(title,link,desc);
              if (curchan == NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
              if (title != NULL) free(title);
              if (link != NULL) free(link);
              if (desc != NULL) free(desc);
              title = NULL;
              link = NULL;
              desc = NULL;
            }
            if (curchan->webmaster == NULL)
            {
              curchan->webmaster = (char *) malloc(sizeof(char)*(1+strlen(curepn->data)));
              if (curchan->webmaster == NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
              strcpy(curchan->webmaster,curepn->data);
            }
            
          }
        }
        else if (streq_i(curepn->name, "pubdate"))
        {
          if (initem && !inimage && !intxtinp)
          {
            if (curitem == NULL)
            {
              if (curchan != NULL)
                curitem = createitempropnode(title,link,desc,curchan->chanid);
              else
                curitem = createitempropnode(title,link,desc,nextchanid);
              if (curitem == NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
              if (title != NULL) free(title);
              if (link != NULL) free(link);
              if (desc != NULL) free(desc);
              title = NULL;
              link = NULL;
              desc = NULL;
            }
            if (curitem->pubdate.fulldate == NULL)
            {
              curitem->pubdate.fulldate = (char *) malloc(sizeof(char)*(1+strlen(curepn->data)));
              if (curitem->pubdate.fulldate == NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
              strcpy(curitem->pubdate.fulldate,curepn->data);
              /* Create other date items... */
              char *datetok = NULL;
              int tokn = 0;
              datetok = strtok(curepn->data,", :");
              while (datetok != NULL)
              {
                if (tokn == 0)
                {
                  if (isalpha(datetok[0]))
                  {
                    strcpy(curitem->pubdate.dayname,datetok);
                  }
                  else
                  {
                    curitem->pubdate.dayname[0] = 0;
                  }
                  tokn++;
                }
                else if (tokn == 1)
                {
                  curitem->pubdate.daynum = atoi(datetok);
                  tokn++;
                }
                else if (tokn == 2)
                {
                  if (startsame_i(datetok,"Jan"))
                  {
                    curitem->pubdate.month = 1;
                  }
                  else if (startsame_i(datetok,"Feb"))
                  {
                    curitem->pubdate.month = 2;
                  }
                  else if (startsame_i(datetok,"Mar"))
                  {
                    curitem->pubdate.month = 3;
                  }
                  else if (startsame_i(datetok,"Apr"))
                  {
                    curitem->pubdate.month = 4;
                  }
                  else if (startsame_i(datetok,"May"))
                  {
                    curitem->pubdate.month = 5;
                  }
                  else if (startsame_i(datetok,"Jun"))
                  {
                    curitem->pubdate.month = 6;
                  }
                  else if (startsame_i(datetok,"Jul"))
                  {
                    curitem->pubdate.month = 7;
                  }
                  else if (startsame_i(datetok,"Aug"))
                  {
                    curitem->pubdate.month = 8;
                  }
                  else if (startsame_i(datetok,"Sep"))
                  {
                    curitem->pubdate.month = 9;
                  }
                  else if (startsame_i(datetok,"Oct"))
                  {
                    curitem->pubdate.month = 10;
                  }
                  else if (startsame_i(datetok,"Nov"))
                  {
                    curitem->pubdate.month = 11;
                  }
                  else if (startsame_i(datetok,"Dec"))
                  {
                    curitem->pubdate.month = 12;
                  }
                  else
                  {
                    curitem->pubdate.month = 0;
                  }
                  tokn++;
                }
                else if (tokn == 3)
                {
                  long pdiyear = atol(datetok);
                  if (pdiyear<51) pdiyear += 2000;
                  else if (pdiyear<100) pdiyear += 1900;
                  curitem->pubdate.year = pdiyear;
                  tokn++;
                }
                else if (tokn == 4)
                {
                  curitem->pubdate.hour = atoi(datetok);
                  tokn++;
                }
                else if (tokn == 5)
                {
                  curitem->pubdate.minute = atoi(datetok);
                  tokn++;
                }
                else if (tokn == 6)
                {
                  if (isdigit(datetok[0]) && strlen(datetok)<=2)
                  {
                    curitem->pubdate.second = atoi(datetok);
                  }
                  else curitem->pubdate.second = 0;
                  tokn++;
                }
                else if (tokn == 7)
                {
                  char pdioh[3] = "";
                  strcpy(curitem->pubdate.tzone,datetok);
                  curitem->pubdate.gmtoffsetm = 0;
                  if (streq_i(datetok,"UT") || streq_i(datetok, "UTC") || streq_i(datetok,"GMT") || streq_i(datetok,"Z"))
                  {
                    curitem->pubdate.gmtoffseth = 0;
                  }
                  else if (streq_i(datetok,"BST") || streq_i(datetok,"N"))
                  {
                    curitem->pubdate.gmtoffseth = 1;
                  }
                  else if (streq_i(datetok,"O"))
                  {
                    curitem->pubdate.gmtoffseth = 2;
                  }
                  else if (streq_i(datetok,"P"))
                  {
                    curitem->pubdate.gmtoffseth = 3;
                  }
                  else if (streq_i(datetok,"Q"))
                  {
                    curitem->pubdate.gmtoffseth = 4;
                  }
                  else if (streq_i(datetok,"R"))
                  {
                    curitem->pubdate.gmtoffseth = 5;
                  }
                  else if (streq_i(datetok,"S"))
                  {
                    curitem->pubdate.gmtoffseth = 6;
                  }
                  else if (streq_i(datetok,"T"))
                  {
                    curitem->pubdate.gmtoffseth = 7;
                  }
                  else if (streq_i(datetok,"U"))
                  {
                    curitem->pubdate.gmtoffseth = 8;
                  }
                  else if (streq_i(datetok,"V"))
                  {
                    curitem->pubdate.gmtoffseth = 9;
                  }
                  else if (streq_i(datetok,"W"))
                  {
                    curitem->pubdate.gmtoffseth = 10;
                  }
                  else if (streq_i(datetok,"X"))
                  {
                    curitem->pubdate.gmtoffseth = 11;
                  }
                  else if (streq_i(datetok,"Y"))
                  {
                    curitem->pubdate.gmtoffseth = 12;
                  }
                  else if (streq_i(datetok,"A"))
                  {
                    curitem->pubdate.gmtoffseth = -1;
                  }
                  else if (streq_i(datetok,"B"))
                  {
                    curitem->pubdate.gmtoffseth = -2;
                  }
                  else if (streq_i(datetok,"C"))
                  {
                    curitem->pubdate.gmtoffseth = -3;
                  }
                  else if (streq_i(datetok,"D") || streq_i(datetok,"EDT"))
                  {
                    curitem->pubdate.gmtoffseth = -4;
                  }
                  else if (streq_i(datetok,"E") || streq_i(datetok,"EST") || streq_i(datetok,"CDT"))
                  {
                    curitem->pubdate.gmtoffseth = -5;
                  }
                  else if (streq_i(datetok,"F") || streq_i(datetok,"CST") || streq_i(datetok,"MDT"))
                  {
                    curitem->pubdate.gmtoffseth = -6;
                  }
                  else if (streq_i(datetok,"G") || streq_i(datetok,"MST") || streq_i(datetok,"PDT"))
                  {
                    curitem->pubdate.gmtoffseth = -7;
                  }
                  else if (streq_i(datetok,"H") || streq_i(datetok,"PST"))
                  {
                    curitem->pubdate.gmtoffseth = -8;
                  }
                  else if (streq_i(datetok,"I"))
                  {
                    curitem->pubdate.gmtoffseth = -9;
                  }
                  else if (streq_i(datetok,"K"))
                  {
                    curitem->pubdate.gmtoffseth = -10;
                  }
                  else if (streq_i(datetok,"L"))
                  {
                    curitem->pubdate.gmtoffseth = -11;
                  }
                  else if (streq_i(datetok,"M"))
                  {
                    curitem->pubdate.gmtoffseth = -12;
                  }
                  else if (datetok[0] == '+')
                  {
                    if (strlen(datetok)<=3)
                    {
                      curitem->pubdate.gmtoffseth = atoi(datetok+sizeof(char));
                    }
                    else if (strlen(datetok)==5)
                    {
                      pdioh[0] = datetok[1];
                      pdioh[1] = datetok[2];
                      pdioh[2] = 0;
                      curitem->pubdate.gmtoffseth = atoi(pdioh);
                      curitem->pubdate.gmtoffsetm = atoi(datetok+(sizeof(char)*3));
                      
                    }
                  }
                  else if (isdigit(datetok[0]) && strlen(datetok)==4)
                  {
                    pdioh[0] = datetok[0];
                    pdioh[1] = datetok[1];
                    pdioh[2] = 0;
                    curitem->pubdate.gmtoffseth = atoi(pdioh);
                    curitem->pubdate.gmtoffsetm = atoi(datetok+(sizeof(char)*2));
                  }
                  else if (datetok[0] == '-')
                  {
                    if (strlen(datetok)<=3)
                    {
                      curitem->pubdate.gmtoffseth = 0 - atoi(datetok+sizeof(char));
                    }
                    else if (strlen(datetok)==5)
                    {
                      pdioh[0] = datetok[1];
                      pdioh[1] = datetok[2];
                      pdioh[2] = 0;
                      curitem->pubdate.gmtoffseth = 0 - atoi(pdioh);
                      curitem->pubdate.gmtoffsetm = 0 - atoi(datetok+(sizeof(char)*3));
                      
                    }
                  }
                  tokn++;
                }
                datetok = strtok(NULL,", :");
              }
            }
          }
          else if (inchan && !initem && !inimage && !intxtinp)
          {
            if (curchan == NULL)
            {
              curchan = createchanpropnode(title,link,desc);
              if (curchan == NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
              if (title != NULL) free(title);
              if (link != NULL) free(link);
              if (desc != NULL) free(desc);
              title = NULL;
              link = NULL;
              desc = NULL;
            }
            if (curchan->pubdate.fulldate == NULL)
            {
              curchan->pubdate.fulldate = (char *) malloc(sizeof(char)*(1+strlen(curepn->data)));
              if (curchan->pubdate.fulldate == NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
              strcpy(curchan->pubdate.fulldate,curepn->data);
              /* Create other date items... */
              char *datetok = NULL;
              int tokn = 0;
              datetok = strtok(curchan->pubdate.fulldate,", :");
              while (datetok != NULL)
              {
                if (tokn == 0)
                {
                  if (isalpha(datetok[0]))
                  {
                    strcpy(curchan->pubdate.dayname,datetok);
                  }
                  else
                  {
                    curchan->pubdate.dayname[0] = 0;
                  }
                  tokn++;
                }
                else if (tokn == 1)
                {
                  curchan->pubdate.daynum = atoi(datetok);
                  tokn++;
                }
                else if (tokn == 2)
                {
                  if (startsame_i(datetok,"Jan"))
                  {
                    curchan->pubdate.month = 1;
                  }
                  else if (startsame_i(datetok,"Feb"))
                  {
                    curchan->pubdate.month = 2;
                  }
                  else if (startsame_i(datetok,"Mar"))
                  {
                    curchan->pubdate.month = 3;
                  }
                  else if (startsame_i(datetok,"Apr"))
                  {
                    curchan->pubdate.month = 4;
                  }
                  else if (startsame_i(datetok,"May"))
                  {
                    curchan->pubdate.month = 5;
                  }
                  else if (startsame_i(datetok,"Jun"))
                  {
                    curchan->pubdate.month = 6;
                  }
                  else if (startsame_i(datetok,"Jul"))
                  {
                    curchan->pubdate.month = 7;
                  }
                  else if (startsame_i(datetok,"Aug"))
                  {
                    curchan->pubdate.month = 8;
                  }
                  else if (startsame_i(datetok,"Sep"))
                  {
                    curchan->pubdate.month = 9;
                  }
                  else if (startsame_i(datetok,"Oct"))
                  {
                    curchan->pubdate.month = 10;
                  }
                  else if (startsame_i(datetok,"Nov"))
                  {
                    curchan->pubdate.month = 11;
                  }
                  else if (startsame_i(datetok,"Dec"))
                  {
                    curchan->pubdate.month = 12;
                  }
                  else
                  {
                    curchan->pubdate.month = 0;
                  }
                  tokn++;
                }
                else if (tokn == 3)
                {
                  long pdcyear = atol(datetok);
                  if (pdcyear<51) pdcyear += 2000;
                  else if (pdcyear<100) pdcyear += 1900;
                  curchan->pubdate.year = pdcyear;
                  tokn++;
                }
                else if (tokn == 4)
                {
                  curchan->pubdate.hour = atoi(datetok);
                  tokn++;
                }
                else if (tokn == 5)
                {
                  curchan->pubdate.minute = atoi(datetok);
                  tokn++;
                }
                else if (tokn == 6)
                {
                  if (isdigit(datetok[0]) && strlen(datetok)<=2)
                  {
                    curchan->pubdate.second = atoi(datetok);
                  }
                  else curchan->pubdate.second = 0;
                  tokn++;
                }
                else if (tokn == 7)
                {
                  char pdcoh[3] = "";
                  strcpy(curchan->pubdate.tzone,datetok);
                  curchan->pubdate.gmtoffsetm = 0;
                  if (streq_i(datetok,"UT") || streq_i(datetok, "UTC") || streq_i(datetok,"GMT") || streq_i(datetok,"Z"))
                  {
                    curchan->pubdate.gmtoffseth = 0;
                  }
                  else if (streq_i(datetok,"BST") || streq_i(datetok,"N"))
                  {
                    curchan->pubdate.gmtoffseth = 1;
                  }
                  else if (streq_i(datetok,"O"))
                  {
                    curchan->pubdate.gmtoffseth = 2;
                  }
                  else if (streq_i(datetok,"P"))
                  {
                    curchan->pubdate.gmtoffseth = 3;
                  }
                  else if (streq_i(datetok,"Q"))
                  {
                    curchan->pubdate.gmtoffseth = 4;
                  }
                  else if (streq_i(datetok,"R"))
                  {
                    curchan->pubdate.gmtoffseth = 5;
                  }
                  else if (streq_i(datetok,"S"))
                  {
                    curchan->pubdate.gmtoffseth = 6;
                  }
                  else if (streq_i(datetok,"T"))
                  {
                    curchan->pubdate.gmtoffseth = 7;
                  }
                  else if (streq_i(datetok,"U"))
                  {
                    curchan->pubdate.gmtoffseth = 8;
                  }
                  else if (streq_i(datetok,"V"))
                  {
                    curchan->pubdate.gmtoffseth = 9;
                  }
                  else if (streq_i(datetok,"W"))
                  {
                    curchan->pubdate.gmtoffseth = 10;
                  }
                  else if (streq_i(datetok,"X"))
                  {
                    curchan->pubdate.gmtoffseth = 11;
                  }
                  else if (streq_i(datetok,"Y"))
                  {
                    curchan->pubdate.gmtoffseth = 12;
                  }
                  else if (streq_i(datetok,"A"))
                  {
                    curchan->pubdate.gmtoffseth = -1;
                  }
                  else if (streq_i(datetok,"B"))
                  {
                    curchan->pubdate.gmtoffseth = -2;
                  }
                  else if (streq_i(datetok,"C"))
                  {
                    curchan->pubdate.gmtoffseth = -3;
                  }
                  else if (streq_i(datetok,"D") || streq_i(datetok,"EDT"))
                  {
                    curchan->pubdate.gmtoffseth = -4;
                  }
                  else if (streq_i(datetok,"E") || streq_i(datetok,"EST") || streq_i(datetok,"CDT"))
                  {
                    curchan->pubdate.gmtoffseth = -5;
                  }
                  else if (streq_i(datetok,"F") || streq_i(datetok,"CST") || streq_i(datetok,"MDT"))
                  {
                    curchan->pubdate.gmtoffseth = -6;
                  }
                  else if (streq_i(datetok,"G") || streq_i(datetok,"MST") || streq_i(datetok,"PDT"))
                  {
                    curchan->pubdate.gmtoffseth = -7;
                  }
                  else if (streq_i(datetok,"H") || streq_i(datetok,"PST"))
                  {
                    curchan->pubdate.gmtoffseth = -8;
                  }
                  else if (streq_i(datetok,"I"))
                  {
                    curchan->pubdate.gmtoffseth = -9;
                  }
                  else if (streq_i(datetok,"K"))
                  {
                    curchan->pubdate.gmtoffseth = -10;
                  }
                  else if (streq_i(datetok,"L"))
                  {
                    curchan->pubdate.gmtoffseth = -11;
                  }
                  else if (streq_i(datetok,"M"))
                  {
                    curchan->pubdate.gmtoffseth = -12;
                  }
                  else if (datetok[0] == '+')
                  {
                    if (strlen(datetok)<=3)
                    {
                      curchan->pubdate.gmtoffseth = atoi(datetok+sizeof(char));
                    }
                    else if (strlen(datetok)==5)
                    {
                      pdcoh[0] = datetok[1];
                      pdcoh[1] = datetok[2];
                      pdcoh[2] = 0;
                      curchan->pubdate.gmtoffseth = atoi(pdcoh);
                      curchan->pubdate.gmtoffsetm = atoi(datetok+(sizeof(char)*3));
                      
                    }
                  }
                  else if (isdigit(datetok[0]) && strlen(datetok)==4)
                  {
                    pdcoh[0] = datetok[0];
                    pdcoh[1] = datetok[1];
                    pdcoh[2] = 0;
                    curchan->pubdate.gmtoffseth = atoi(pdcoh);
                    curchan->pubdate.gmtoffsetm = atoi(datetok+(sizeof(char)*2));
                  }
                  else if (datetok[0] == '-')
                  {
                    if (strlen(datetok)<=3)
                    {
                      curchan->pubdate.gmtoffseth = 0 - atoi(datetok+sizeof(char));
                    }
                    else if (strlen(datetok)==5)
                    {
                      pdcoh[0] = datetok[1];
                      pdcoh[1] = datetok[2];
                      pdcoh[2] = 0;
                      curchan->pubdate.gmtoffseth = 0 - atoi(pdcoh);
                      curchan->pubdate.gmtoffsetm = 0 - atoi(datetok+(sizeof(char)*3));
                      
                    }
                  }
                  tokn++;
                }
                datetok = strtok(NULL,", :");
              }
            }
          }
        }
        else if (streq_i(curepn->name, "lastbuilddate"))
        {
          if (inchan && !initem && !inimage && !intxtinp)
          {
            if (curchan == NULL)
            {
              curchan = createchanpropnode(title,link,desc);
              if (curchan == NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
              if (title != NULL) free(title);
              if (link != NULL) free(link);
              if (desc != NULL) free(desc);
              title = NULL;
              link = NULL;
              desc = NULL;
            }
            if (curchan->lastbuilddate.fulldate == NULL)
            {
              curchan->lastbuilddate.fulldate = (char *) malloc(sizeof(char)*(1+strlen(curepn->data)));
              if (curchan->lastbuilddate.fulldate == NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
              strcpy(curchan->lastbuilddate.fulldate,curepn->data);
              /* Create other date items... */
              char *datetok = NULL;
              int tokn = 0;
              datetok = strtok(curepn->data,", :");
              while (datetok != NULL)
              {
                if (tokn == 0)
                {
                  if (isalpha(datetok[0]))
                  {
                    strcpy(curchan->lastbuilddate.dayname,datetok);
                  }
                  else
                  {
                    curchan->lastbuilddate.dayname[0] = 0;
                  }
                  tokn++;
                }
                else if (tokn == 1)
                {
                  curchan->lastbuilddate.daynum = atoi(datetok);
                  tokn++;
                }
                else if (tokn == 2)
                {
                  if (startsame_i(datetok,"Jan"))
                  {
                    curchan->lastbuilddate.month = 1;
                  }
                  else if (startsame_i(datetok,"Feb"))
                  {
                    curchan->lastbuilddate.month = 2;
                  }
                  else if (startsame_i(datetok,"Mar"))
                  {
                    curchan->lastbuilddate.month = 3;
                  }
                  else if (startsame_i(datetok,"Apr"))
                  {
                    curchan->lastbuilddate.month = 4;
                  }
                  else if (startsame_i(datetok,"May"))
                  {
                    curchan->lastbuilddate.month = 5;
                  }
                  else if (startsame_i(datetok,"Jun"))
                  {
                    curchan->lastbuilddate.month = 6;
                  }
                  else if (startsame_i(datetok,"Jul"))
                  {
                    curchan->lastbuilddate.month = 7;
                  }
                  else if (startsame_i(datetok,"Aug"))
                  {
                    curchan->lastbuilddate.month = 8;
                  }
                  else if (startsame_i(datetok,"Sep"))
                  {
                    curchan->lastbuilddate.month = 9;
                  }
                  else if (startsame_i(datetok,"Oct"))
                  {
                    curchan->lastbuilddate.month = 10;
                  }
                  else if (startsame_i(datetok,"Nov"))
                  {
                    curchan->lastbuilddate.month = 11;
                  }
                  else if (startsame_i(datetok,"Dec"))
                  {
                    curchan->lastbuilddate.month = 12;
                  }
                  else
                  {
                    curchan->lastbuilddate.month = 0;
                  }
                  tokn++;
                }
                else if (tokn == 3)
                {
                  long lbdcyear = atol(datetok);
                  if (lbdcyear<51) lbdcyear += 2000;
                  else if (lbdcyear<100) lbdcyear += 1900;
                  curchan->lastbuilddate.year = lbdcyear;
                  tokn++;
                }
                else if (tokn == 4)
                {
                  curchan->lastbuilddate.hour = atoi(datetok);
                  tokn++;
                }
                else if (tokn == 5)
                {
                  curchan->lastbuilddate.minute = atoi(datetok);
                  tokn++;
                }
                else if (tokn == 6)
                {
                  if (isdigit(datetok[0]) && strlen(datetok)<=2)
                  {
                    curchan->lastbuilddate.second = atoi(datetok);
                  }
                  else curchan->lastbuilddate.second = 0;
                  tokn++;
                }
                else if (tokn == 7)
                {
                  char lbdcoh[3] = "";
                  strcpy(curchan->lastbuilddate.tzone,datetok);
                  curchan->lastbuilddate.gmtoffsetm = 0;
                  if (streq_i(datetok,"UT") || streq_i(datetok, "UTC") || streq_i(datetok,"GMT") || streq_i(datetok,"Z"))
                  {
                    curchan->lastbuilddate.gmtoffseth = 0;
                  }
                  else if (streq_i(datetok,"BST") || streq_i(datetok,"N"))
                  {
                    curchan->lastbuilddate.gmtoffseth = 1;
                  }
                  else if (streq_i(datetok,"O"))
                  {
                    curchan->lastbuilddate.gmtoffseth = 2;
                  }
                  else if (streq_i(datetok,"P"))
                  {
                    curchan->lastbuilddate.gmtoffseth = 3;
                  }
                  else if (streq_i(datetok,"Q"))
                  {
                    curchan->lastbuilddate.gmtoffseth = 4;
                  }
                  else if (streq_i(datetok,"R"))
                  {
                    curchan->lastbuilddate.gmtoffseth = 5;
                  }
                  else if (streq_i(datetok,"S"))
                  {
                    curchan->lastbuilddate.gmtoffseth = 6;
                  }
                  else if (streq_i(datetok,"T"))
                  {
                    curchan->lastbuilddate.gmtoffseth = 7;
                  }
                  else if (streq_i(datetok,"U"))
                  {
                    curchan->lastbuilddate.gmtoffseth = 8;
                  }
                  else if (streq_i(datetok,"V"))
                  {
                    curchan->lastbuilddate.gmtoffseth = 9;
                  }
                  else if (streq_i(datetok,"W"))
                  {
                    curchan->lastbuilddate.gmtoffseth = 10;
                  }
                  else if (streq_i(datetok,"X"))
                  {
                    curchan->lastbuilddate.gmtoffseth = 11;
                  }
                  else if (streq_i(datetok,"Y"))
                  {
                    curchan->lastbuilddate.gmtoffseth = 12;
                  }
                  else if (streq_i(datetok,"A"))
                  {
                    curchan->lastbuilddate.gmtoffseth = -1;
                  }
                  else if (streq_i(datetok,"B"))
                  {
                    curchan->lastbuilddate.gmtoffseth = -2;
                  }
                  else if (streq_i(datetok,"C"))
                  {
                    curchan->lastbuilddate.gmtoffseth = -3;
                  }
                  else if (streq_i(datetok,"D") || streq_i(datetok,"EDT"))
                  {
                    curchan->lastbuilddate.gmtoffseth = -4;
                  }
                  else if (streq_i(datetok,"E") || streq_i(datetok,"EST") || streq_i(datetok,"CDT"))
                  {
                    curchan->lastbuilddate.gmtoffseth = -5;
                  }
                  else if (streq_i(datetok,"F") || streq_i(datetok,"CST") || streq_i(datetok,"MDT"))
                  {
                    curchan->lastbuilddate.gmtoffseth = -6;
                  }
                  else if (streq_i(datetok,"G") || streq_i(datetok,"MST") || streq_i(datetok,"PDT"))
                  {
                    curchan->lastbuilddate.gmtoffseth = -7;
                  }
                  else if (streq_i(datetok,"H") || streq_i(datetok,"PST"))
                  {
                    curchan->lastbuilddate.gmtoffseth = -8;
                  }
                  else if (streq_i(datetok,"I"))
                  {
                    curchan->lastbuilddate.gmtoffseth = -9;
                  }
                  else if (streq_i(datetok,"K"))
                  {
                    curchan->lastbuilddate.gmtoffseth = -10;
                  }
                  else if (streq_i(datetok,"L"))
                  {
                    curchan->lastbuilddate.gmtoffseth = -11;
                  }
                  else if (streq_i(datetok,"M"))
                  {
                    curchan->lastbuilddate.gmtoffseth = -12;
                  }
                  else if (datetok[0] == '+')
                  {
                    if (strlen(datetok)<=3)
                    {
                      curchan->lastbuilddate.gmtoffseth = atoi(datetok+sizeof(char));
                    }
                    else if (strlen(datetok)==5)
                    {
                      lbdcoh[0] = datetok[1];
                      lbdcoh[1] = datetok[2];
                      lbdcoh[2] = 0;
                      curchan->lastbuilddate.gmtoffseth = atoi(lbdcoh);
                      curchan->lastbuilddate.gmtoffsetm = atoi(datetok+(sizeof(char)*3));
                      
                    }
                  }
                  else if (isdigit(datetok[0]) && strlen(datetok)==4)
                  {
                    lbdcoh[0] = datetok[0];
                    lbdcoh[1] = datetok[1];
                    lbdcoh[2] = 0;
                    curchan->lastbuilddate.gmtoffseth = atoi(lbdcoh);
                    curchan->lastbuilddate.gmtoffsetm = atoi(datetok+(sizeof(char)*2));
                  }
                  else if (datetok[0] == '-')
                  {
                    if (strlen(datetok)<=3)
                    {
                      curchan->lastbuilddate.gmtoffseth = 0 - atoi(datetok+sizeof(char));
                    }
                    else if (strlen(datetok)==5)
                    {
                      lbdcoh[0] = datetok[1];
                      lbdcoh[1] = datetok[2];
                      lbdcoh[2] = 0;
                      curchan->lastbuilddate.gmtoffseth = 0 - atoi(lbdcoh);
                      curchan->lastbuilddate.gmtoffsetm = 0 - atoi(datetok+(sizeof(char)*3));
                      
                    }
                  }
                  tokn++;
                }
                datetok = strtok(NULL,", :");
              }
            }
          }
        }
        else if (streq_i(curepn->name, "category"))
        {
#ifdef DEBUG
          	printf("CAT %s, %s\n", curepn->name, curepn->data);
#endif
          char *domainptr = NULL;
          domainptr = NULL;
          for (epptr = curepn->attlist; epptr != NULL; epptr = epptr->next)
          {
#ifdef DEBUG
            	printf("Category Attribute '%s'\n", epptr->name);
#endif
            if (streq_i(epptr->name, "domain"))
            {
              domainptr = epptr->data;
              break;
            }
          }
          if (initem && !inimage && !intxtinp)
          {
#ifdef DEBUG
            	printf("Item Category '%s' (%s)\n",curepn->data,domainptr);
#endif
            if (curitem == NULL)
            {
              if (createcategory(item_cat,nextitemid,domainptr,curepn->data)==0)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
            }
            else
            {
              if (createcategory(item_cat,curitem->itemid,domainptr,curepn->data)==0)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
            }
          }
          else if (inchan && !initem && !inimage && !intxtinp)
          {
#ifdef DEBUG
            	printf("Channel Category '%s' (%s)\n",curepn->data,domainptr);
#endif
            if (curchan == NULL)
            {
              if (createcategory(channel_cat,nextchanid,domainptr,curepn->data)==0)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
            }
            else
            {
              if (createcategory(channel_cat,curchan->chanid,domainptr,curepn->data)==0)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
            }
          }
        }
        else if (streq_i(curepn->name, "generator"))
        {
          if (inchan && !initem && !inimage && !intxtinp)
          {
            if (curchan == NULL)
            {
              curchan = createchanpropnode(title,link,desc);
              if (curchan == NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
              if (title != NULL) free(title);
              if (link != NULL) free(link);
              if (desc != NULL) free(desc);
              title = NULL;
              link = NULL;
              desc = NULL;
            }
            if (curchan->generator == NULL)
            {
              curchan->generator = (char *) malloc(sizeof(char)*(1+strlen(curepn->data)));
              if (curchan->generator == NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
              strcpy(curchan->generator,curepn->data);
            }
            
          }
        }
        else if (streq_i(curepn->name, "docs"))
        {
          if (inchan && !initem && !inimage && !intxtinp)
          {
            if (curchan == NULL)
            {
              curchan = createchanpropnode(title,link,desc);
              if (curchan == NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
              if (title != NULL) free(title);
              if (link != NULL) free(link);
              if (desc != NULL) free(desc);
              title = NULL;
              link = NULL;
              desc = NULL;
            }
            if (curchan->docs == NULL)
            {
              curchan->docs = (char *) malloc(sizeof(char)*(1+strlen(curepn->data)));
              if (curchan->docs == NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
              strcpy(curchan->docs,curepn->data);
            }
            
          }
        }
        else if (streq_i(curepn->name,"ttl"))
        {
          if (inchan && !initem && !inimage && !intxtinp)
          {
            if (curchan == NULL)
            {
              curchan = createchanpropnode(title,link,desc);
              if (curchan == NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
              if (title != NULL) free(title);
              if (link != NULL) free(link);
              if (desc != NULL) free(desc);
              title = NULL;
              link = NULL;
              desc = NULL;
            }
            curchan->ttl = atol(curepn->data);
          }
        }
        else if (streq_i(curepn->name, "image"))
        {
          inimage = 0;
          if (inchan && !initem && !intxtinp)
          {
            if (curchan == NULL)
            {
              curchan = createchanpropnode(title,link,desc);
              if (curchan == NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
              if (title != NULL) free(title);
              if (link != NULL) free(link);
              if (desc != NULL) free(desc);
              title = NULL;
              link = NULL;
              desc = NULL;
            }
          }
          else if (initem && !intxtinp)
          {
            if (curitem == NULL)
            {
              if (curchan != NULL)
                curitem = createitempropnode(title,link,desc,curchan->chanid);
              else
                curitem = createitempropnode(title,link,desc,nextchanid);
              if (curitem == NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
              if (title != NULL) free(title);
              if (link != NULL) free(link);
              if (desc != NULL) free(desc);
              title = NULL;
              link = NULL;
              desc = NULL;
            }
          }
          for (epptr = curepn->attlist; epptr != NULL; epptr = epptr->next)
          {
            if (streq_i(epptr->name, "url"))
            {
              if (initem && !intxtinp)
              {
                if (curitem->image.url == NULL)
                {
                  curitem->image.url = (char *) malloc(sizeof(char)*(1+strlen(epptr->data)));
                  if (curitem->image.url == NULL)
                  {
                    /* Free everything and end. */
                    goto OOMEMERROR;
                  }
                  strcpy(curitem->image.url,epptr->data);
                }
              }
              else if (inchan && !intxtinp)
              {
                if (curchan->image.url == NULL)
                {
                  curchan->image.url = (char *) malloc(sizeof(char)*(1+strlen(epptr->data)));
                  if (curchan->image.url == NULL)
                  {
                    /* Free everything and end. */
                    goto OOMEMERROR;
                  }
                  strcpy(curchan->image.url,epptr->data);
                }
              }
            }
            else if (streq_i(epptr->name, "title"))
            {
              if (initem && !intxtinp)
              {
                if (curitem->image.title == NULL)
                {
                  curitem->image.title = (char *) malloc(sizeof(char)*(1+strlen(epptr->data)));
                  if (curitem->image.title == NULL)
                  {
                    /* Free everything and end. */
                    goto OOMEMERROR;
                  }
                  strcpy(curitem->image.title,epptr->data);
                }
              }
              else if (inchan && !intxtinp)
              {
                if (curchan->image.title == NULL)
                {
                  curchan->image.title = (char *) malloc(sizeof(char)*(1+strlen(epptr->data)));
                  if (curchan->image.title == NULL)
                  {
                    /* Free everything and end. */
                    goto OOMEMERROR;
                  }
                  strcpy(curchan->image.title,epptr->data);
                }
              }
            }
            else if (streq_i(epptr->name, "link"))
            {
              if (initem && !intxtinp)
              {
                if (curitem->image.link == NULL)
                {
                  curitem->image.link = (char *) malloc(sizeof(char)*(1+strlen(epptr->data)));
                  if (curitem->image.link == NULL)
                  {
                    /* Free everything and end. */
                    goto OOMEMERROR;
                  }
                  strcpy(curitem->image.link,epptr->data);
                }
              }
              else if (inchan && !intxtinp)
              {
                if (curchan->image.link == NULL)
                {
                  curchan->image.link = (char *) malloc(sizeof(char)*(1+strlen(epptr->data)));
                  if (curchan->image.link == NULL)
                  {
                    /* Free everything and end. */
                    goto OOMEMERROR;
                  }
                  strcpy(curchan->image.link,epptr->data);
                }
              }
            }
            else if (streq_i(epptr->name, "description"))
            {
              if (initem && !intxtinp)
              {
                if (curitem->image.description == NULL)
                {
                  curitem->image.description = (char *) malloc(sizeof(char)*(1+strlen(epptr->data)));
                  if (curitem->image.description == NULL)
                  {
                    /* Free everything and end. */
                    goto OOMEMERROR;
                  }
                  strcpy(curitem->image.description,epptr->data);
                }
              }
              else if (inchan && !intxtinp)
              {
                if (curchan->image.description == NULL)
                {
                  curchan->image.description = (char *) malloc(sizeof(char)*(1+strlen(epptr->data)));
                  if (curchan->image.description == NULL)
                  {
                    /* Free everything and end. */
                    goto OOMEMERROR;
                  }
                  strcpy(curchan->image.description,epptr->data);
                }
              }
            }
            else if (streq_i(epptr->name, "width"))
            {
              if (initem && !intxtinp)
              {
                curitem->image.width = atol(epptr->data);
              }
              else if (inchan && !intxtinp)
              {
                curchan->image.width = atol(epptr->data);
              }
            }
            else if (streq_i(epptr->name, "height"))
            {
              if (initem && !intxtinp)
              {
                curitem->image.height = atol(epptr->data);
              }
              else if (inchan && !intxtinp)
              {
                curchan->image.height = atol(epptr->data);
              }
            }
            
          }
          
        }
        else if (streq_i(curepn->name,"textinput"))
        {
          intxtinp = 0;
          /* Otherwise, ignore this. */
        }
        else if (streq_i(curepn->name,"skiphours"))
        {
          /* Suck attributes into channel's skiphours property */
          if (inchan && !initem && !intxtinp && !inimage)
          {
            if (curchan == NULL)
            {
              curchan = createchanpropnode(title,link,desc);
              if (curchan == NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
              if (title != NULL) free(title);
              if (link != NULL) free(link);
              if (desc != NULL) free(desc);
              title = NULL;
              link = NULL;
              desc = NULL;
            }
            int hoursn = 0, hoursi = 0;
            long hourd = 0;
            for (epptr = curepn->attlist; epptr != NULL; epptr = epptr->next)
            {
              if (streq_i(epptr->name,"hour"))
              {
                hoursn++;
              }
            }
            if (curchan->skiphours == NULL)
            {
              curchan->skiphours = (m1tna) malloc(sizeof(long)*(hoursn+1));
              if (curchan->skiphours == NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
              memset(curchan->skiphours,0,sizeof(long)*(hoursn+1));
              curchan->skiphours[hoursn] = -1;
              for (epptr = curepn->attlist; epptr != NULL; epptr = epptr->next)
              {
                if (streq_i(epptr->name,"hour"))
                {
                  hourd = atol(epptr->data);
                  if (hourd < 0) hourd = 0 - hourd;
                  if (hoursi<hoursn)
                  {
                    curchan->skiphours[hoursi] = hourd;
                    hoursi++;
                  }
                }
              }
              curchan->skiphours[hoursi] = -1;
            }
            
          }
        }
        else if (streq_i(curepn->name,"skipdays"))
        {
          /* Suck attributes into channel's skipdays property */
          if (inchan && !initem && !intxtinp && !inimage)
          {
            if (curchan == NULL)
            {
              curchan = createchanpropnode(title,link,desc);
              if (curchan == NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
              if (title != NULL) free(title);
              if (link != NULL) free(link);
              if (desc != NULL) free(desc);
              title = NULL;
              link = NULL;
              desc = NULL;
            }
            int daysn = 0, daysi = 0;
            for (epptr = curepn->attlist; epptr != NULL; epptr = epptr->next)
            {
              if (streq_i(epptr->name,"day"))
              {
                daysn++;
              }
            }
            if (curchan->skipdays == NULL)
            {
              curchan->skipdays = (ntsa) malloc(sizeof(char *)*(daysn+1));
              if (curchan->skipdays == NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
              memset(curchan->skipdays,0,sizeof(char *)*(daysn+1));
              curchan->skipdays[daysn] = NULL;
              for (epptr = curepn->attlist; epptr != NULL; epptr = epptr->next)
              {
                if (streq_i(epptr->name,"day"))
                {
                  if (daysi<daysn)
                  {
                    curchan->skipdays[daysi] = (char *) malloc(sizeof(char)*(1+strlen(epptr->data)));
                    if (curchan->skipdays[daysi] == NULL)
                    {
                      for (daysn=0;daysn<daysi;daysn++) free(curchan->skipdays[daysn]);
                      free(curchan->skipdays);
                      curchan->skipdays = NULL;
                      /* Free everything and end. */
                      goto OOMEMERROR;
                    }
                    strcpy(curchan->skipdays[daysi],epptr->data);
                    daysi++;
                  }
                }
              }
              curchan->skipdays[daysi] = NULL;
            }
            
          }
        }
        /* Subelements of channel */
        else if (streq_i(curepn->name,"p"))
        {
          /* This is a bug of The Bugle(TM) feed at least - fixed here */
          if (initem || inchan || inimage || intxtinp)
          {
#ifdef DEBUG
          	printf("P Data\n"); /* Gets this far... */
#endif
            /* Find above epn */
            for (epptr = eproot; epptr != NULL; epptr = epptr->next)
            {
              if (epptr->next == curepn) break;
            }
#ifdef DEBUG
            	if (epptr != NULL) printf("P Data: Above epn is %s\n",epptr->name);
#endif
            if (epptr != NULL && streq_i(epptr->name,"description"))
            {
#ifdef DEBUG
              	printf("Assigning P Data '%s' to above\n",curepn->data);
#endif
              if (epptr->data == NULL)
              {
                epptr->data = (char *) malloc(sizeof(char)*(1+strlen(curepn->data)));
                if (epptr->data == NULL)
                {
                  /* Free everything and end. */
                  goto OOMEMERROR;
                }
                strcpy(epptr->data, curepn->data);
#ifdef DEBUG
                	printf("New data: '%s'\n",epptr->data);
#endif
              }
              else
              {
                char *tstr = (char *) malloc(sizeof(char)*(1+strlen(curepn->data)+strlen(epptr->data)));
                if (tstr == NULL)
                {
                  /* Free everything and end. */
                  goto OOMEMERROR;
                }
                strcpy(tstr,epptr->data);
                strcat(tstr,curepn->data);
                free(epptr->data);
                epptr->data = tstr;
                tstr = NULL;
#ifdef DEBUG
                	printf("New data: '%s'\n",epptr->data);
#endif
              }
            }
          }
        }
        else if (streq_i(curepn->name,"hour"))
        {
          if (inchan && !initem && !inimage && !intxtinp)
          {
            /* Find above epn */
            for (epptr = eproot; epptr != NULL; epptr = epptr->next)
            {
              if (epptr->next == curepn) break;
            }
#ifdef DEBUG
            	if (epptr != NULL) printf("hour: above epn is %s\n",epptr->name);
#endif
            if (epptr != NULL && streq_i(epptr->name,"skiphours"))
            {
              /* Assign data as attribute */
              if (addatttoepn(curepn->name,curepn->data,epptr)==NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
            }
          }
        }
        else if (streq_i(curepn->name,"day"))
        {
          if (inchan && !initem && !inimage && !intxtinp)
          {
            /* Find above epn */
            for (epptr = eproot; epptr != NULL; epptr = epptr->next)
            {
              if (epptr->next == curepn) break;
            }
#ifdef DEBUG
            	if (epptr != NULL) printf("day: above epn is %s\n",epptr->name);
#endif
            if (epptr != NULL && streq_i(epptr->name,"skipdays"))
            {
              /* Assign data as attribute */
              if (addatttoepn(curepn->name,curepn->data,epptr)==NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
            }
          }
        }
        else if (streq_i(curepn->name,"url"))
        {
          if (inimage && !intxtinp)
          {
            /* Find above epn */
            for (epptr = eproot; epptr != NULL; epptr = epptr->next)
            {
              if (epptr->next == curepn) break;
            }
#ifdef DEBUG
            	if (epptr != NULL) printf("image url: above epn is %s\n",epptr->name);
#endif
            if (epptr != NULL && streq_i(epptr->name,"image"))
            {
              /* Assign data as attribute */
              if (addatttoepn(curepn->name,curepn->data,epptr)==NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
            }
          }
        }
        else if (streq_i(curepn->name,"width"))
        {
          if (inimage && !intxtinp)
          {
            /* Find above epn */
            for (epptr = eproot; epptr != NULL; epptr = epptr->next)
            {
              if (epptr->next == curepn) break;
            }
#ifdef DEBUG
            	if (epptr != NULL) printf("image width: above epn is %s\n",epptr->name);
#endif
            if (epptr != NULL && streq_i(epptr->name,"image"))
            {
              /* Assign data as attribute */
              if (addatttoepn(curepn->name,curepn->data,epptr)==NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
            }
          }
        }
        else if (streq_i(curepn->name,"height"))
        {
          if (inimage && !intxtinp)
          {
            /* Find above epn */
            for (epptr = eproot; epptr != NULL; epptr = epptr->next)
            {
              if (epptr->next == curepn) break;
            }
#ifdef DEBUG
            	if (epptr != NULL) printf("image height: above epn is %s\n",epptr->name);
#endif
            if (epptr != NULL && streq_i(epptr->name,"image"))
            {
              /* Assign data as attribute */
              if (addatttoepn(curepn->name,curepn->data,epptr)==NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
            }
          }
        }
        else if (streq_i(curepn->name,"name"))
        {
          if (intxtinp && !inimage)
          {
            /* Find above epn */
            for (epptr = eproot; epptr != NULL; epptr = epptr->next)
            {
              if (epptr->next == curepn) break;
            }
#ifdef DEBUG
            	if (epptr != NULL) printf("textinput name: above epn is %s\n",epptr->name);
#endif
            if (epptr != NULL && streq_i(epptr->name,"textinput"))
            {
              /* Assign data as attribute */
              if (addatttoepn(curepn->name,curepn->data,epptr)==NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
            }
          }
        }
        /* Elements of Item */
        else if (streq_i(curepn->name,"author"))
        {
          if (initem && !inimage && !intxtinp)
          {
            if (curitem == NULL)
            {
              if (curchan != NULL)
                curitem = createitempropnode(title,link,desc,curchan->chanid);
              else
                curitem = createitempropnode(title,link,desc,nextchanid);
              if (curitem == NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
              if (title != NULL) free(title);
              if (link != NULL) free(link);
              if (desc != NULL) free(desc);
              title = NULL;
              link = NULL;
              desc = NULL;
            }
            if (curitem->author == NULL)
            {
              curitem->author = (char *) malloc(sizeof(char)*(1+strlen(curepn->data)));
              if (curitem->author == NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
              strcpy(curitem->author,curepn->data);
            }
          }
        }
        else if (streq_i(curepn->name,"comments"))
        {
          if (initem && !inimage && !intxtinp)
          {
            if (curitem == NULL)
            {
              if (curchan != NULL)
                curitem = createitempropnode(title,link,desc,curchan->chanid);
              else
                curitem = createitempropnode(title,link,desc,nextchanid);
              if (curitem == NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
              if (title != NULL) free(title);
              if (link != NULL) free(link);
              if (desc != NULL) free(desc);
              title = NULL;
              link = NULL;
              desc = NULL;
            }
            if (curitem->comments == NULL)
            {
              curitem->comments = (char *) malloc(sizeof(char)*(1+strlen(curepn->data)));
              if (curitem->comments == NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
              strcpy(curitem->comments,curepn->data);
            }
          }
        }
        else if (streq_i(curepn->name,"enclosure"))
        {
          if (initem && !inimage && !intxtinp)
          {
            if (curitem == NULL)
            {
              if (curchan != NULL)
                curitem = createitempropnode(title,link,desc,curchan->chanid);
              else
                curitem = createitempropnode(title,link,desc,nextchanid);
              if (curitem == NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
              if (title != NULL) free(title);
              if (link != NULL) free(link);
              if (desc != NULL) free(desc);
              title = NULL;
              link = NULL;
              desc = NULL;
            }
            if (curitem->enclosure.url == NULL && curitem->enclosure.type == NULL)
            {
              for (epptr = curepn->attlist; epptr != NULL; epptr = epptr->next)
              {
                if (streq_i(epptr->name,"url"))
                {
                  if (curitem->enclosure.url == NULL)
                  {
                    curitem->enclosure.url = (char *) malloc(sizeof(char)*(1+strlen(epptr->data)));
                    if (curitem->enclosure.url == NULL)
                    {
                      /* Free everything and end. */
                      goto OOMEMERROR;
                    }
                    if (epptr->data[0] == '"' && epptr->data[strlen(epptr->data)-1] == '"')
                    {
                      strcpy(curitem->enclosure.url,epptr->data + sizeof(char));
                      curitem->enclosure.url[strlen(curitem->enclosure.url)-1] = 0;
                    }
                    else strcpy(curitem->enclosure.url,epptr->data);
                  }
                }
                else if (streq_i(epptr->name,"length"))
                {
                  if (epptr->data[0] == '"' && epptr->data[strlen(epptr->data)-1] == '"')
                  {
                    epptr->data[strlen(epptr->data)-1] = 0;
                    curitem->enclosure.length = atoul(epptr->data+sizeof(char));
                  }
                  else curitem->enclosure.length = atoul(epptr->data);
#ifdef DEBUG
                  	printf("Enclosure Length: %s (%d)\n",epptr->data, curitem->enclosure.length);
#endif
                }
                else if (streq_i(epptr->name,"type"))
                {
                  if (curitem->enclosure.type == NULL)
                  {
                    curitem->enclosure.type = (char *) malloc(sizeof(char)*(1+strlen(epptr->data)));
                    if (curitem->enclosure.type == NULL)
                    {
                      /* Free everything and end. */
                      goto OOMEMERROR;
                    }
                    if (epptr->data[0] == '"' && epptr->data[strlen(epptr->data)-1] == '"')
                    {
                      strcpy(curitem->enclosure.type,epptr->data + sizeof(char));
                      curitem->enclosure.type[strlen(curitem->enclosure.type)-1] = 0;
                    }
                    else strcpy(curitem->enclosure.type,epptr->data);
                  }
                }
                
              }
              
            }
          }
        }
        else if (streq_i(curepn->name,"guid"))
        {
          if (initem && !inimage && !intxtinp)
          {
            if (curitem == NULL)
            {
              if (curchan != NULL)
                curitem = createitempropnode(title,link,desc,curchan->chanid);
              else
                curitem = createitempropnode(title,link,desc,nextchanid);
              if (curitem == NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
              if (title != NULL) free(title);
              if (link != NULL) free(link);
              if (desc != NULL) free(desc);
              title = NULL;
              link = NULL;
              desc = NULL;
            }
            if (curitem->guid.guid == NULL)
            {
              curitem->guid.guid = (char *) malloc(sizeof(char)*(1+strlen(curepn->data)));
              if (curitem->guid.guid == NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
              strcpy(curitem->guid.guid,curepn->data);
              curitem->guid.ispermalink = 0;
              for (epptr = curepn->attlist; epptr != NULL; epptr = epptr->next)
              {
                if (streq_i(epptr->name,"ispermalink"))
                {
                  if (streq_i(epptr->data, "\"true\"") || streq_i(epptr->data, "true"))
                  {
                    curitem->guid.ispermalink = 1;
                  }
                  else if (streq_i(epptr->data, "\"false\"") || streq_i(epptr->data, "false"))
                  {
                    curitem->guid.ispermalink = 0;
                  }
                }
              }
            }
          }
        }
        else if (streq_i(curepn->name,"source"))
        {
          if (initem && !inimage && !intxtinp)
          {
            if (curitem == NULL)
            {
              if (curchan != NULL)
                curitem = createitempropnode(title,link,desc,curchan->chanid);
              else
                curitem = createitempropnode(title,link,desc,nextchanid);
              if (curitem == NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
              if (title != NULL) free(title);
              if (link != NULL) free(link);
              if (desc != NULL) free(desc);
              title = NULL;
              link = NULL;
              desc = NULL;
            }
            if (curitem->source.url == NULL && curitem->source.name == NULL)
            {
              curitem->source.name = (char *) malloc(sizeof(char)*(1+strlen(curepn->data)));
              if (curitem->source.name == NULL)
              {
                /* Free everything and end. */
                goto OOMEMERROR;
              }
              strcpy(curitem->source.name,curepn->data);
              for (epptr = curepn->attlist; epptr != NULL; epptr = epptr->next)
              {
                if (streq_i(epptr->name,"url"))
                {
                  curitem->source.url = (char *) malloc(sizeof(char)*(1+strlen(epptr->data)));
                  if (curitem->source.url == NULL)
                  {
                    /* Free everything and end. */
                    goto OOMEMERROR;
                  }
                  if (epptr->data[0] == '"' && epptr->data[strlen(epptr->data)-1] == '"' && strlen(epptr->data)>1)
                  {
                    epptr->data[strlen(epptr->data)-1] = 0;
                    strcpy(curitem->source.url,epptr->data+sizeof(char));
                  }
                  else
                  {
                    strcpy(curitem->source.url,epptr->data);
                  }
                  break;
                }
              }
              
            }
          }
        }
        else if (streq_i(curepn->name,"feed"))
        {
          /* It's ATOM!  Abort!  Abort! */
          goto ISATOM;
        }
        
        
        /* Remove the epn and revert to the previous one */
        elementpnode *tepn = NULL;
        if (eproot == curepn)
        {
          eproot = eproot->next;
          freeepn(curepn);
#ifdef DEBUG
          	epndepth--;
#endif
          curepn = eproot;
        }
        else
        {
          for (epptr = eproot; epptr != NULL; epptr = epptr->next)
          {
            if (epptr == curepn) break;
            tepn = epptr;
          }
          if (tepn != NULL)
          {
            tepn->next = curepn->next;
            freeepn(curepn);
#ifdef DEBUG
            	epndepth--;
#endif
            curepn = tepn;
          }
          else
          {
            /* Should not happen! */
            eproot = eproot->next;
            freeepn(eproot);
#ifdef DEBUG
            	epndepth--;
#endif
            curepn = eproot;
          }
        }
        tepn = NULL;
        
      }
    }
    else
    {
      /* Add to whatever... */
      if (ineletag && inelename && ceni<MAX_ELEN)
      {
        curelementname[ceni] = cchar;
        ceni++;
        curelementname[ceni] = 0;
        if (issingletag && (endwith_(curelementname,"[CDATA[") || endwith_(curelementname,"![CDATA[")))
        {
          issingletag = 0;
          inelename = 0;
          ineletag = 0;
          ceni = 0;
          curelementname[0] = 0;
          cedi = strlen(curelementdata);
#ifdef DEBUG
/*          	printf("CDATA: CEDI=%lu\n",cedi);*/
#endif
        }
      }
      else if (ineletag && inattname && cani<MAX_ATTN)
      {
        curattname[cani] = cchar;
        cani++;
      }
      else if (ineletag && inattdata && cadi<MAX_ATTD)
      {
        curattdata[cadi] = cchar;
        cadi++;
      }
      else if ((!ineletag) && curepn != NULL && cedi<MAX_ELED)
      {
        curelementdata[cedi] = cchar;
        cedi++;
        curelementdata[cedi] = 0;
        if (endwith_(curelementdata,"]]>"))
        {
          cedi -= (3*sizeof(char));
          curelementdata[cedi] = 0;
        }
      }
      
    }
    
  }
  int err_end_val;
  
  if (ferror(rf))
  {
    /* Deal with errors. */
    err_end_val = 0;
    goto ERROREND;
  }
  else
  {
    /* Free stuff that we don't need... */
    /* Free local strings */
    free(curelementdata);
    free(curattdata);
    if (title != NULL) free(title);
    title = NULL;
    if (link != NULL) free(link);
    link = NULL;
    if (desc != NULL) free(desc);
    desc = NULL;
    /* Free all epns */
    epptr = eproot;
    while (epptr != NULL)
    {
      curepn = epptr->next;
      freeepn(epptr);
      epptr = curepn;
    }
    eproot = NULL;
    epptr = NULL;
    
    return 1;
  }
  
  /* This next bit is kind of a bodge. */
  
ISATOM:
  err_end_val = -2;
  goto ERROREND;
  
OOMEMERROR:
  err_end_val = -1;
  goto ERROREND;
  
ERROREND:
  /* Free Everything! */
  /* Free local strings */
  free(curelementdata);
  free(curattdata);
  if (title != NULL) free(title);
  title = NULL;
  if (link != NULL) free(link);
  link = NULL;
  if (desc != NULL) free(desc);
  desc = NULL;
  /* Free all epns */
  epptr = eproot;
  while (epptr != NULL)
  {
    curepn = epptr->next;
    freeepn(epptr);
    epptr = curepn;
  }
  eproot = NULL;
  epptr = NULL;
  /* Free versioning info */
  if (rssversion != NULL) free(rssversion);
  rssversion = NULL;
  /* Free All items */
  destroyitems();
  /* Free all channels */
  destroychannels();
  /* Free all categories */
  destroycategories();
  
  return err_end_val;
}

void listdata()
{
  /* This function is for testing the parser-to-LL generation */
  if (rssversion != NULL) printf("RSS Version: %s\n", rssversion);
  for (cpptr = cproot; cpptr != NULL; cpptr = cpptr->next)
  {
    printf("Channel %lu - %s:\n  Link: %s\n  Description: %s\n",cpptr->chanid,cpptr->title,cpptr->link,cpptr->description);
    if (cpptr->language_main != NULL)
    {
      printf("  Language: %s", cpptr->language_main);
      if (cpptr->language_sub != NULL) printf(", %s", cpptr->language_sub);
      printf("\n");
    }
    if (cpptr->copyright != NULL) printf("  Copyright: %s\n", cpptr->copyright);
    if (cpptr->managingeditor != NULL) printf("  Managing Editor: '%s'\n", cpptr->managingeditor);
    if (cpptr->webmaster != NULL) printf("  Webmaster: %s\n", cpptr->webmaster);
    if (cpptr->pubdate.fulldate != NULL)
    {
      printf("  Publication Date: %s (%s, %d/%d/%ld %d:%d:%d %s (%d:%d))\n", 
             cpptr->pubdate.fulldate, cpptr->pubdate.dayname, cpptr->pubdate.daynum, 
             cpptr->pubdate.month, cpptr->pubdate.year, cpptr->pubdate.hour, 
             cpptr->pubdate.minute, cpptr->pubdate.second, cpptr->pubdate.tzone, 
             cpptr->pubdate.gmtoffseth, cpptr->pubdate.gmtoffsetm);
    }
    if (cpptr->lastbuilddate.fulldate != NULL)
    {
      printf("  Last Build Date: %s (%s, %d/%d/%ld %d:%d:%d %s (%d:%d))\n", 
             cpptr->lastbuilddate.fulldate, cpptr->lastbuilddate.dayname, 
             cpptr->lastbuilddate.daynum, cpptr->lastbuilddate.month, 
             cpptr->lastbuilddate.year, cpptr->lastbuilddate.hour, 
             cpptr->lastbuilddate.minute, cpptr->lastbuilddate.second, 
             cpptr->lastbuilddate.tzone, cpptr->lastbuilddate.gmtoffseth, 
             cpptr->lastbuilddate.gmtoffsetm);
    }
    if (cpptr->generator != NULL) printf("  Generator: %s\n", cpptr->generator);
    if (cpptr->docs != NULL) printf("  Documentation: %s\n", cpptr->docs);
    if (cpptr->ttl != 0) printf("  Time To Live: %ld\n", cpptr->ttl);
    if (cpptr->image.url != NULL)
    {
      printf("  Image: %s (%s) --> %s\n", cpptr->image.url, cpptr->image.title, cpptr->image.link);
      if (cpptr->image.description != NULL) printf("    Description: %s\n", cpptr->image.description);
      if (cpptr->image.width > 0) printf("    Width: %ld\n", cpptr->image.width);
      if (cpptr->image.height > 0) printf("    Height: %ld\n", cpptr->image.height);
    }
    int i;
    if (cpptr->skiphours != NULL)
    {
      printf("  Skip Hours (GMT):\n");
      for (i = 0; cpptr->skiphours[i] != -1; i++) printf("  *  %ld\n",cpptr->skiphours[i]);
    }
    if (cpptr->skipdays != NULL)
    {
      printf("  Skip Days:\n");
      for (i = 0; cpptr->skipdays[i] != NULL; i++) printf("  *  %s\n",cpptr->skipdays[i]);
    }
    
    printf("  Categories:\n");
    for (catptr = catroot; catptr != NULL; catptr = catptr->next)
    {
      if (catptr->type == channel_cat && catptr->id.chanid == cpptr->chanid && catptr->category != NULL)
      {
        if (catptr->domain == NULL) printf("  *  %s\n", catptr->category);
        else printf("  *  %s (%s)\n", catptr->category, catptr->domain);
      }
    }
    
    printf("  Items:\n");
    for (ipptr = iproot; ipptr != NULL; ipptr = ipptr->next)
    {
      if (ipptr->chanid == cpptr->chanid)
      {
        printf("    Item %lu - %s\n", ipptr->itemid, ipptr->title);
        printf("      Link: %s\n", ipptr->link);
        printf("      Description: %s\n", ipptr->description);
        if (ipptr->author != NULL) printf("      Author: %s\n", ipptr->author);
        if (ipptr->comments != NULL) printf("      Comments: %s\n", ipptr->comments);
        if (ipptr->enclosure.url != NULL)
        {
          printf("      Enclosure: %s, %lu Bytes", ipptr->enclosure.url, ipptr->enclosure.length);
          if (ipptr->enclosure.type != NULL) printf(", %s", ipptr->enclosure.type);
          printf("\n");
        }
        if (ipptr->guid.guid != NULL)
        {
          if (ipptr->guid.ispermalink != 0) printf("      GUID: %s (Permalink)\n", ipptr->guid.guid);
          else printf("      GUID: %s (Not Permalink!)\n", ipptr->guid.guid);
        }
        if (ipptr->source.name != NULL)
        {
          printf("      Source: %s (%s)\n", ipptr->source.name, ipptr->source.url);
        }
        if (ipptr->image.url != NULL)
        {
          printf("      Image: %s (%s) --> %s\n", ipptr->image.url, ipptr->image.title, ipptr->image.link);
          if (ipptr->image.description != NULL) printf("        Description: %s\n", ipptr->image.description);
          if (ipptr->image.width > 0) printf("        Width: %ld\n", ipptr->image.width);
          if (ipptr->image.height > 0) printf("        Height: %ld\n", ipptr->image.height);
        }
        printf("      Categories:\n");
        for (catptr = catroot; catptr != NULL; catptr = catptr->next)
        {
          if (catptr->type == item_cat && catptr->id.itemid == ipptr->itemid && catptr->category != NULL)
          {
            if (catptr->domain == NULL) printf("      *  %s\n", catptr->category);
            else printf("      *  %s (%s)\n", catptr->category, catptr->domain);
          }
        }
        printf("    --\n");
      }
    }
    
  }
  return;
}

int getencfilename(char *filename, rssenclosure *enc)
{
  if (enc == NULL || filename == NULL) return 0;
  long soffset = searchbackch(enc->url,'/');
  char afn[256] = "";
  if (soffset>0 && enc->url[soffset] == '/')
  {
    strcpy(afn, enc->url+(sizeof(char)*soffset)+sizeof(char));
    char *unwanted = strstr(afn, "?");
    if (unwanted != NULL) unwanted[0] = 0;
    unwanted = strstr(afn, "&");
    if (unwanted != NULL) unwanted[0] = 0;
    strcpy(filename, afn);
    return 1;
  }
  else strcpy(filename, enc->url);
  return 2;
}

int getencfileext(char *fileext, rssenclosure *enc)
{
/* Returns: 0=Error, -1=no enctype, 1=fileext has been set,
            2=fileext has been guessed */
  if (enc == NULL || fileext == NULL) return 0;
  char efn[256] = "";
  int n = getencfilename(efn, enc);
  if (n == 0) return 0;
  char *dotpt = strstr(efn,".");
  char anext[256] = "";
  if (dotpt != NULL && dotpt[0] == '.')
  {
    strcpy(anext, dotpt+sizeof(char));
    if (streq_i(anext,"asp") || streq_i(anext,"php") || streq_i(anext,"cgi") || streq_i(anext,"pl") || streq_i(anext, "py") || startsame_i(anext, "htm") || startsame_i(anext,"sht") || startsame_(anext,"xht") || startsame_(anext,"mht"))
    {
      /* Resort to type */
    }
    else
    {
      strcpy(fileext, anext);
      return 1;
    }
  }
  /* Judge based on type */
  if (enc->type == NULL) return -1;
  /* Audio */
  if (streq_i(enc->type,"audio/mp3") || streq_i(enc->type,"audio/mpeg") || streq_i(enc->type,"audio/mpeg3") || streq_i(enc->type,"audio/x-mpeg-3"))
  {
    strcpy(fileext,"mp3");
    return 1;
  }
  if (streq_i(enc->type,"audio/aiff") || streq_i(enc->type,"audio/x-aiff") || streq_i(enc->type,"audio/aif"))
  {
    strcpy(fileext,"aif");
    return 1;
  }
  if (streq_i(enc->type,"audio/adcpm"))
  {
    strcpy(fileext,"adp");
    return 1;
  }
  if (streq_i(enc->type,"audio/basic") || streq_i(enc->type, "audio/x-au"))
  {
    strcpy(fileext,"au");
    return 1;
  }
  if (streq_i(enc->type,"audio/midi") || streq_i(enc->type,"audio/x-mid") || streq_i(enc->type,"audio/x-midi") || streq_i(enc->type,"music/crescendo") || streq_i(enc->type, "application/x-midi") || streq_i(enc->type,"x-music/x-midi"))
  {
    strcpy(fileext,"mid");
    return 1;
  }
  if (streq_i(enc->type,"audio/mp4"))
  {
    strcpy(fileext,"mp4a");
    return 1;
  }
  if (streq_i(enc->type,"audio/ogg"))
  {
    strcpy(fileext,"oga");
    return 1;
  }
  if (streq_i(enc->type,"audio/vnd.dece.audio"))
  {
    strcpy(fileext,"uva");
    return 1;
  }
  if (streq_i(enc->type,"audio/vnd.digital-winds"))
  {
    strcpy(fileext,"eol");
    return 1;
  }
  if (streq_i(enc->type,"audio/vnd.dra"))
  {
    strcpy(fileext,"dra");
    return 1;
  }
  if (streq_i(enc->type,"audio/vnd.dts"))
  {
    strcpy(fileext,"dts");
    return 1;
  }
  if (streq_i(enc->type,"audio/vnd.dts.hd"))
  {
    strcpy(fileext,"dtshd");
    return 1;
  }
  if (streq_i(enc->type,"audio/vnd.lucent.voice"))
  {
    strcpy(fileext,"lvp");
    return 1;
  }
  if (streq_i(enc->type,"audio/vnd.ms-playready.media.pya"))
  {
    strcpy(fileext,"pya");
    return 1;
  }
  if (streq_i(enc->type,"audio/vnd.nuera.ecelp4800"))
  {
    strcpy(fileext,"ecelp4800");
    return 1;
  }
  if (streq_i(enc->type,"audio/vnd.nuera.ecelp7470"))
  {
    strcpy(fileext,"ecelp7470");
    return 1;
  }
  if (streq_i(enc->type,"audio/vnd.nuera.ecelp9600"))
  {
    strcpy(fileext,"ecelp9600");
    return 1;
  }
  if (streq_i(enc->type,"audio/vnd.rip"))
  {
    strcpy(fileext,"rip");
    return 1;
  }
  if (streq_i(enc->type,"audio/webm"))
  {
    strcpy(fileext,"weba");
    return 1;
  }
  if (streq_i(enc->type,"audio/x-aac"))
  {
    strcpy(fileext,"aac");
    return 1;
  }
  if (streq_i(enc->type,"audio/x-mpegurl") || streq_i(enc->type,"audio/x-mpequrl"))
  {
    strcpy(fileext,"m3u");
    return 1;
  }
  if (streq_i(enc->type,"audio/x-ms-wax"))
  {
    strcpy(fileext,"wax");
    return 1;
  }
  if (streq_i(enc->type,"audio/x-ms-wma"))
  {
    strcpy(fileext,"wma");
    return 1;
  }
  if (streq_i(enc->type,"audio/x-pn-realaudio"))
  {
    strcpy(fileext,"ram");
    return 1;
  }
  if (streq_i(enc->type,"audio/x-pn-realaudio-plugin"))
  {
    strcpy(fileext,"rmp");
    return 1;
  }
  if (streq_i(enc->type,"audio/x-wav") || streq_i(enc->type,"audio/wav"))
  {
    strcpy(fileext,"wav");
    return 1;
  }
  if (streq_i(enc->type,"audio/make"))
  {
    strcpy(fileext,"funk");
    return 1;
  }
  if (streq_i(enc->type,"audio/x-gsm"))
  {
    strcpy(fileext,"gsm");
    return 1;
  }
  if (streq_i(enc->type,"audio/it"))
  {
    strcpy(fileext,"it");
    return 1;
  }
  if (streq_i(enc->type,"audio/x-jam") || streq_i(enc->type,"application/vnd.jam"))
  {
    strcpy(fileext,"jam");
    return 1;
  }
  if (streq_i(enc->type,"music/x-karaoke"))
  {
    strcpy(fileext,"kar");
    return 1;
  }
  if (streq_i(enc->type,"audio/nspaudio") || streq_i(enc->type,"audio/x-nspaudio"))
  {
    strcpy(fileext,"la");
    return 1;
  }
  if (streq_i(enc->type,"audio/x-liveaudio"))
  {
    strcpy(fileext,"lam");
    return 1;
  }
  if (streq_i(enc->type,"audio/x-vnd.audioexplosion.mjuicemediafile"))
  {
    strcpy(fileext,"mjf");
    return 1;
  }
  if (streq_i(enc->type,"audio/mod") || streq_i(enc->type,"audio/x-mod"))
  {
    strcpy(fileext,"mod");
    return 1;
  }
  if (streq_i(enc->type,"audio/x-mpeq2a"))
  {
    strcpy(fileext,"mp2");
    return 1;
  }
  if (streq_i(enc->type,"audio/make.my.funk"))
  {
    strcpy(fileext,"pfunk");
    return 1;
  }
  if (streq_i(enc->type,"audio/vnd.qcelp"))
  {
    strcpy(fileext,"qcp");
    return 1;
  }
  if (streq_i(enc->type,"application/vnd.rn-realmedia"))
  {
    strcpy(fileext,"rm");
    return 1;
  }
  if (streq_i(enc->type,"audio/x-jam"))
  {
    strcpy(fileext,"jam");
    return 1;
  }
  if (streq_i(enc->type,"application/ringing-tones") || streq_i(enc->type,"application/vnd.nokia.ringing-tone"))
  {
    strcpy(fileext,"rng");
    return 1;
  }
  if (streq_i(enc->type,"application/vnd.rn-realplayer"))
  {
    strcpy(fileext,"rnx");
    return 1;
  }
  if (streq_i(enc->type,"audio/s3m"))
  {
    strcpy(fileext,"s3m");
    return 1;
  }
  if (streq_i(enc->type,"audio/x-psid"))
  {
    strcpy(fileext,"sid");
    return 1;
  }
  if (streq_i(enc->type,"audio/x-adcpm"))
  {
    strcpy(fileext,"snd");
    return 1;
  }
  if (streq_i(enc->type,"audio/tsp-audio"))
  {
    strcpy(fileext,"tsi");
    return 1;
  }
  if (streq_i(enc->type,"audio/tsplayer"))
  {
    strcpy(fileext,"tsp");
    return 1;
  }
  if (streq_i(enc->type,"audio/voc") || streq_i(enc->type,"audio/x-voc"))
  {
    strcpy(fileext,"voc");
    return 1;
  }
  if (streq_i(enc->type,"audio/voxware"))
  {
    strcpy(fileext,"vox");
    return 1;
  }
  if (streq_i(enc->type,"audio/x-twinvq-plugin"))
  {
    strcpy(fileext,"vqe");
    return 1;
  }
  if (streq_i(enc->type,"audio/x-twinvq"))
  {
    strcpy(fileext,"vqf");
    return 1;
  }
  if (streq_i(enc->type,"application/x-vnd.audioexplosion.mzz"))
  {
    strcpy(fileext,"mzz");
    return 1;
  }
  if (streq_i(enc->type,"application/sounder"))
  {
    strcpy(fileext,"sdr");
    return 1;
  }
  if (streq_i(enc->type,"application/vocaltec-media-desc"))
  {
    strcpy(fileext,"vmd");
    return 1;
  }
  if (streq_i(enc->type,"application/vocaltec-media-file"))
  {
    strcpy(fileext,"vmf");
    return 1;
  }
  if (streq_i(enc->type,"audio/xm"))
  {
    strcpy(fileext,"xm");
    return 1;
  }
  if (streq_i(enc->type,"application/vnd.audiograph"))
  {
    strcpy(fileext,"aep");
    return 1;
  }
  if (streq_i(enc->type,"application/vnd.dolby.mlp"))
  {
    strcpy(fileext,"mlp");
    return 1;
  }
  if (streq_i(enc->type,"application/vnd.mfmp"))
  {
    strcpy(fileext,"mfm");
    return 1;
  }
  if (streq_i(enc->type,"application/vnd.ms-wpl"))
  {
    strcpy(fileext,"wpl");
    return 1;
  }
  if (streq_i(enc->type,"application/vnd.mseq"))
  {
    strcpy(fileext,"mseq");
    return 1;
  }
  if (streq_i(enc->type,"application/vnd.musician"))
  {
    strcpy(fileext,"mus");
    return 1;
  }
  if (streq_i(enc->type,"application/vnd.yamaha.smaf-audio"))
  {
    strcpy(fileext,"saf");
    return 1;
  }
  if (streq_i(enc->type,"application/x-dtbook+xml"))
  {
    strcpy(fileext,"dtb");
    return 1;
  }
  if (streq_i(enc->type,"application/x-dtbresource+xml"))
  {
    strcpy(fileext,"res");
    return 1;
  }
  /* Video */
  if (streq_i(enc->type,"application/vnd.muvee.style"))
  {
    strcpy(fileext,"msty");
    return 1;
  }
  if (streq_i(enc->type,"video/3gpp"))
  {
    strcpy(fileext,"3gp");
    return 1;
  }
  if (streq_i(enc->type,"video/3gpp2"))
  {
    strcpy(fileext,"3g2");
    return 1;
  }
  if (streq_i(enc->type,"video/h261"))
  {
    strcpy(fileext,"h261");
    return 1;
  }
  if (streq_i(enc->type,"video/h263"))
  {
    strcpy(fileext,"h263");
    return 1;
  }
  if (streq_i(enc->type,"video/h264"))
  {
    strcpy(fileext,"h264");
    return 1;
  }
  if (streq_i(enc->type,"video/jpeg"))
  {
    strcpy(fileext,"jpgv");
    return 1;
  }
  if (streq_i(enc->type,"video/jpm"))
  {
    strcpy(fileext,"jpm");
    return 1;
  }
  if (streq_i(enc->type,"video/mj2"))
  {
    strcpy(fileext,"mj2");
    return 1;
  }
  if (streq_i(enc->type,"video/mp4") || streq_i(enc->type,"application/mp4"))
  {
    strcpy(fileext,"mp4");
    return 1;
  }
  if (streq_i(enc->type,"video/mpeg"))
  {
    strcpy(fileext,"mpeg");
    return 1;
  }
  if (streq_i(enc->type,"video/ogg"))
  {
    strcpy(fileext,"ogv");
    return 1;
  }
  if (streq_i(enc->type,"video/quicktime"))
  {
    strcpy(fileext,"qt");
    return 1;
  }
  if (streq_i(enc->type,"video/vnd.dece.hd"))
  {
    strcpy(fileext,"uvh");
    return 1;
  }
  if (streq_i(enc->type,"video/vnd.dece.mobile"))
  {
    strcpy(fileext,"uvm");
    return 1;
  }
  if (streq_i(enc->type,"video/vnd.dece.pd"))
  {
    strcpy(fileext,"uvp");
    return 1;
  }
  if (streq_i(enc->type,"video/vnd.dece.sd"))
  {
    strcpy(fileext,"uvs");
    return 1;
  }
  if (streq_i(enc->type,"video/vnd.dece.video"))
  {
    strcpy(fileext,"uvv");
    return 1;
  }
  if (streq_i(enc->type,"video/vnd.fvt"))
  {
    strcpy(fileext,"fvt");
    return 1;
  }
  if (streq_i(enc->type,"video/vnd.mpegurl"))
  {
    strcpy(fileext,"mxu");
    return 1;
  }
  if (streq_i(enc->type,"video/vnd.ms-playready.media.pyv"))
  {
    strcpy(fileext,"pyv");
    return 1;
  }
  if (streq_i(enc->type,"video/vnd.uvvu.mp4"))
  {
    strcpy(fileext,"uvu");
    return 1;
  }
  if (streq_i(enc->type,"video/vnd.vivo") || streq_i(enc->type,"video/vivo"))
  {
    strcpy(fileext,"viv");
    return 1;
  }
  if (streq_i(enc->type,"video/webm"))
  {
    strcpy(fileext,"webm");
    return 1;
  }
  if (streq_i(enc->type,"video/x-f4v"))
  {
    strcpy(fileext,"f4v");
    return 1;
  }
  if (streq_i(enc->type,"video/x-fli") || streq_i(enc->type,"video/fli"))
  {
    strcpy(fileext,"fli");
    return 1;
  }
  if (streq_i(enc->type,"video/x-flv"))
  {
    strcpy(fileext,"flv");
    return 1;
  }
  if (streq_i(enc->type,"video/x-m4v"))
  {
    strcpy(fileext,"m4v");
    return 1;
  }
  if (streq_i(enc->type,"video/x-ms-asf"))
  {
    strcpy(fileext,"asf");
    return 1;
  }
  if (streq_i(enc->type,"video/x-ms-wm"))
  {
    strcpy(fileext,"wm");
    return 1;
  }
  if (streq_i(enc->type,"video/x-ms-wmv"))
  {
    strcpy(fileext,"wmv");
    return 1;
  }
  if (streq_i(enc->type,"video/x-ms-wmx"))
  {
    strcpy(fileext,"wmx");
    return 1;
  }
  if (streq_i(enc->type,"video/x-ms-wvx"))
  {
    strcpy(fileext,"wvx");
    return 1;
  }
  if (streq_i(enc->type,"video/x-msvideo") || streq_i(enc->type,"video/avi") || streq_i(enc->type,"video/msvideo") || streq_i(enc->type,"application/x-troff-msvideo"))
  {
    strcpy(fileext,"avi");
    return 1;
  }
  if (streq_i(enc->type,"video/x-sgi-movie"))
  {
    strcpy(fileext,"movie");
    return 1;
  }
  if (streq_i(enc->type,"video/animaflex"))
  {
    strcpy(fileext,"afl");
    return 1;
  }
  if (streq_i(enc->type,"application/x-navi-animation"))
  {
    strcpy(fileext,"ani");
    return 1;
  }
  if (streq_i(enc->type,"video/x-f4v"))
  {
    strcpy(fileext,"f4v");
    return 1;
  }
  if (streq_i(enc->type,"application/x-mplayer2") || streq_i(enc->type,"video/x-ms-asf-plugin"))
  {
    strcpy(fileext,"asx");
    return 1;
  }
  if (streq_i(enc->type,"video/avs-video"))
  {
    strcpy(fileext,"avs");
    return 1;
  }
  if (streq_i(enc->type,"application/x-director"))
  {
    strcpy(fileext,"dcr");
    return 1;
  }
  if (streq_i(enc->type,"video/x-dv"))
  {
    strcpy(fileext,"dif");
    return 1;
  }
  if (streq_i(enc->type,"video/dl") || streq_i(enc->type,"video/x-dl"))
  {
    strcpy(fileext,"dl");
    return 1;
  }
  if (streq_i(enc->type,"application/x-dvi"))
  {
    strcpy(fileext,"dvi");
    return 1;
  }
  if (streq_i(enc->type,"video/x-atomic3d-feature"))
  {
    strcpy(fileext,"fmf");
    return 1;
  }
  if (streq_i(enc->type,"video/x-gl") || streq_i(enc->type,"video/gl"))
  {
    strcpy(fileext,"gl");
    return 1;
  }
  if (streq_i(enc->type,"video/x-isvideo"))
  {
    strcpy(fileext,"isu");
    return 1;
  }
  if (streq_i(enc->type,"video/x-motion-jpeg"))
  {
    strcpy(fileext,"mjpg");
    return 1;
  }
  if (streq_i(enc->type,"video/vnd.rn-realvideo"))
  {
    strcpy(fileext,"rv");
    return 1;
  }
  if (streq_i(enc->type,"video/x-scm"))
  {
    strcpy(fileext,"scm");
    return 1;
  }
  if (streq_i(enc->type,"application/streamingmedia"))
  {
    strcpy(fileext,"ssm");
    return 1;
  }
  if (streq_i(enc->type,"application/x-shockwave-flash"))
  {
    strcpy(fileext,"swf");
    return 1;
  }
  if (streq_i(enc->type,"video/vdo"))
  {
    strcpy(fileext,"vdo");
    return 1;
  }
  if (streq_i(enc->type,"video/vosaic"))
  {
    strcpy(fileext,"vos");
    return 1;
  }
  if (streq_i(enc->type,"video/x-amt-demorun"))
  {
    strcpy(fileext,"xdr");
    return 1;
  }
  if (streq_i(enc->type,"xgl/movie"))
  {
    strcpy(fileext,"xmz");
    return 1;
  }
  if (streq_i(enc->type,"video/x-amt-showrun"))
  {
    strcpy(fileext,"xsr");
    return 1;
  }
  if (streq_i(enc->type,"application/mp21"))
  {
    strcpy(fileext,"m21");
    return 1;
  }
  if (streq_i(enc->type,"application/ogg"))
  {
    strcpy(fileext,"ogx");
    return 1;
  }
  if (streq_i(enc->type,"application/vnd.apple.mpegurl"))
  {
    strcpy(fileext,"m3u8");
    return 1;
  }
  if (streq_i(enc->type,"application/vnd.dvb.ait"))
  {
    strcpy(fileext,"ait");
    return 1;
  }
  if (streq_i(enc->type,"application/vnd.dvb.service"))
  {
    strcpy(fileext,"svc");
    return 1;
  }
  if (streq_i(enc->type,"application/vnd.epson.esf"))
  {
    strcpy(fileext,"esf");
    return 1;
  }
  if (streq_i(enc->type,"application/vnd.epson.msf"))
  {
    strcpy(fileext,"msf");
    return 1;
  }
  if (streq_i(enc->type,"application/vnd.epson.quickanime"))
  {
    strcpy(fileext,"qam");
    return 1;
  }
  if (streq_i(enc->type,"application/vnd.epson.salt"))
  {
    strcpy(fileext,"slt");
    return 1;
  }
  if (streq_i(enc->type,"application/vnd.epson.ssf"))
  {
    strcpy(fileext,"ssf");
    return 1;
  }
  if (streq_i(enc->type,"application/vnd.fluxtime.clip"))
  {
    strcpy(fileext,"ftc");
    return 1;
  }
  if (streq_i(enc->type,"application/vnd.frogans.fnc"))
  {
    strcpy(fileext,"fnc");
    return 1;
  }
  if (streq_i(enc->type,"application/vnd.frogans.ltf"))
  {
    strcpy(fileext,"ltf");
    return 1;
  }
  if (streq_i(enc->type,"application/vnd.tmobile-livetv"))
  {
    strcpy(fileext,"tmo");
    return 1;
  }
  if (streq_i(enc->type,"application/x-cdlink"))
  {
    strcpy(fileext,"vcd");
    return 1;
  }
  /* Images */
  
  if (streq_i(enc->type,"image/bmp") || streq_i(enc->type,"image/x-windows-bmp"))
  {
    strcpy(fileext,"bmp");
    return 1;
  }
  if (streq_i(enc->type,"image/cgm"))
  {
    strcpy(fileext,"cgm");
    return 1;
  }
  if (streq_i(enc->type,"image/g3fax"))
  {
    strcpy(fileext,"g3");
    return 1;
  }
  if (streq_i(enc->type,"image/gif"))
  {
    strcpy(fileext,"gif");
    return 1;
  }
  if (streq_i(enc->type,"image/ief"))
  {
    strcpy(fileext,"ief");
    return 1;
  }
  if (streq_i(enc->type,"image/x-jps"))
  {
    strcpy(fileext,"jps");
    return 1;
  }
  if (streq_i(enc->type,"image/jutvision"))
  {
    strcpy(fileext,"jut");
    return 1;
  }
  if (streq_i(enc->type,"image/jpeg") || streq_i(enc->type,"image/jpg") || streq_i(enc->type,"image/x-citrix-jpeg"))
  {
    strcpy(fileext,"jpg");
    return 1;
  }
  if (streq_i(enc->type,"image/ktx"))
  {
    strcpy(fileext,"ktx");
    return 1;
  }
  if (streq_i(enc->type,"image/vasa") || streq_i(enc->type,"text/mcf"))
  {
    strcpy(fileext,"mcf");
    return 1;
  }
  if (streq_i(enc->type,"image/naplps"))
  {
    strcpy(fileext,"nap");
    return 1;
  }
  if (streq_i(enc->type,"image/x-niff"))
  {
    strcpy(fileext,"nif");
    return 1;
  }
  if (streq_i(enc->type,"image/pjpeg"))
  {
    strcpy(fileext,"pjpeg");
    return 1;
  }
  if (streq_i(enc->type,"image/png") || streq_i(enc->type,"image/x-png")  || streq_i(enc->type,"image/x-citrix-png"))
  {
    strcpy(fileext,"png");
    return 1;
  }
  if (streq_i(enc->type,"image/prs.btif"))
  {
    strcpy(fileext,"btif");
    return 1;
  }
  if (streq_i(enc->type,"image/svg+xml") || streq_i(enc->type,"image/svg"))
  {
    strcpy(fileext,"svg");
    return 1;
  }
  if (streq_i(enc->type,"image/tiff") || streq_i(enc->type,"image/x-tiff"))
  {
    strcpy(fileext,"tiff");
    return 1;
  }
  if (streq_i(enc->type,"image/vnd.adobe.photoshop"))
  {
    strcpy(fileext,"psd");
    return 1;
  }
  if (streq_i(enc->type,"image/vnd.dece.graphic"))
  {
    strcpy(fileext,"uvi");
    return 1;
  }
  if (streq_i(enc->type,"image/vnd.djvu"))
  {
    strcpy(fileext,"djvu");
    return 1;
  }
  if (streq_i(enc->type,"image/vnd.dvb.subtitle"))
  {
    strcpy(fileext,"sub");
    return 1;
  }
  if (streq_i(enc->type,"image/fif") || streq_i(enc->type,"application/fractals"))
  {
    strcpy(fileext,"fif");
    return 1;
  }
  if (streq_i(enc->type,"image/vnd.dwg") || streq_i(enc->type,"image/x-dwg"))
  {
    strcpy(fileext,"dwg");
    return 1;
  }
  if (streq_i(enc->type,"x-world/x-svr"))
  {
    strcpy(fileext,"svr");
    return 1;
  }
  if (streq_i(enc->type,"image/vnd.dxf") || streq_i(enc->type,"applicatin/dxf"))
  {
    strcpy(fileext,"dxf");
    return 1;
  }
  if (streq_i(enc->type,"image/vnd.fastbidsheet"))
  {
    strcpy(fileext,"fbs");
    return 1;
  }
  if (streq_i(enc->type,"image/vnd.fpx"))
  {
    strcpy(fileext,"fpx");
    return 1;
  }
  if (streq_i(enc->type,"image/vnd.fst"))
  {
    strcpy(fileext,"fst");
    return 1;
  }
  if (streq_i(enc->type,"image/vnd.fujixerox.edmics-mmr"))
  {
    strcpy(fileext,"mmr");
    return 1;
  }
  if (streq_i(enc->type,"image/vnd.fujixerox.edmics-rlc"))
  {
    strcpy(fileext,"rlc");
    return 1;
  }
  if (streq_i(enc->type,"image/vnd.ms-modi"))
  {
    strcpy(fileext,"mdi");
    return 1;
  }
  if (streq_i(enc->type,"image/vnd.net-fpx"))
  {
    strcpy(fileext,"npx");
    return 1;
  }
  if (streq_i(enc->type,"image/vnd.wap.wbmp"))
  {
    strcpy(fileext,"wbmp");
    return 1;
  }
  if (streq_i(enc->type,"image/vnd.xiff"))
  {
    strcpy(fileext,"xif");
    return 1;
  }
  if (streq_i(enc->type,"image/webp"))
  {
    strcpy(fileext,"webp");
    return 1;
  }
  if (streq_i(enc->type,"image/x-cmu-raster") || streq_i(enc->type,"image/cmu-raster") || streq_i(enc->type,"application/x-cmu-raster"))
  {
    strcpy(fileext,"ras");
    return 1;
  }
  if (streq_i(enc->type,"image/x-freehand"))
  {
    strcpy(fileext,"fh");
    return 1;
  }
  if (streq_i(enc->type,"image/x-icon"))
  {
    strcpy(fileext,"ico");
    return 1;
  }
  if (streq_i(enc->type,"image/x-pcx"))
  {
    strcpy(fileext,"pcx");
    return 1;
  }
  if (streq_i(enc->type,"image/x-pict") || streq_i(enc->type,"image/pict"))
  {
    strcpy(fileext,"pic");
    return 1;
  }
  if (streq_i(enc->type,"image/x-portable-anymap"))
  {
    strcpy(fileext,"pnm");
    return 1;
  }
  if (streq_i(enc->type,"image/x-portable-bitmap"))
  {
    strcpy(fileext,"pbm");
    return 1;
  }
  if (streq_i(enc->type,"image/x-portable-graymap"))
  {
    strcpy(fileext,"pgm");
    return 1;
  }
  if (streq_i(enc->type,"image/x-portable-pixmap"))
  {
    strcpy(fileext,"ppm");
    return 1;
  }
  if (streq_i(enc->type,"image/x-rgb"))
  {
    strcpy(fileext,"rgb");
    return 1;
  }
  if (streq_i(enc->type,"image/vnd.rn-realflash"))
  {
    strcpy(fileext,"rf");
    return 1;
  }
  if (streq_i(enc->type,"image/vnd.rn-realpix"))
  {
    strcpy(fileext,"rp");
    return 1;
  }
  if (streq_i(enc->type,"image/x-xbitmap") || streq_i(enc->type,"image/x-xbm") || streq_i(enc->type,"image/xbm"))
  {
    strcpy(fileext,"xbm");
    return 1;
  }
  if (streq_i(enc->type,"xlg/drawing"))
  {
    strcpy(fileext,"xgz");
    return 1;
  }
  if (streq_i(enc->type,"image/x-xpixmap") || streq_i(enc->type,"image/xpm"))
  {
    strcpy(fileext,"xpm");
    return 1;
  }
  if (streq_i(enc->type,"image/x-windowdump") || streq_i(enc->type,"image/x-xwd"))
  {
    strcpy(fileext,"xwd");
    return 1;
  }
  if (streq_i(enc->type,"image/x-jg"))
  {
    strcpy(fileext,"art");
    return 1;
  }
  if (streq_i(enc->type,"application/vnd.3gpp.pic-bw-large"))
  {
    strcpy(fileext,"plb");
    return 1;
  }
  if (streq_i(enc->type,"application/vnd.3gpp.pic-bw-small"))
  {
    strcpy(fileext,"psb");
    return 1;
  }
  if (streq_i(enc->type,"application/vnd.3gpp.pic-bw-var"))
  {
    strcpy(fileext,"pvb");
    return 1;
  }
  if (streq_i(enc->type,"application/vnd.chemdraw+xml"))
  {
    strcpy(fileext,"cdxml");
    return 1;
  }
  if (streq_i(enc->type,"application/vnd.dpgraph"))
  {
    strcpy(fileext,"dpg");
    return 1;
  }
  if (streq_i(enc->type,"application/vnd.ezpix-album"))
  {
    strcpy(fileext,"ez2");
    return 1;
  }
  if (streq_i(enc->type,"application/vnd.ezpix-package"))
  {
    strcpy(fileext,"ez3");
    return 1;
  }
  if (streq_i(enc->type,"application/vnd.flographit"))
  {
    strcpy(fileext,"gph");
    return 1;
  }
  if (streq_i(enc->type,"application/vnd.kodak-descriptor"))
  {
    strcpy(fileext,"sse");
    return 1;
  }
  if (streq_i(enc->type,"application/vnd.micrographx.flo") || streq_i(enc->type,"image/florian"))
  {
    strcpy(fileext,"flo");
    return 1;
  }
  if (streq_i(enc->type,"application/vnd.micrographx.igx"))
  {
    strcpy(fileext,"igx");
    return 1;
  }
  if (streq_i(enc->type,"application/vnd.oasis.opendocument.image"))
  {
    strcpy(fileext,"odi");
    return 1;
  }
  if (streq_i(enc->type,"application/vnd.oasis.opendocument.image-template"))
  {
    strcpy(fileext,"oti");
    return 1;
  }
  if (streq_i(enc->type,"application/x-font-bdf"))
  {
    strcpy(fileext,"bdf");
    return 1;
  }
  /* Other */
  if (streq_i(enc->type,"application/octet-stream"))
  {
    strcpy(fileext,"bin");
    return 1;
  }
  if (streq_i(enc->type,"text/html"))
  {
    strcpy(fileext,"htm");
    return 1;
  }
  if (streq_i(enc->type,"text/x-script.perl"))
  {
    strcpy(fileext,"pl");
    return 1;
  }
  if (streq_i(enc->type,"text/x-script.python"))
  {
    strcpy(fileext,"py");
    return 1;
  }
  if (streq_i(enc->type,"text/asp"))
  {
    strcpy(fileext,"asp");
    return 1;
  }
  if (streq_i(enc->type,"text/plain") || startsame_i(enc->type,"text/"))
  {
    strcpy(fileext,"txt");
    return 1;
  }
  
  dotpt = strstr(enc->type,"/");
  if (dotpt == NULL)
  {
    strcpy(fileext,enc->type);
    return 2;
  }
  strcpy(fileext,dotpt+sizeof(char));
  return 2;
}

int parsenewchannel(FILE *chf, char *url, int dlcode)
{ /* for dlcode values, see parser.h */
  /* Returns: 1=worked, 0=File reading error, -1=Memory error, -2=Not RSS,
              -3=DB Error, -4=File System Error, -5=Config error */
  int rv = 0;
  unsigned long long dbchanid, dbitemid;
  unsigned long llchanid, llitemid;
  if (chf == NULL || url == NULL) return 0;
  if (opendb(1) == 0) return -3;
  rv = parsersstoll(chf);
  if (rv != 1) return rv;
#ifdef DEBUG
  	printf("Preparing Channel Statement.\n");
#endif
  rv = preparechannelstatement();
  if (!rv) return -3;
#ifdef DEBUG
  	printf("Preparing Channel Category Statement.\n");
#endif
  rv = preparechancatstatement();
  if (!rv)
  {
#ifdef DEBUG
  	printf("ChanCatErr.\n");
#endif
    finalisechannelstatement();
    return -3;
  }
#ifdef DEBUG
  	printf("Preparing Item DL Statement.\n");
#endif
  rv = prepareitemstatementdownloaded();
  if (!rv)
  {
#ifdef DEBUG
  	printf("ItemDLErr.\n");
#endif
    finalisechannelstatement();
    finalisechancatstatement();
    return -3;
  }
#ifdef DEBUG
  	printf("Preparing Item NDL Statement.\n");
#endif
  rv = prepareitemstatementnotdownloaded();
  if (!rv)
  {
#ifdef DEBUG
  	printf("ItemNDLErr.\n");
#endif
    finalisechannelstatement();
    finalisechancatstatement();
    finaliseitemdlstatement();
    return -3;
  }
#ifdef DEBUG
  	printf("Preparing Item Category Statement.\n");
#endif
  rv = prepareitemcatstatement();
  if (!rv)
  {
    finalisechannelstatement();
    finalisechancatstatement();
    finaliseitemdlstatement();
    finaliseitemndlstatement();
    return -3;
  }
  
  char *poddir = getsettingdata("PODCAST_DIR");
  if (poddir == NULL)
  {
    fprintf(stderr,"Error: Out of Memory!\n");
    finalisechannelstatement();
    finalisechancatstatement();
    finaliseitemdlstatement();
    finaliseitemndlstatement();
    finaliseitemcatstatement();
    return -1;
  }
  else if (poddir[0] == 0)
  {
    fprintf(stderr,"Error: Podcast Directory not set!\n");
    free(poddir);
    finalisechannelstatement();
    finalisechancatstatement();
    finaliseitemdlstatement();
    finaliseitemndlstatement();
    finaliseitemcatstatement();
    return -5;
  }
  char *dirsep = getsettingdata("DIR_SEPARATOR");
  if (dirsep == NULL)
  {
    fprintf(stderr,"Error: Out of Memory!\n");
    free(poddir);
    finalisechannelstatement();
    finalisechancatstatement();
    finaliseitemdlstatement();
    finaliseitemndlstatement();
    finaliseitemcatstatement();
    return -1;
  }
  else if (dirsep[0] == 0)
  {
    fprintf(stderr,"Error: Directory Separator not set!\n");
    free(dirsep);
    free(poddir);
    finalisechannelstatement();
    finalisechancatstatement();
    finaliseitemdlstatement();
    finaliseitemndlstatement();
    finaliseitemcatstatement();
    return -5;
  }
  
  char *chandir = NULL, *chanpath = NULL;
  char *itemofn = NULL, *itemofext = NULL, *itemtfn = NULL, *dotpos = NULL;
  char *itemfn = NULL;
  int dlexcept = 0;
  dbitemid = 0;
  itempropnode *newestitem = NULL;
  rssenclosure *latestenc = NULL;
  /* Channels */
  for (cpptr = cproot; cpptr != NULL; cpptr = cpptr->next)
  {
#ifdef DEBUG
  	printf("cpptr->title='%s'.\n",cpptr->title);
#endif
    chandir = (char *) malloc(sizeof(char)*2*(51+strlen(cpptr->title)));
    if (chandir == NULL)
    {
      fprintf(stderr,"Error: Out of Memory creating channel '%s'!\n", cpptr->title);
      free(dirsep);
      finalisechannelstatement();
      finalisechancatstatement();
      free(poddir);
      finaliseitemdlstatement();
      finaliseitemndlstatement();
      finaliseitemcatstatement();
      return -1;
    }
    if (mkchandir(chandir,cpptr->title) == 0)
    {
      fprintf(stderr,"Error creating directory for channel '%s'!\n", cpptr->title);
      free(dirsep);
      free(chandir);
      free(poddir);
      finalisechannelstatement();
      finalisechancatstatement();
      finaliseitemdlstatement();
      finaliseitemndlstatement();
      finaliseitemcatstatement();
      return -4;
    }
#ifdef DEBUG
  	printf("ChanDir='%s'.\n",chandir);
#endif
    
    dbchanid = addchannel(cpptr, url, rssversion, chandir);
#ifdef DEBUG
  	printf("ChanID=%llu.\n",dbchanid);
  	/*fprintf(stderr,"ChanID=%llu.\n",dbchanid);*/
#endif
    if (dbchanid == 0)
    {
      fprintf(stderr,"Error adding channel '%s' to database!\n", cpptr->title);
      free(dirsep);
      free(chandir);
      free(poddir);
      finalisechannelstatement();
      finalisechancatstatement();
      finaliseitemdlstatement();
      finaliseitemndlstatement();
      finaliseitemcatstatement();
      return -3;
    }
    llchanid = cpptr->chanid;
    chanpath = (char *) malloc(sizeof(char)*(3+strlen(poddir)+strlen(dirsep)+strlen(chandir)));
    if (chanpath == NULL)
    {
      fprintf(stderr,"Error: Out of Memory creating channel '%s'!\n", cpptr->title);
      free(dirsep);
      free(chandir);
      finalisechannelstatement();
      finalisechancatstatement();
      free(poddir);
      finaliseitemdlstatement();
      finaliseitemndlstatement();
      finaliseitemcatstatement();
      return -1;
    }
    strcpy(chanpath,poddir);
    strcat(chanpath,dirsep);
    strcat(chanpath,chandir);
    /*free(chandir);
    chandir = NULL;*/
    /* Channel Categories */
    for (catptr = catroot; catptr != NULL; catptr = catptr->next)
    {
      if (catptr->type == channel_cat && catptr->id.chanid == llchanid)
      {
        rv = addchancat(dbchanid,catptr);
        if (rv == 0)
        {
          fprintf(stderr,"Error adding channel category '%s' to database!\n", catptr->category);
          free(poddir);
          free(dirsep);
          free(chanpath);
          free(chandir);
          finalisechannelstatement();
          finalisechancatstatement();
          finaliseitemdlstatement();
          finaliseitemndlstatement();
          finaliseitemcatstatement();
          return -3;
        }
      }
    }
    /* Items */
    for (ipptr = iproot; ipptr != NULL; ipptr = ipptr->next)
    {
      if (ipptr->chanid == llchanid)
      {
        if (ipptr->enclosure.url != NULL)
        {
          /* Get item filename */
          itemofn = (char *) malloc(sizeof(char)*(1+strlen(ipptr->enclosure.url)));
          if (itemofn == NULL)
          {
            fprintf(stderr,"Error: Out of Memory creating item '%s'!\n", ipptr->title);
            free(poddir);
            free(dirsep);
            free(chanpath);
            free(chandir);
            finalisechannelstatement();
            finalisechancatstatement();
            finaliseitemdlstatement();
            finaliseitemndlstatement();
            finaliseitemcatstatement();
            return -1;
          }
          if (getencfilename(itemofn,&(ipptr->enclosure)) == 2)
          {
            fprintf(stderr,"Warning: assuming filename is '%s'.\n",itemofn);
          }
          itemofext = (char *) malloc(sizeof(char)*(1+strlen(ipptr->enclosure.url)));
          if (itemofext == NULL)
          {
            fprintf(stderr,"Error: Out of Memory creating item '%s'!\n", ipptr->title);
            free(itemofn);
            free(poddir);
            free(dirsep);
            free(chanpath);
            free(chandir);
            finalisechannelstatement();
            finalisechancatstatement();
            finaliseitemdlstatement();
            finaliseitemndlstatement();
            finaliseitemcatstatement();
            return -1;
          }
          itemtfn = (char *) malloc(sizeof(char)*(1+strlen(itemofn)));
          if (itemtfn == NULL)
          {
            fprintf(stderr,"Error: Out of Memory creating item '%s'!\n", ipptr->title);
            free(itemofn);
            free(itemofext);
            free(poddir);
            free(dirsep);
            free(chanpath);
            free(chandir);
            finalisechannelstatement();
            finalisechancatstatement();
            finaliseitemdlstatement();
            finaliseitemndlstatement();
            finaliseitemcatstatement();
            return -1;
          }
          rv = getencfileext(itemofext,&(ipptr->enclosure));
          if (rv == 0)
          {
            fprintf(stderr,"Error: Out of Memory creating item '%s'!\n", ipptr->title);
            free(itemofn);
            free(itemtfn);
            free(itemofext);
            free(poddir);
            free(dirsep);
            free(chanpath);
            free(chandir);
            finalisechannelstatement();
            finalisechancatstatement();
            finaliseitemdlstatement();
            finaliseitemndlstatement();
            finaliseitemcatstatement();
            return -1;
          }
          else if (rv == -1) itemofext[0] = 0;
          else if (rv == 2) fprintf(stderr, "Warning: Assumed file extension to be '%s'.\n", itemofext);
          makevalidfilename(itemtfn,itemofn);
          dotpos = strstr(itemtfn,".");
          if (dotpos != NULL) dotpos[0] = 0;
          dotpos = NULL;
          /* Download item if required */
          if (dlcode == DLCODE_LATEST)
          {
            if (newestitem != NULL)
            {
              if (ipptr->pubdate.year > newestitem->pubdate.year || 
                  (ipptr->pubdate.year == newestitem->pubdate.year && 
                   (ipptr->pubdate.month > newestitem->pubdate.month || 
                    (ipptr->pubdate.month == newestitem->pubdate.month && 
                     (ipptr->pubdate.daynum > newestitem->pubdate.daynum || 
                      (ipptr->pubdate.daynum == newestitem->pubdate.daynum && 
                       (ipptr->pubdate.hour - ipptr->pubdate.gmtoffseth > newestitem->pubdate.hour - newestitem->pubdate.gmtoffseth || 
                        (ipptr->pubdate.hour - ipptr->pubdate.gmtoffseth == newestitem->pubdate.hour - newestitem->pubdate.gmtoffseth && 
                         (ipptr->pubdate.minute - ipptr->pubdate.gmtoffsetm > newestitem->pubdate.minute - newestitem->pubdate.gmtoffsetm || 
                          (ipptr->pubdate.minute - ipptr->pubdate.gmtoffsetm == newestitem->pubdate.minute - newestitem->pubdate.gmtoffsetm && 
                           (ipptr->pubdate.second > newestitem->pubdate.second)))))))))))
              {
                newestitem = ipptr;
              }
            }
            else
            {
              newestitem = ipptr;
            }
          }
          else if (dlcode == DLCODE_NEW || dlcode == DLCODE_ALL)
          {
            itemfn = (char *) malloc(sizeof(char)*(102+strlen(itemtfn)+strlen(itemofext)));
            if (itemfn == NULL)
            {
              fprintf(stderr,"Error: Out of Memory creating item '%s'!\n", ipptr->title);
              free(itemofn);
              free(itemtfn);
              free(itemofext);
              free(poddir);
              free(dirsep);
              free(chanpath);
              free(chandir);
              finalisechannelstatement();
              finalisechancatstatement();
              finaliseitemdlstatement();
              finaliseitemndlstatement();
              finaliseitemcatstatement();
              return -1;
            }
            rv = newfilename(itemfn, chanpath, itemtfn, itemofext);
            if (rv == 0)
            {
              fprintf(stderr,"Error: Out of Memory creating item '%s'!\n", ipptr->title);
              free(itemfn);
              free(itemofn);
              free(itemtfn);
              free(itemofext);
              free(poddir);
              free(dirsep);
              free(chanpath);
              free(chandir);
              finalisechannelstatement();
              finalisechancatstatement();
              finaliseitemdlstatement();
              finaliseitemndlstatement();
              finaliseitemcatstatement();
              return -1;
            }
            strcat(itemfn,".");
            strcat(itemfn,itemofext);
            rv = dodownload(ipptr->enclosure.url, chandir, itemfn);
            if (rv == 0)
            {
              fprintf(stderr,"Warning: Error downloading item '%s' from URL '%s'.  Skipping this download.\n", ipptr->title, ipptr->enclosure.url);
              dlexcept = 1;
            }
            else dlexcept = 0;
          }
          free(itemofext);
          itemofext = NULL;
          free(itemtfn);
          itemtfn = NULL;
        }
        /* Add Item to DB */
        if ((dlcode == DLCODE_NEW || dlcode == DLCODE_ALL) && dlexcept == 0)
        {
          /* Use additemdled() */
          dbitemid = additemdled(ipptr, dbchanid, itemofn, itemfn);
          free(itemfn);
          itemfn = NULL;
        }
        else
        {
          /* Use additemndled() */
          dbitemid = additemndled(ipptr, dbchanid, itemofn);
        }
        if (itemfn != NULL) free(itemfn);
        itemfn = NULL;
        if (itemofn != NULL) free(itemofn);
        itemofn = NULL;
        if (dbitemid == 0)
        {
          fprintf(stderr, "Error adding item '%s' to database!\n", ipptr->title);
          free(poddir);
          free(dirsep);
          free(chanpath);
          free(chandir);
          finalisechannelstatement();
          finalisechancatstatement();
          finaliseitemdlstatement();
          finaliseitemndlstatement();
          finaliseitemcatstatement();
          return -3;
        }
        llitemid = ipptr->itemid;
        /* Add item categories to DB */
        /* Item Categories */
        for (catptr = catroot; catptr != NULL; catptr = catptr->next)
        {
          if (catptr->type == item_cat && catptr->id.itemid == llitemid)
          {
            rv = additemcat(dbitemid,catptr);
            if (rv == 0)
            {
              fprintf(stderr,"Error adding item category '%s' to database!\n", catptr->category);
              free(poddir);
              free(dirsep);
              free(chanpath);
              free(chandir);
              finalisechannelstatement();
              finalisechancatstatement();
              finaliseitemdlstatement();
              finaliseitemndlstatement();
              finaliseitemcatstatement();
              return -3;
            }
          }
        }
        
        
      }
    }/* End Item Section */
    
    /* Download Latest Item if appropriate */
    if (dlcode == DLCODE_LATEST)
    {
      latestenc = getlatestitemenc(dbchanid);
      if (latestenc == NULL)
      {
        fprintf(stderr,"Error downloading latest item - Out of Memory!\n");
        free(poddir);
        free(dirsep);
        free(chanpath);
        free(chandir);
        finalisechannelstatement();
        finalisechancatstatement();
        finaliseitemdlstatement();
        finaliseitemndlstatement();
        finaliseitemcatstatement();
        return -1;
      }
      if (latestenc->url == NULL)
      {
        fprintf(stderr,"Warning: Channel '%s' has no downloadable items.\n",cpptr->title);
      }
      else
      {
        itemofn = getlatestitemofn(dbchanid);
        if (itemofn == NULL)
        {
          fprintf(stderr,"Error downloading item '%s' - Out of Memory!\n", latestenc->url);
          if (latestenc->url != NULL) free(latestenc->url);
          if (latestenc->type != NULL) free(latestenc->type);
          free(latestenc);
          free(poddir);
          free(dirsep);
          free(chanpath);
          free(chandir);
          finalisechannelstatement();
          finalisechancatstatement();
          finaliseitemdlstatement();
          finaliseitemndlstatement();
          finaliseitemcatstatement();
          return -1;
        }
        dbitemid = getlatestitemid(dbchanid);
#ifdef DEBUG
        	printf("Latest item: %llu, '%s'\n",dbitemid,itemofn);
#endif
        /* for (ipptr = iproot; ipptr != NULL; ipptr = ipptr->next)
        {
          if (ipptr->chanid == llchanid && ipptr->dbiid == dbitemid) break;
        }
        if (ipptr == NULL)
        {
        } */
        itemofext = (char *) malloc(sizeof(char)*(51+strlen(itemofn)));
        if (itemofext == NULL)
        {
          fprintf(stderr,"Error downloading item '%s' - Out of Memory!\n", latestenc->url);
          if (latestenc->url != NULL) free(latestenc->url);
          if (latestenc->type != NULL) free(latestenc->type);
          free(latestenc);
          free(itemofn);
          free(poddir);
          free(dirsep);
          free(chanpath);
          free(chandir);
          finalisechannelstatement();
          finalisechancatstatement();
          finaliseitemdlstatement();
          finaliseitemndlstatement();
          finaliseitemcatstatement();
          return -1;
        }
        rv = getencfileext(itemofext, latestenc);
        if (rv == -1) itemofext[0] = 0;
        else if (rv == 2) fprintf(stderr, "Warning: Extension of item assumed to be '%s'.\n",itemofext);
        else if (rv == 0)
        {
          fprintf(stderr,"Error downloading item '%s' - Out of Memory!\n", latestenc->url);
          if (latestenc->url != NULL) free(latestenc->url);
          if (latestenc->type != NULL) free(latestenc->type);
          free(latestenc);
          free(itemofn);
          free(itemofext);
          free(poddir);
          free(dirsep);
          free(chanpath);
          free(chandir);
          finalisechannelstatement();
          finalisechancatstatement();
          finaliseitemdlstatement();
          finaliseitemndlstatement();
          finaliseitemcatstatement();
          return -1;
        }
#ifdef DEBUG
        	printf("Latest item extension: '%s'\n",itemofext);
#endif
        itemtfn = (char *) malloc(sizeof(char)*(1+strlen(itemofn)));
        if (itemtfn == NULL)
        {
          fprintf(stderr,"Error downloading item '%s' - Out of Memory!\n", latestenc->url);
          if (latestenc->url != NULL) free(latestenc->url);
          if (latestenc->type != NULL) free(latestenc->type);
          free(latestenc);
          free(itemofn);
          free(itemofext);
          free(poddir);
          free(dirsep);
          free(chanpath);
          free(chandir);
          finalisechannelstatement();
          finalisechancatstatement();
          finaliseitemdlstatement();
          finaliseitemndlstatement();
          finaliseitemcatstatement();
          return -1;
        }
        makevalidfilename(itemtfn,itemofn);
        dotpos = strstr(itemtfn,".");
        if (dotpos != NULL) dotpos[0] = 0;
        dotpos = NULL;
#ifdef DEBUG
        	printf("Latest item safename: '%s'\n",itemtfn);
#endif
        itemfn = (char *) malloc(sizeof(char)*(102+strlen(itemtfn)+strlen(itemofext)));
        if (itemfn == NULL)
        {
          fprintf(stderr,"Error downloading item '%s' - Out of Memory!\n", latestenc->url);
          if (latestenc->url != NULL) free(latestenc->url);
          if (latestenc->type != NULL) free(latestenc->type);
          free(latestenc);
          free(itemtfn);
          free(itemofn);
          free(itemofext);
          free(poddir);
          free(dirsep);
          free(chanpath);
          free(chandir);
          finalisechannelstatement();
          finalisechancatstatement();
          finaliseitemdlstatement();
          finaliseitemndlstatement();
          finaliseitemcatstatement();
          return -1;
        }
        rv = newfilename(itemfn, chanpath, itemtfn, itemofext);
        if (rv == 0)
        {
          fprintf(stderr,"Error downloading item '%s' - Out of Memory!\n", latestenc->url);
          if (latestenc->url != NULL) free(latestenc->url);
          if (latestenc->type != NULL) free(latestenc->type);
          free(latestenc);
          free(itemfn);
          free(itemtfn);
          free(itemofn);
          free(itemofext);
          free(poddir);
          free(dirsep);
          free(chanpath);
          free(chandir);
          finalisechannelstatement();
          finalisechancatstatement();
          finaliseitemdlstatement();
          finaliseitemndlstatement();
          finaliseitemcatstatement();
          return -1;
        }
#ifdef DEBUG
        	printf("Latest item newname: '%s'\n",itemfn);
#endif
        strcat(itemfn,".");
        strcat(itemfn,itemofext);
        rv = dodownload(latestenc->url, chandir, itemfn);
        if (rv == 0)
        {
          fprintf(stderr,"Warning: Error downloading item from URL '%s'.  Skipping this download.\n", latestenc->url);
          dlexcept = 1;
        }
        else dlexcept = 0;
#ifdef DEBUG
        	printf("Download except: '%d'\n",dlexcept);
#endif
        
        if (dlexcept == 0)
        {
#ifdef DEBUG
        	printf("Marking as downloaded.\n");
#endif
          rv = prepareuditemdlstatement();
          if (rv == 0)
          {
            fprintf(stderr,"Error adding downloaded item '%s' to database!\n", latestenc->url);
            if (latestenc->url != NULL) free(latestenc->url);
            if (latestenc->type != NULL) free(latestenc->type);
            free(latestenc);
            free(itemfn);
            free(itemtfn);
            free(itemofn);
            free(itemofext);
            free(poddir);
            free(dirsep);
            free(chanpath);
            free(chandir);
            finalisechannelstatement();
            finalisechancatstatement();
            finaliseitemdlstatement();
            finaliseitemndlstatement();
            finaliseitemcatstatement();
            return -3;
          }
          rv = updateitemdownloaded(itemfn, dbitemid);
          if (rv == 0)
          {
            fprintf(stderr,"Error adding downloaded item '%s' to database!\n", latestenc->url);
            if (latestenc->url != NULL) free(latestenc->url);
            if (latestenc->type != NULL) free(latestenc->type);
            free(latestenc);
            free(itemfn);
            free(itemtfn);
            free(itemofn);
            free(itemofext);
            free(poddir);
            free(dirsep);
            free(chanpath);
            free(chandir);
            finalisechannelstatement();
            finalisechancatstatement();
            finaliseitemdlstatement();
            finaliseitemndlstatement();
            finaliseitemcatstatement();
            return -3;
          }
          finaliseuditemdlstatement();
          
          
        }
        
        free(itemofn);
        itemofn = NULL;
        free(itemofext);
        itemofext = NULL;
        free(itemtfn);
        itemtfn = NULL;
        free(itemfn);
        itemfn = NULL;
        
        
      }
      if (latestenc->url != NULL) free(latestenc->url);
      if (latestenc->type != NULL) free(latestenc->type);
      free(latestenc);
      latestenc = NULL;
    }/* End Item Download Latest */
    
    free(chanpath);
    chanpath = NULL;
    free(chandir);
    chandir = NULL;
    
  }
  
  
  
  free(poddir);
  free(dirsep);
  finalisechannelstatement();
  finalisechancatstatement();
  finaliseitemdlstatement();
  finaliseitemndlstatement();
  finaliseitemcatstatement();
  
  /* I don't think we need the LLs now... */
  destroycategories();
  destroychannels();
  destroyitems();
  
  return 1;
}

int listchanneldetails(ci_identifier *chanident)
{
  if (chanident->type == ci_none || (chanident->type == ci_title && chanident->id.title == NULL)) return 0;
  unsigned long long dbchanid = 0;
  if (chanident->type == ci_dbid) dbchanid = chanident->id.id;
  else if (chanident->type == ci_title)
  {
    dbchanid = getchannelidfromtitle(chanident->id.title);
    if (dbchanid == 0) return 0;
  }
  else if (chanident->type == ci_meta)
  {
    if (chanident->id.dlcode == DLCODE_NONE) return 1;
    else if (chanident->id.dlcode == DLCODE_ALL) dbchanid = 0;
    else if (chanident->id.dlcode == DLCODE_LATEST)
    {
      dbchanid = getlatestupdatedchannel();
      if (dbchanid == 0) return 0;
    }
    else
    {
      fprintf(stderr,"Error: Invalid download code!\n");
      return 0;
    }
  }
  if (listchannelinfo(dbchanid) == 0) return 0;
  return 1;
}
