#include "main.h"

/**
 * main - unix command-line interpreter
 * @argc: number of command-line arguments
 * @argv: an array of arguments
 * @env: array of strings with environment variables
 *
 * Return: 0 at success
 */

char prmt[] = "#cisfun$ ";

int main(int argc, char **argv, char **env)
{
	ssize_t numchar = 0; /* total characters */
	size_t buf = 0, count = 0; /* buf used as storage */
	char *inchar = NULL, *cpinchar = NULL, *prgname = argv[0];

	int i = 0;

	if (argc == 1)
	{
		for(; 1; )
		{
			printf("%s", prmt);
			numchar = getline(&inchar, &buf, stdin);
			if (numchar < 0 || numchar == EOF)
				break;
			while (inchar[i])
			{
				if (inchar[i] == '\n')
					inchar[i] = 0;
				i++;
			}
			cpinchar = mem1(NULL, numchar);
			if (cpinchar == NULL)
			{
				free_mem(NULL, cpinchar, inchar);
				exit(1);
			}
			memcpy(cpinchar, inchar, (size_t)numchar);
			count = token(inchar, " "); /* function created in the token file */
			argv = mem(NULL, count);
			if (argv == NULL)
			{
				free_mem(argv, cpinchar, inchar);
				exit(1);
			}
			argv = token1(argv, cpinchar, " ");
			if (argv == NULL)
			{
				free_mem(argv, NULL, cpinchar);
				exit(1);
			}
			print_envir(env, argv);
			execu(argv, prgname); /* excution function in  the file */
			for (i = 0; argv[i] != NULL; i++)
				free_mem(NULL, argv[i], NULL);
			free_mem(argv, NULL, cpinchar);
		}
	}
	free_mem(NULL, NULL, inchar);
	return (0);
}
