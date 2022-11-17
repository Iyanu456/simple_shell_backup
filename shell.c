#include "shell.h"
/**
 * main - main shell loop
 * @ac: argument count
 * @av: argument variables
 * @envp: environment variable
 * Description: main shell loop
 * Return: 0;
 */
int main(int ac, char **av, char *envp[])
{
	char *line, **buff = NULL, **cmd = NULL;

	char **paths = NULL, *path, *pathcommand, **paths_buff;

	size_t len = 0;

	ssize_t linesize = 0;

	int count = 0;

	(void)envp, (void)av;

	if (ac < 1)
		return (-1);
	while (1)
	{
		free_buffers(buff);
		prompt();
		linesize += getline(&line, &len, stdin);

		if (line[linesize - 1] == ' ')
			line[linesize - 1] = '\0';

		buff = create_tokens(line);
		cmd = parse_token(buff, line, " ");
		handle_token(cmd, cmd[0]);
		path = find_path();
		paths_buff = create_path_tokens(path);
		paths = parse_token(paths_buff, path, ":");
		pathcommand = test_path(paths, cmd[0]);

		if (!pathcommand)
			perror(av[0]);
		else
			execution(pathcommand, cmd);
	}
	return (0);
}
