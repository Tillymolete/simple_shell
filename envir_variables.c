#include "main.h"

/**
 * print_envir - prints current environment of shell
 * @env: the environment
 * @argv: array of inputs
 */

void print_envir(char **env, char **argv)
{
	if (strcmp(argv[0], "env") == 0)
	{
		if (argv[1] != NULL)
		{
			return;
		}
		while (*env)
		{
			if (*env)
				puts(*env);
			env++;
		}
	} else if (strcmp(argv[0], "exit") == 0)
	{
		exit(0);
	}
}
