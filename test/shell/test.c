#include "main.h"
int main(void)
{
	char *str1 = "iyanu";
	char *str = "iyanu";
	char *dup;
	int i = _strcmp(str1, str);
	if (i == 0)
		printf("they are equal\n");
	else
		printf("they are not equal\n");
	dup = _strdup(str);
	printf("%s\n", dup);
	return (0);
}
