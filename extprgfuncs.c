#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef OS_LINUX
/* Linux Methods */
#include <unistd.h>
#elif defined(OS_WINDOWS)
/* Windows Methods */
#include <Shlwapi.h>
#include <windows.h>
#include <tchar.h>
#else
/* Other Methods */
#endif


#include "sfuncs.h"
#include "dbexchange.h"

#include "extprgfuncs.h"


int dodownload(char *url, char *dldir, char *filename)
{
  char *pdir, *dirsep, *dnldr, *emptr, *posptr;
  char fullcmd[2048] = "";
  
  if (url == NULL || dldir == NULL || filename == NULL) return 0;
  
  dnldr = getsettingdata("DOWNLOADER");
  if (dnldr == NULL)
  {
    fprintf(stderr, "Error getting Downloader!\n");
    return 0;
  }
  if (dnldr[0] == 0)
  {
    fprintf(stderr, "Downloader not set!  Use the command 'configure set downloader' to do so.\n");
    free(dnldr);
    return 0;
  }
  pdir = getsettingdata("PODCAST_DIR");
  if (pdir == NULL)
  {
    fprintf(stderr, "Error getting Podcast Directory!\n");
    free(dnldr);
    return 0;
  }
  if (pdir[0] == 0)
  {
    fprintf(stderr, "Podcast Directory not set!  Use the command 'configure set podcast_dir' to do\nso.\n");
    free(dnldr);
    free(pdir);
    return 0;
  }
  dirsep = getsettingdata("DIR_SEPARATOR");
  if (dirsep == NULL)
  {
    fprintf(stderr, "Error getting Directory Separator!\n");
    free(dnldr);
    free(pdir);
    return 0;
  }
  if (dirsep[0] == 0)
  {
    fprintf(stderr, "Directory Separator not set!  Use the command 'configure set dir_separator'\nto do so.\n");
    free(dnldr);
    free(pdir);
    free(dirsep);
    return 0;
  }
  posptr = dnldr;
  long j = 0;
  while ((emptr = strstr(posptr,"!")) != NULL)
  {
    memcpy(fullcmd+j, posptr, (emptr-posptr)*sizeof(char));
    j += ((long) (emptr-posptr));
    if (emptr[1] == '!')
    {
      memcpy(fullcmd+j, "!", sizeof(char));
      j+=sizeof(char);
    }
    else if (emptr[1] == 'U' || emptr[1] == 'u')
    {
      memcpy(fullcmd+j, url, sizeof(char)*strlen(url));
      j+=(sizeof(char)*strlen(url));
    }
    else if (emptr[1] == 'P' || emptr[1] == 'p')
    {
      memcpy(fullcmd+j, pdir, sizeof(char)*strlen(pdir));
      j+=(sizeof(char)*strlen(pdir));
      memcpy(fullcmd+j, dirsep, sizeof(char)*strlen(dirsep));
      j+=(sizeof(char)*strlen(dirsep));
      memcpy(fullcmd+j, dldir, sizeof(char)*strlen(dldir));
      j+=(sizeof(char)*strlen(dldir));
    }
    else if (emptr[1] == 'F' || emptr[1] == 'f')
    {
      memcpy(fullcmd+j, filename, sizeof(char)*strlen(filename));
      j+=(sizeof(char)*strlen(filename));
    }
    else
    {
      fprintf(stderr,"Error: Unknown Escape Sequence '!%c' found in Downloader command!\n");
      free(pdir);
      free(dnldr);
      free(dirsep);
      return 0;
    }
    
    posptr = emptr+(2*sizeof(char));
  }
  char tsnull[1] = "";
  memcpy(fullcmd+j, tsnull, sizeof(char));
  strcat(fullcmd,posptr);
  printf("Executing Command '%s'\n", fullcmd);
  free(pdir);
  free(dnldr);
  free(dirsep);
  int dlel = 0;
  dlel = system(fullcmd);
  printf("Returned value '%d'\n", dlel);
  if (dlel == 0) printf("Download Successful!\n");
  else fprintf(stderr, "Download command returned an error.  Download Failed.\n");
  if (dlel != 0) return 0;
  return 1;
}

int doplay(char *dldir, char *filename)
{
  char *pdir, *dirsep, *mplyr, *emptr, *posptr;
  char fullcmd[2048] = "";
  
  if (dldir == NULL || filename == NULL) return 0;
  
  mplyr = getsettingdata("MEDIA_PLAYER");
  if (mplyr == NULL)
  {
    fprintf(stderr, "Error getting Media Player!\n");
    return 0;
  }
  if (mplyr[0] == 0)
  {
    fprintf(stderr, "Media Player not set!  Use the command 'configure set media_player' to do\nso.\n");
    free(mplyr);
    return 0;
  }
  pdir = getsettingdata("PODCAST_DIR");
  if (pdir == NULL)
  {
    fprintf(stderr, "Error getting Podcast Directory!\n");
    free(mplyr);
    return 0;
  }
  if (pdir[0] == 0)
  {
    fprintf(stderr, "Podcast Directory not set!  Use the command 'configure set podcast_dir' to do\nso.\n");
    free(mplyr);
    free(pdir);
    return 0;
  }
  dirsep = getsettingdata("DIR_SEPARATOR");
  if (dirsep == NULL)
  {
    fprintf(stderr, "Error getting Directory Separator!\n");
    free(mplyr);
    free(pdir);
    return 0;
  }
  if (dirsep[0] == 0)
  {
    fprintf(stderr, "Directory Separator not set!  Use the command 'configure set dir_separator'\nto do so.\n");
    free(mplyr);
    free(pdir);
    free(dirsep);
    return 0;
  }
  posptr = mplyr;
  long j = 0;
  while ((emptr = strstr(posptr,"!")) != NULL)
  {
    memcpy(fullcmd+j, posptr, (emptr-posptr)*sizeof(char));
    j += ((long) (emptr-posptr));
    if (emptr[1] == '!')
    {
      memcpy(fullcmd+j, "!", sizeof(char));
      j+=sizeof(char);
    }
    else if (emptr[1] == 'P' || emptr[1] == 'p')
    {
      memcpy(fullcmd+j, pdir, sizeof(char)*strlen(pdir));
      j+=(sizeof(char)*strlen(pdir));
      memcpy(fullcmd+j, dirsep, sizeof(char)*strlen(dirsep));
      j+=(sizeof(char)*strlen(dirsep));
      memcpy(fullcmd+j, dldir, sizeof(char)*strlen(dldir));
      j+=(sizeof(char)*strlen(dldir));
    }
    else if (emptr[1] == 'F' || emptr[1] == 'f')
    {
      memcpy(fullcmd+j, filename, sizeof(char)*strlen(filename));
      j+=(sizeof(char)*strlen(filename));
    }
    else
    {
      fprintf(stderr,"Error: Unknown Escape Sequence '!%c' found in Downloader command!\n");
      free(pdir);
      free(mplyr);
      free(dirsep);
      return 0;
    }
    
    posptr = emptr+(2*sizeof(char));
  }
  char tsnull[1] = "";
  memcpy(fullcmd+j, tsnull, sizeof(char));
  strcat(fullcmd,posptr);
  printf("Executing Command '%s'\n", fullcmd);
  free(pdir);
  free(mplyr);
  free(dirsep);
  int dlel = 0;
  dlel = system(fullcmd);
  printf("Returned value '%d'\n", dlel);
  if (dlel == 0) printf("Successfully played file!\n");
  else fprintf(stderr, "Media Player command returned an error.  Failed to play file.\n");
  if (dlel != 0) return 0;
  return 1;
}


int doesfileexist(char *afile)
{
  if (afile == NULL) return 0;
#ifdef OS_LINUX
  /* Linux Method */
  if (access(afile, F_OK) != 0) return 0;
  if (access(afile, R_OK | W_OK) != 0) return 0;
  return 1;
#elif defined(OS_WINDOWS)
  /* Windows Method */
  if (PathFileExists((LPCTSTR) afile) == TRUE) return 1;
  return 0;
#else
  /* Other Method */
  FILE *af;
  if ((af = fopen(afile, "r")))
  {
    fclose(af);
    return 1;
  }
  return 0;
#endif
}