#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
#include <stdlib.h>



int _strcmp(char *hamz1, char *hamz2);
char *_strcpy(char *dest, char *src);
char *awari_Path(char *jagjagun);
char **_split(char *alli, char *sep);
char *_strcat(char *dest, char *src);
int _strlen(char *s);
char *_vnget(char *env_var);
void *_pelog(unsigned int berray, unsigned int gbangban);
void _env(void);
int killem(char **args);
int nada_ln(char *lubbf_F);


#endif
