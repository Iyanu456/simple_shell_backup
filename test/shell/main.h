#ifndef MAIN_H
#define MAIN_H

#define STDIN STDIN_FILENO
#define STDOUT STDOUT_FILENO
#define STDERR STDERR_FILEN0
#define MAX_TOK 100
#define MAX_BUFFER 1024

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int _strlen(const char *str);
int _strcmp(const char *str1, const  char *str2);
char *_strdup(const char *str);

char **_tokenizer(char *line);

#endif
