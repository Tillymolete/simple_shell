#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>

#define BUFFER 1024

int token(char *string, char delim[]);
char **token1(char **argv, char *str, char delim[]);
char ** mem(char **str, size_t n);
char *mem1(char *str, size_t n);
void execu(char **av, char *nm);
void free_mem(char **str1, char *str2, char *str3);
char *create_path(const char *inp);
void print_envir(char **env, char **argv);

#endif
