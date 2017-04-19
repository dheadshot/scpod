#ifndef __INC_EXTPRGFUNCS_H__
#define __INC_EXTPRGFUNCS_H__ 1

int dodownload(char *url, char *dldir, char *filename);
int doplay(char *dldir, char *filename);
int doesfileexist(char *afile);
int newfilename(char *outfilename, char *inpath, char *infilename, char *inext);
int domkdir(char *directory);
void makevalidfilename(char *outfn, char *infn);


#endif
