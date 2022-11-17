#include "shell.h"
/**
 * free_buffers - frees an allocated space in memory
 * @buf: buffer to be freed
 * Description: frees an allocated space in memory
 * Return: void
 */
void free_buffers(char **buf)
{
	int i = 0;

	if (!buf || buf == NULL)
		return;

	while (*buf)
	{
		free(buf[i]);
		buf++;
	}

}
