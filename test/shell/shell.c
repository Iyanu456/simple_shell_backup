#include "main.h"
int main(int ac, char **av)
{
	char *line, *delimiter = " ";

	size_t len = 10;

	ssize_t linesize = 0;

	int int_mode = isatty(STDIN);

	line = malloc(len);
	while (1)
	{
		int_mode = isatty(STDIN);
			if  (int_mode == 1)
			{
				write(STDOUT, "~$ ", 3);
			}
			linesize = getline(&line, &len, stdin);
			if (linesize < 0)
				break;
			else
			{
				printf("~$ %s", line);
				continue;
			}
	}
	return (0);
}
