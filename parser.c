#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "sfuncs.h"

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
  if (epn == NULL) return NULL;
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
  char *title = NULL, *link = NULL, *desc = NULL;
  char cchar = 0;
  int inatt = 0, inelename = 0, ineletag = 0, inctag = 0, inattname = 0, 
      inattdata = 0, issingletag = 0, initem = 0, inchan = 0, inimage = 0;
  elementpnode *curepn = NULL;
  itempropnode *curitem = NULL;
  chanpropnode *curchan = NULL;
  
  
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
      curelementdata[cedi] = 0;
      cedi = 0;
    }
    else if (cchar == '?')
    {
      if (inelename)
      {
        issingletag = 1;
      }
      else
      {
        /* Add to whatever... */
        if (inelename)
        {
          curelementname[ceni] = cchar;
          ceni++;
        }
        else if (inattname)
        {
          curattname[cani] = cchar;
          cchar++;
        }
        else if (inattdata)
        {
          curattdata[cadi] = cchar;
          cchar++;
        }
        else if (!ineletag && curepn != NULL)
        {
          curelementdata[cedi] = cchar;
          cchar++;
        }
        
      }
    }
    else if (cchar == ' ')
    {
      if (inelename && !inctag)
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
        if (streq_i(curepn->name,"item")) initem = 1;
        else if (streq_i(curepn->name,"channel")) inchan = 1;
        else if (streq_i(curepn->name,"image")) inimage = 1;
      }
      else if (inattname)
      {
        /* Do Nothing. */
      }
      else if (inattdata)
      {
        inattdata = 0;
        inattname = 1;
        curattdata[cadi] = 0;
        cadi = 0;
        if (addatttoepn(curattname, curattdata, curepn) == NULL)
        {
          /* Free everything and end! */
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
      }
      else
      {
        /* Add to whatever... */
        if (inelename)
        {
          curelementname[ceni] = cchar;
          ceni++;
        }
        else if (inattname)
        {
          curattname[cani] = cchar;
          cchar++;
        }
        else if (inattdata)
        {
          curattdata[cadi] = cchar;
          cchar++;
        }
        else if (!ineletag && curepn != NULL)
        {
          curelementdata[cedi] = cchar;
          cchar++;
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
      else
      {
        /* Add to whatever... */
        if (inelename)
        {
          curelementname[ceni] = cchar;
          ceni++;
        }
        else if (inattname)
        {
          curattname[cani] = cchar;
          cchar++;
        }
        else if (inattdata)
        {
          curattdata[cadi] = cchar;
          cchar++;
        }
        else if (!ineletag && curepn != NULL)
        {
          curelementdata[cedi] = cchar;
          cchar++;
        }
        
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
      else if (inattdata)
      {
        inattdata = 0;
        inattname = 0;
        curattdata[cadi] = 0;
        cadi = 0;
        if (addatttoepn(curattname, curattdata, curepn) == NULL)
        {
          /* Free everything and end! */
        }
      }
      
      ineletag = 0;
      if (inctag)
      {
        curepn->data = (char *) malloc(sizeof(char)*(1+strlen(curelementdata)));
        if (curepn->data == NULL)
        {
          /* Free everything and end! */
        }
        strcpy(curepn->data, curelementdata);
      }
      if (inctag || issingletag)
      {
        issingletag = 0;
        inctag = 0;
        /*...*/
        if (streq_i(curepn->name, "rss"))
        {
          /* Ignore the overarching element (though maybe do something with version?) */
        }
        else if (streq_i(curepn->name, "item"))
        {
          /*...*/
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
            }
            if (title != NULL) free(title);
            if (link != NULL) free(link);
            if (desc != NULL) free(desc);
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
          if (curitem->desc == NULL && desc != NULL)
          {
            curitem->desc = desc; /* Shouldn't really do it this way, but it saves memory... */
            desc = NULL;
          }
          
          curitem = NULL;
        }
        else if (streq_i(curepn->name, "channel"))
        {
          /*...*/
          inchan = 0;
          if (curchan == NULL)
          {
            curchan = createchanpropnode(title,link,desc);
            if (curchan == NULL)
            {
              /* Free everything and end. */
            }
            if (title != NULL) free(title);
            if (link != NULL) free(link);
            if (desc != NULL) free(desc);
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
          if (curchan->desc == NULL && desc != NULL)
          {
            curchan->desc = desc; /* Shouldn't really do it this way, but it saves memory... */
            desc = NULL;
          }
          curchan = NULL;
        }
        else if (streq_i(curepn->name, "title"))
        {
          if (title == NULL)
          {
            title = (char *) malloc(sizeof(char)*(1+strlen(curepn->data)));
            if (title == NULL)
            {
              /* Free everything and end. */
            }
            strcpy(title,curepn->data);
            if (title!=NULL && link!=NULL && desc!=NULL)
            {
              if (initem && !inimage)
              {
                if (curitem == NULL)
                {
                  if (curchan == NULL)
                    curitem = createitempropnode(title, link, desc, nextchanid);
                  else
                    curitem = createitempropnode(title, link, desc, curchan->chanid);
                  if (curitem == NULL)
                  {
                    /* Free everything and end. */
                  }
                }
                else if (curitem->title == NULL)
                {
                  curitem->title = (char *) malloc(sizeof(char)*(1+strlen(title)));
                  if (curitem->title == NULL)
                  {
                    /* Free everything and end. */
                  }
                  strcpy(curitem->title, title);
                }
              }
              else if (inchan && !inimage)
              {
                if (curchan == NULL)
                {
                  curchan = createchanpropnode(title, link, desc);
                  if (curchan == NULL)
                  {
                    /* Free everything and end. */
                  }
                }
                else if (curchan->title == NULL)
                {
                  curchan->title = (char *) malloc(sizeof(char)*(1+strlen(title)));
                  if (curchan->title == NULL)
                  {
                    /* Free everything and end. */
                  }
                  strcpy(curchan->title, title);
                }
              }
              else if (inimage)
              {
                /* Find above epn */
                for (epptr = eproot; epptr != NULL; epptr = epptr->next)
                {
                  if (epptr->next == curepn) break;
                }
                if (epptr != NULL && streq_i(epptr->name,"image"))
                {
                  /* Assign data as attribute */
                  if (addatttoepn(curepn->name,curepn->data,epptr)==NULL)
                  {
                    /* Free everything and end. */
                  }
                }
                
              }
              free(title);
              free(link);
              free(desc);
              title = NULL;
              link = NULL;
              desc = NULL;
            }
          }
        }
        else if (streq_i(curepn->name, "link"))
        {
          if (link == NULL)
          {
            link = (char *) malloc(sizeof(char)*(1+strlen(curepn->data)));
            if (link == NULL)
            {
              /* Free everything and end. */
            }
            strcpy(link,curepn->data);
            if (title!=NULL && link!=NULL && desc!=NULL)
            {
              if (initem && !inimage)
              {
                if (curitem == NULL)
                {
                  if (curchan == NULL)
                    curitem = createitempropnode(title, link, desc, nextchanid);
                  else
                    curitem = createitempropnode(title, link, desc, curchan->chanid);
                  if (curitem == NULL)
                  {
                    /* Free everything and end. */
                  }
                }
                else if (curitem->link == NULL)
                {
                  curitem->link = (char *) malloc(sizeof(char)*(1+strlen(link)));
                  if (curitem->link == NULL)
                  {
                    /* Free everything and end. */
                  }
                  strcpy(curitem->link, link);
                }
              }
              else if (inchan && !inimage)
              {
                if (curchan == NULL)
                {
                  curchan = createchanpropnode(title, link, desc);
                  if (curchan == NULL)
                  {
                    /* Free everything and end. */
                  }
                }
                else if (curchan->link == NULL)
                {
                  curchan->link = (char *) malloc(sizeof(char)*(1+strlen(link)));
                  if (curitem->link == NULL)
                  {
                    /* Free everything and end. */
                  }
                  strcpy(curchan->link, link);
                }
              }
              else if (inimage)
              {
                /* Find above epn */
                for (epptr = eproot; epptr != NULL; epptr = epptr->next)
                {
                  if (epptr->next == curepn) break;
                }
                if (epptr != NULL && streq_i(epptr->name,"image"))
                {
                  /* Assign data as attribute */
                  if (addatttoepn(curepn->name,curepn->data,epptr)==NULL)
                  {
                    /* Free everything and end. */
                  }
                }
                
              }
              free(title);
              free(link);
              free(desc);
              title = NULL;
              link = NULL;
              desc = NULL;
              
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
            }
            strcpy(desc,curepn->data);
            if (title!=NULL && link!=NULL && desc!=NULL)
            {
              if (initem && !inimage)
              {
                if (curitem == NULL)
                {
                  if (curchan == NULL)
                    curitem = createitempropnode(title, link, desc, nextchanid);
                  else
                    curitem = createitempropnode(title, link, desc, curchan->chanid);
                  if (curitem == NULL)
                  {
                    /* Free everything and end. */
                  }
                }
                else if (curitem->desc == NULL)
                {
                  curitem->desc = (char *) malloc(sizeof(char)*(1+strlen(desc)));
                  if (curitem->desc == NULL)
                  {
                    /* Free everything and end. */
                  }
                  strcpy(curitem->desc, desc);
                }
              }
              else if (inchan && !inimage)
              {
                if (curchan == NULL)
                {
                  curchan = createchanpropnode(title, link, desc);
                  if (curchan == NULL)
                  {
                    /* Free everything and end. */
                  }
                }
                else if (curchan->desc == NULL)
                {
                  curchan->desc = (char *) malloc(sizeof(char)*(1+strlen(desc)));
                  if (curitem->desc == NULL)
                  {
                    /* Free everything and end. */
                  }
                  strcpy(curchan->desc, desc);
                }
              }
              else if (inimage)
              {
                /* Find above epn */
                for (epptr = eproot; epptr != NULL; epptr = epptr->next)
                {
                  if (epptr->next == curepn) break;
                }
                if (epptr != NULL && streq_i(epptr->name,"image"))
                {
                  /* Assign data as attribute */
                  if (addatttoepn(curepn->name,curepn->data,epptr)==NULL)
                  {
                    /* Free everything and end. */
                  }
                }
                
              }
              free(title);
              free(link);
              free(desc);
              title = NULL;
              link = NULL;
              desc = NULL;
              
            }
          }
        }
        else if (streq_i(curepn->name,"language"))
        {
          if ((!initem) && inchan && !inimage)
          {
            if (curchan == NULL)
            {
              curchan = createchanpropnode(title,link,desc);
              if (curchan == NULL)
              {
                /* Free everything and end. */
              }
              if (title != NULL) free(title);
              if (link != NULL) free(link);
              if (desc != NULL) free(desc);
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
                }
                curchan->language_sub = (char *) malloc(sizeof(char)*(1+strlen(dashloc)));
                if (curchan->language_sub == NULL)
                {
                  /* Free everything and end. */
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
                }
                strcpy(curchan->language_main,curepn->data);
                curchan->language_sub = NULL;
              }
            }
            
          }
        }
        else if (streq_i(curepn->name, "copyright"))
        {
          if (inchan && !initem && !inimage)
          {
            if (curchan == NULL)
            {
              curchan = createchanpropnode(title,link,desc);
              if (curchan == NULL)
              {
                /* Free everything and end. */
              }
              if (title != NULL) free(title);
              if (link != NULL) free(link);
              if (desc != NULL) free(desc);
            }
            if (curchan->copyright == NULL)
            {
              curchan->copyright = (char *) malloc(sizeof(char)*(1+strlen(curepn->data)));
              if (curchan->copyright == NULL)
              {
                /* Free everything and end. */
              }
              strcpy(curchan->copyright,curepn->data);
            }
            
          }
        }
        else if (streq_i(curepn->name,"managingeditor")
        {
          if (inchan && !initem && !inimage)
          {
            if (curchan == NULL)
            {
              curchan = createchanpropnode(title,link,desc);
              if (curchan == NULL)
              {
                /* Free everything and end. */
              }
              if (title != NULL) free(title);
              if (link != NULL) free(link);
              if (desc != NULL) free(desc);
            }
            if (curchan->managingeditor == NULL)
            {
              curchan->managingeditor = (char *) malloc(sizeof(char)*(1+strlen(curepn->data)));
              if (curchan->managingeditor == NULL)
              {
                /* Free everything and end. */
              }
              strcpy(curchan->managingeditor,curepn->data);
            }
            
          }
        }
        else if (streq_i(curepn->name,"webmaster"))
        {
          if (inchan && !initem && !inimage)
          {
            if (curchan == NULL)
            {
              curchan = createchanpropnode(title,link,desc);
              if (curchan == NULL)
              {
                /* Free everything and end. */
              }
              if (title != NULL) free(title);
              if (link != NULL) free(link);
              if (desc != NULL) free(desc);
            }
            if (curchan->webmaster == NULL)
            {
              curchan->webmaster = (char *) malloc(sizeof(char)*(1+strlen(curepn->data)));
              if (curchan->webmaster == NULL)
              {
                /* Free everything and end. */
              }
              strcpy(curchan->webmaster,curepn->data);
            }
            
          }
        }
        else if (streq_i(curepn->name, "pubdate"))
        {
        }
        else if (streq_i(curepn->name, "lastbuilddate"))
        {
        }
        else if (streq_i(curepn->name, "category"))
        {
        }
        else if (streq_i(curepn->name, "generator"))
        {
          if (inchan && !initem && !inimage)
          {
            if (curchan == NULL)
            {
              curchan = createchanpropnode(title,link,desc);
              if (curchan == NULL)
              {
                /* Free everything and end. */
              }
              if (title != NULL) free(title);
              if (link != NULL) free(link);
              if (desc != NULL) free(desc);
            }
            if (curchan->generator == NULL)
            {
              curchan->generator = (char *) malloc(sizeof(char)*(1+strlen(curepn->data)));
              if (curchan->generator == NULL)
              {
                /* Free everything and end. */
              }
              strcpy(curchan->generator,curepn->data);
            }
            
          }
        }
        else if (streq_i(curepn->name, "docs"))
        {
          if (inchan && !initem && !inimage)
          {
            if (curchan == NULL)
            {
              curchan = createchanpropnode(title,link,desc);
              if (curchan == NULL)
              {
                /* Free everything and end. */
              }
              if (title != NULL) free(title);
              if (link != NULL) free(link);
              if (desc != NULL) free(desc);
            }
            if (curchan->docs == NULL)
            {
              curchan->docs = (char *) malloc(sizeof(char)*(1+strlen(curepn->data)));
              if (curchan->docs == NULL)
              {
                /* Free everything and end. */
              }
              strcpy(curchan->docs,curepn->data);
            }
            
          }
        }
        else if (streq_i(curepn->name,"ttl"))
        {
          if (inchan && !initem && !inimage)
          {
            if (curchan == NULL)
            {
              curchan = createchanpropnode(title,link,desc);
              if (curchan == NULL)
              {
                /* Free everything and end. */
              }
              if (title != NULL) free(title);
              if (link != NULL) free(link);
              if (desc != NULL) free(desc);
            }
            curchan->ttl = atol(curepn->data);
          }
        }
        else if (streq_i(curepn->name, "image"))
        {
          inimage = 0;
          if (inchan && !initem)
          {
            if (curchan == NULL)
            {
              curchan = createchanpropnode(title,link,desc);
              if (curchan == NULL)
              {
                /* Free everything and end. */
              }
              if (title != NULL) free(title);
              if (link != NULL) free(link);
              if (desc != NULL) free(desc);
            }
          }
          else if (initem)
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
              }
              if (title != NULL) free(title);
              if (link != NULL) free(link);
              if (desc != NULL) free(desc);
            }
          }
          for (epptr = curepn->attlist; epptr != NULL; epptr = epptr->next)
          {
            if (streq_i(epptr->name, "url"))
            {
              if (initem)
              {
                if (curitem->image.url == NULL)
                {
                  curitem->image.url = (char *) malloc(sizeof(char)*(1+strlen(epptr->data)));
                  if (curitem->image.url == NULL)
                  {
                    /* Free everything and end. */
                  }
                  strcpy(curitem->image.url,epptr->data);
                }
              }
              else if (inchan)
              {
                if (curchan->image.url == NULL)
                {
                  curchan->image.url = (char *) malloc(sizeof(char)*(1+strlen(epptr->data)));
                  if (curchan->image.url == NULL)
                  {
                    /* Free everything and end. */
                  }
                  strcpy(curchan->image.url,epptr->data);
                }
              }
            }
            else if (streq_i(epptr->name, "title"))
            {
              if (initem)
              {
                if (curitem->image.title == NULL)
                {
                  curitem->image.title = (char *) malloc(sizeof(char)*(1+strlen(epptr->data)));
                  if (curitem->image.title == NULL)
                  {
                    /* Free everything and end. */
                  }
                  strcpy(curitem->image.title,epptr->data);
                }
              }
              else if (inchan)
              {
                if (curchan->image.title == NULL)
                {
                  curchan->image.title = (char *) malloc(sizeof(char)*(1+strlen(epptr->data)));
                  if (curchan->image.title == NULL)
                  {
                    /* Free everything and end. */
                  }
                  strcpy(curchan->image.title,epptr->data);
                }
              }
            }
            else if (streq_i(epptr->name, "link"))
            {
              if (initem)
              {
                if (curitem->image.link == NULL)
                {
                  curitem->image.link = (char *) malloc(sizeof(char)*(1+strlen(epptr->data)));
                  if (curitem->image.link == NULL)
                  {
                    /* Free everything and end. */
                  }
                  strcpy(curitem->image.link,epptr->data);
                }
              }
              else if (inchan)
              {
                if (curchan->image.link == NULL)
                {
                  curchan->image.link = (char *) malloc(sizeof(char)*(1+strlen(epptr->data)));
                  if (curchan->image.link == NULL)
                  {
                    /* Free everything and end. */
                  }
                  strcpy(curchan->image.link,epptr->data);
                }
              }
            }
            else if (streq_i(epptr->name, "description"))
            {
              if (initem)
              {
                if (curitem->image.description == NULL)
                {
                  curitem->image.description = (char *) malloc(sizeof(char)*(1+strlen(epptr->data)));
                  if (curitem->image.description == NULL)
                  {
                    /* Free everything and end. */
                  }
                  strcpy(curitem->image.description,epptr->data);
                }
              }
              else if (inchan)
              {
                if (curchan->image.description == NULL)
                {
                  curchan->image.description = (char *) malloc(sizeof(char)*(1+strlen(epptr->data)));
                  if (curchan->image.description == NULL)
                  {
                    /* Free everything and end. */
                  }
                  strcpy(curchan->image.description,epptr->data);
                }
              }
            }
            else if (streq_i(epptr->name, "width"))
            {
              if (initem)
              {
                curitem->image.width = atol(epptr->data);
              }
              else if (inchan)
              {
                curchan->image.width = atol(epptr->data);
              }
            }
            else if (streq_i(epptr->name, "height"))
            {
              if (initem)
              {
                curitem->image.height = atol(epptr->data);
              }
              else if (inchan)
              {
                curchan->image.height = atol(epptr->data);
              }
            }
            
          }
          
        }
        else if (streq_i(curepn->name,"skiphours"))
        {
          /* Suck attributes into channel's skiphours property */
        }
        else if (streq_i(curepn->name,"skipdays"))
        {
          /* Suck attributes into channel's skipdays property */
        }
        /* Subelements of channel */
        else if (streq_i(curepn->name,"hour"))
        {
          if (inchan && !initem && !inimage)
          {
            /* Find above epn */
            for (epptr = eproot; epptr != NULL; epptr = epptr->next)
            {
              if (epptr->next == curepn) break;
            }
            if (epptr != NULL && streq_i(epptr->name,"skiphours"))
            {
              /* Assign data as attribute */
              if (addatttoepn(curepn->name,curepn->data,epptr)==NULL)
              {
                /* Free everything and end. */
              }
            }
          }
        }
        else if (streq_i(curepn->name,"day"))
        {
          if (inchan && !initem && !inimage)
          {
            /* Find above epn */
            for (epptr = eproot; epptr != NULL; epptr = epptr->next)
            {
              if (epptr->next == curepn) break;
            }
            if (epptr != NULL && streq_i(epptr->name,"skipdays"))
            {
              /* Assign data as attribute */
              if (addatttoepn(curepn->name,curepn->data,epptr)==NULL)
              {
                /* Free everything and end. */
              }
            }
          }
        }
        else if (streq_i(curepn->name,"url"))
        {
          if (inimage)
          {
            /* Find above epn */
            for (epptr = eproot; epptr != NULL; epptr = epptr->next)
            {
              if (epptr->next == curepn) break;
            }
            if (epptr != NULL && streq_i(epptr->name,"image"))
            {
              /* Assign data as attribute */
              if (addatttoepn(curepn->name,curepn->data,epptr)==NULL)
              {
                /* Free everything and end. */
              }
            }
          }
        }
        else if (streq_i(curepn->name,"width"))
        {
          if (inimage)
          {
            /* Find above epn */
            for (epptr = eproot; epptr != NULL; epptr = epptr->next)
            {
              if (epptr->next == curepn) break;
            }
            if (epptr != NULL && streq_i(epptr->name,"image"))
            {
              /* Assign data as attribute */
              if (addatttoepn(curepn->name,curepn->data,epptr)==NULL)
              {
                /* Free everything and end. */
              }
            }
          }
        }
        else if (streq_i(curepn->name,"height"))
        {
          if (inimage)
          {
            /* Find above epn */
            for (epptr = eproot; epptr != NULL; epptr = epptr->next)
            {
              if (epptr->next == curepn) break;
            }
            if (epptr != NULL && streq_i(epptr->name,"image"))
            {
              /* Assign data as attribute */
              if (addatttoepn(curepn->name,curepn->data,epptr)==NULL)
              {
                /* Free everything and end. */
              }
            }
          }
        }
        
        
      }
    }
    else
    {
      if (inelename)
      {
        curelementname[ceni] = cchar;
        ceni++;
      }
      else if (inattname)
      {
        curattname[cani] = cchar;
        cchar++;
      }
      else if (inattdata)
      {
        curattdata[cadi] = cchar;
        cchar++;
      }
      else if (!ineletag && curepn != NULL)
      {
        curelementdata[cedi] = cchar;
        cchar++;
      }
      
    }
    
  }
  if (ferror(rf))
  {
  }
}
