#include "main.h"

/**
 * path_finder - creates a path to input
 * @inp: the user input
 *
 * Return: the actual path to the input
 */

char *create_path(const char *inp)
{
	char *path, *cppath = NULL, *tokpath = NULL, *exact_path = NULL;
	struct stat file_buf;

	path = getenv("PATH");
	if (path)
	{
		cppath = strdup(path);
		tokpath = strtok(cppath, ":");
		while (tokpath != NULL)
		{
			exact_path = malloc(sizeof(char *) * BUFFER);
			strcpy(exact_path, tokpath);
			strcat(exact_path, "/");
			strcat(exact_path, inp);
			if (stat(exact_path, &file_buf) == 0)
			{
				free(cppath);
				return (exact_path);
			}
			free(exact_path);
			tokpath = strtok(NULL, ":");
		}
		if (stat(inp, &file_buf) == 0)
		{
			free(cppath);
			return (strdup(inp));
		}
		free(cppath);
		return (NULL);
	}
	return (NULL);
}
