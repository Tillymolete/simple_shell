#include "main.h"

/*
 * execu - function that execute the program
 * @av: The argument vector
 * @nm: the program name
 *
 * Return: Nothing
 */

void execu(char **av, char *nm)
{
	char *created_path;
	pid_t prid = fork(); /* process ID, fork ID of current running process */
	int stt; /* status */

	if (prid == 0)
	{
		if (av)
		{
			created_path = create_path(av[0]);
			if (execve(created_path, av, NULL) == -1)
				perror(nm);
		}
	}
	else if (prid == -1)
	{
		/*free(inchar); */
		exit(1);
	}
	else
		wait(&stt);
}
