#include "main.h"
int main(int ac, char **av)
{
	char **toks;

	char *line = NULL, **buff, *temp = NULL, *tmp_str;

	size_t len = 0;

	ssize_t linesize = 0;

	int conv_str, count = 0, int_mode = isatty(STDIN);

	while (1)
	{
		int_mode = isatty(STDIN);

		if  (int_mode == 1)
			{
				write(STDOUT, "~$ ", 3);
			}

		linesize = getline(&line, &len, stdin);

		buff = create_tokens(line);

		while (*buff != NULL)
		{
			tmp_str = *buff;

			while (tmp_str[count] != '\0')
			{
				if (tmp_str[count] == '\n')
					tmp_str[count] = '\0';
				count++;
			}

			count = 0;

			if (_strcmp(tmp_str, "exit") == 0)
				printf("They are the same\n");

			buff++;
		}
	}
	return (0);
}
