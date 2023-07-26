#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strcpy - copies conetnt from source to destination
 * @dest: the destination of the string array
 * @src: the source of the string
 *
 * Return: the copy of the string
 */

char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}

/*{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
*/
