#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>
size_t _strlen(const char *);
ssize_t _puts(char *);
char *_strdup(const char *);
int _strcmp(char *, char *);
char *_strcpy(char *, const char *);
char *prompt(void);
void free_array(char **, size_t);
size_t count_tokens(char *);
char **tokenize(char *);
char **split_line(char *);
#endif
