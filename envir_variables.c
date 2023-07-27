#include "main.h"

/**
 * print_envir - prints current environment of shell
 * @env: the pointer to environment
 * @argv: array of inputs
 */

void print_envir(char **env, char **argv)
{
	int i = 0;

	if (strcmp(argv[0], "env") == 0)
	{
		if (argv[1] != NULL)
		{
			return;
		}
		for (; i <= 11; i++)
		{
			if (*env)
				puts(env[i]);
			/*env++;*/
		}
	} else if (strcmp(argv[0], "exit") == 0)
	{
		exit(0);
	}
}
