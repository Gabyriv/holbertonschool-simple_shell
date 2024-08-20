#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <time.h>

extern char **environl;

int exec(char **arguments);
int exist(char *pathname);
int _putchar(char c);
void prompt(void);
int _strlen(const char *string);
char *_strdup(char *str);
int _strcmp(char *str1, char *str2);
























#endif
