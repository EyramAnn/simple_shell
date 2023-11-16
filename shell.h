#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdarg.h>
#include <sys/wait.h>
#include <limits.h>
#define _INT_MIN (1 << (sizeof(int) * 8 - 1))


/* STRUCTURES AND GLOBAL VARIABLES */
extern char **environ;

/* PROMPT PROTOTYPES */
int inter_shell(void);
char **input_tokens(char *token, char *buffer);
void print_env(void);
int process_line(char **buffer, size_t *line_size, int *count);


/* NON INTERACTIVE SHELL PROTOTYPES */
int non_inter_shell(int argc, char *argv[]);
int non_inter_piped(char *argv);
void child_exe(char **cmnds, char *argv, int count);
void print_number(int n);

/* AUXILARY FUNCTION PROTOTYPES */
int _strcmp(const char *s1, const  char *s2);
int _strncmp(const char *s1, const  char *s2, size_t n);
unsigned int _strlen(const char *s);
char *_strcpy(char *dest, char *src);
void ffree(char *buffer, char **commands, char *heap_token);
int builtin_funcs(char *buffer, char *token);


/* STORE PATHS PROTOTYPES */
char **store_paths(void);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char *concat(const char *str1, const char *str2);


/* FIND PATH PROTOTYPES */
char *find_PATH(char **token);
char *_strchr(char *s, char c);

#endif

