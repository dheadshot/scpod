#ifndef __INC_SFUNCS_H__
#define __INC_SFUNCS_H__

void strtoupper(char *outstr, char *instr); /* Uppercase */
int streq_(char *a, char *b);  /* Strings equal */
int streq_i(char *a, char *b); /* Case insensitive strings equal */
int startsame_(char *a, char *b); 
int startsame_i(char *a, char *b);
int startswith_(char *a, char *with); 
int startswith_i(char *a, char *with);
int endwith_(char *exstring, char *refstring);  /* Does exstring ends with refstring? */
int endwith_i(char *exstring, char *refstring); /* Case insensitive: does exstring end with refstring? */
void strltrim(char *ostr, char *istr);  /* Left trim off spaces */
void strtrimws(char *ostr, char *istr); /* Trim standard whitespace */
int strtrimws1(char *astr);             /* In-place trim standard whitespace */
void freentsa(char **antsa);  /* Free a null-terminated string array */
long searchbackch(char *astr, char findchar); /* Find last findchar in astr */
void strdsqs(char *outstr, char *instr); /* Escapes "'"s as "''" */
long strLen(char *a); /* A safer strlen */

#endif
