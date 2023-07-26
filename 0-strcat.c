#include "main.h"

/**
 * _strcat - Concatinates strings
 * @dest: the stored destination for string
 * @src: the source string
 *
 * Return: concatinated string
 */

char *_strcat(char *dest, char *src)
{
	int index1, index2;

	for (index1 = 0; dest[index1] != '\0'; index1++)
		;
	for (index2 = 0; src[index2] != '\0'; index2++)
	{
		dest[index1 + index2] = src[index2];
	}
	dest[index1 + index2] = '\0';
	return (dest);
}
