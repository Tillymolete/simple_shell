#include "main.h"

/**
 * execu - executes the program with provided arguments
 * @av: The argument of array of strings
 * @nm: the program name
 * @env: the provided environment variables
 *
 * Return: Nothing
 */

void execu(char **av, char **env, char *nm)
{
	char *created_path = NULL;
	pid_t prid = fork(); /* process ID, fork ID of current running process */
	int stt, est; /* status */
	(void)env;

	if (prid < 0)
	{
		exit(1);
	}
	else if (prid == 0)
	{
		if (av)
		{
			created_path = create_path(av[0]);
			if (!created_path)
				exit(1);
			if (execve(created_path, av, NULL) == -1)
			{
				perror(nm);
				exit(1);
			}
		}
		free(created_path);
		created_path = NULL;
	}
	else
	{
		waitpid(prid, &stt, 0);
		if (WIFEXITED(stt))
		{
			est = WEXITSTATUS(stt);
			if (est == 0 && av[0] == NULL)
			{
				exit(0);
			}
		}
	}
}
