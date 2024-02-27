#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
size_t _strlen(const char *);
ssize_t _puts(char *);
char *_strdup(const char *);
int _strcmp(char *, char *);
char *input(void);
void free_array(char **);
size_t count_tokens(char *);
char **split_line(char *);
int execute_cmd(char **, char **, char **, unsigned int);
char *_getenv(char *, char **);
char *get_full_cmd(char*, char **);
char *join_cmd(char *, char *, char *);
char *convert_uint(unsigned int);
void _perror(char *, char *, char *);
#endif
