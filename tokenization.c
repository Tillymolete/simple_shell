#include "main.h"

/**
 * token - tokenizing the string
 * @string: pointer to the string passed
 * @delim: the delimiter
 */

int token(char *string, char delim[])
{
	char *tokehold;
	int count = 0;

	tokhold = strtok(string, delim);
	while (tokhold != NULL)
	{
		count++;
		tokhold = strtok(NULL, delim);
	}
	count++;

	return (count);
}

/**
 *
 *
 *
 */

char **token1(char **argv, char *str, char delim[])
{
	char *tokhold;
	int i;

	tokhold = strtok(str, delim);
	for (i = 0; tokhold != NULL; i++)
	{
		argv[i] = mem1(NULL, strlen(tokhold));
		if (argv[i] == NULL)
		{
			for (; i >= 0; i--)
				free_mem(NULL, argv[i], NULL);
			return (argv);
		}
		memcpy(argv[i], tokhold, strlen(tokhold));
		tokhold = strtok(NULL, delim);
	}

	argv[i] = NULL;
	return (argv);
}
