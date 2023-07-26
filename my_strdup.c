#include <stddef.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned long int i;

	if (str == NULL)
		return (NULL);

	dup = malloc((_strlen(str) + 1) * sizeof(char));

	if (dup == NULL)
	{
		perror("Error: malloc failed");
		return (NULL);
	}

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup[i] = str[i];
	return (dup);
}
