#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>

/*MACROS*/
#define BUFFER 1024
/*GLOBAL VARIABLE*/

/*PROTOTYPE*/
char **tokenize(char *input, const char *delimiters);
void free_tokens(char **tokens);
char *get_ps1();
void execu(char **tokens, char **env, char *nm);
void free_mem(char **str1, char *str2, char *str3);
char *create_path(const char *inp);
void print_envir(char **env, char **argv);
char *get_line();
int _strlen(const char *s);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strdup(char *str);

#endif
