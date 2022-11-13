#include "main.h"
char **create_tokens(char *line)
{
	char *token, **tokens = NULL, *copy;

	int len = 0, i = 0, spaces = 0, count = 0, count2 = 0;

	char str;

	char **name = NULL;
	spaces += check_spaces(line);

	tokens = malloc(sizeof(char *) * (spaces + 1));
	if (tokens == NULL)
		return (NULL);

	copy = strdup(line);

	token = strtok(copy, " ");

	while (token != NULL)
	{
		tokens[i] = token;
		token = strtok(NULL, " ");
		i++;
	}
	tokens[i] = '\0';

	return (tokens);
}
