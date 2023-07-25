#include "main.h"

/**
 * token - tokenizing the string
 * @string: pointer to the string passed
 * @delim: the delimiter
 */

int token(char *string, char delim[])
{
	char *tokhold;
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
 * token1 - tokenizes input string
 * @argv: pointer to an array of character pointers
 * @str: the tokenised input string
 * delim: delimiter character array
 * Return: tokenized argument vector array
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
