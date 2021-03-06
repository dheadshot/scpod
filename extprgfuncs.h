#ifndef __INC_EXTPRGFUNCS_H__
#define __INC_EXTPRGFUNCS_H__ 1

int dodownload(const char *url, const char *dldir, const char *filename);
int doplay(char *dldir, char *filename);
int doesfileexist(char *afile);
int newfilename(char *outfilename, char *inpath, char *infilename, char *inext);
/* outfilename does not include extension. */
int domkdir(char *directory);
void makevalidfilename(char *outfn, const char *infn);
int mkchandir(char *outdir, char *channame); /* Makes channel dir and outputs name to outdir */
long gettimezoneoffset();

#endif
