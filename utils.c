#include "shell.h"
/**
 * _strcmp - compares two strings
 * @str1: first string
 * @str2: second string
 * Descrption: comares two strings
 * Return: 0 on sucess, 1 or -1 on failure
 */
int _strcmp(const char *str1, const char *str2)
{
	int i, len_1 = 0, len_2 = 0;

	while (str1[len_1] != '\0')
		len_1++;
	while (str2[len_2] != '\0')
		len_2++;
	if (len_1  < len_2)
		return (-1);
	if (len_1 > len_2)
		return (1);
	if (len_1 == len_2)
	{
		for (i = 0; i < len_1; i++)
		{
			if (str1[i] == str2[i])
				continue;
			else
				return (-1);
		}
	}
	return (0);
}
/**
 * _strdup - duplicates the string pointed to by str
 * @str: sting to be duplicated
 * Description: duplicates a string pointed to by str
 * Return: pointer to new string
 */
char *_strdup(const char *str)
{
	int i = 0, len = 0;

	char *new_str;

	len = _strlen(str);
	new_str = malloc(sizeof(char)  * (len + 1));
	while (str[i] != '\0')
	{
		new_str[i] = str[i];
		i++;
	}
	return (new_str);
}
/**
 * _strlen - finds the length of characters in a string
 * @str: string
 * Description: finds the length of a string
 * Return: string length
 */
int _strlen(const char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
/**
 * check_spaces - checks for spaces
 * @s: a string
 * Description: loops through a string and counts the spaces
 * Return: number of  counts
 */
unsigned int check_delim(char *s)
{
	unsigned int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ':')
			count++;
	}

	return (count);
}
