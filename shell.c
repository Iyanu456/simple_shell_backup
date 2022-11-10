#include "main.h"
int main(int ac, char **av)
{
	char **toks;

	char *line = NULL, **buff, *temp = NULL;

	size_t len = 0;

	ssize_t linesize = 0;

	int conv_str, int_mode = isatty(STDIN);

	while (1)
	{
		int_mode = isatty(STDIN);

		if  (int_mode == 1)
			{
				write(STDOUT, "~$ ", 3);
			}

		linesize = getline(&line, &len, stdin);
		printf("%s, size = %zd\n", line, linesize);
		buff = _tokenizer(line);
		conv_str = atoi(buff[0]);
		printf("%d\n", conv_str);
		if (buff[0] == "exit")
			printf("true, %s, %d\n", buff[0], conv_str);

	}
	exit(98);
	return (0);
}
