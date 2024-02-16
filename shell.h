#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>
size_t _strlen(char *);
ssize_t _puts(char *);
char *_strcpy(char *, char *);
void execute_cmd(char *);
#endif
