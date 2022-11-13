#include "main.h"
char *_strtok(char *str, const char *delim)
{
	int i, len, count = 0;

	char *token;

	while (str[i] != '\0')
	{
		if (str[i] != delim)
		{
			token[i] = str[i];
			count++;
		}
	}
}
