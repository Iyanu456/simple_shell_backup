#ifndef MAIN_H
#define MAIN_H

#define STDIN STDIN_FILENO
#define STDOUT STDOUT_FILENO
#define STDERR STDERR_FILEN0

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _strlen(const char *str);
int _strcmp(const char *str1, const  char *str2);
char *_strdup(const char *str);
#endif
