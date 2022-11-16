#include "shell.h"
/**
 * main - main shell loop
 * Description: main shell loop
 * Return: 0;
 */
int main(int ac, char **av, char *envp[])
{
	char *line = NULL, **buff, *tmp_str;

	size_t len = 0;

	ssize_t linesize = 0;

	int count = 0, int_mode = isatty(STDIN);

	(void)envp, (void)av;

	if (ac < 1)
		return (-1);
	while (1)
	{
		int_mode = isatty(STDIN);

		if  (int_mode == 1)
			write(STDOUT, "$ ", 2);

		linesize += getline(&line, &len, stdin);

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

			handle_token(tmp_str);

			buff++;
		}
	}
	return (0);
}
