#ifndef __INC_SFUNCS_H__
#define __INC_SFUNCS_H__

void strtoupper(char *outstr, char *instr);
int streq_(char *a, char *b);
int streq_i(char *a, char *b);
int startsame_(char *a, char *b);
int startsame_i(char *a, char *b);
int endwith_(char *exstring, char *refstring);
int endwith_i(char *exstring, char *refstring);
void strltrim(char *ostr, char *istr);
void freentsa(char **antsa);

#endif
