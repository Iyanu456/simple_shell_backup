#include "main.h"
int main(void)
{
	char **env = environ, *path = NULL;
	path = *env;

	printf("%s\n", path);
	return(0);
}
