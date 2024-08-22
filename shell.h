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
#include <limits.h>
#include <fcntl.h>

extern char **environ;

int exec(char **arguments);
int exist(char *pathname);
int _putchar(char c);
int _prompt(const char *prompt, unsigned int size);
int _strlen(const char *string);
char *_strdup(char *str);
int _strcmp(char *str1, char *str2);
int check_built(char **args, int exit_stat);
char extra_command(char *dir_path, char *command);
int _path(char **args);
char *_getenv(char *global_var);
int not_found(char **arguments, int counter);
void mem_free(char *entry);
int get_args(char *entry, char **arguments);
int print_numbers(int n);
#endif
