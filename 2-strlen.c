#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: input a string
 * Return: length of the string
 */

int _strlen(const char *s)
{
	int length = 0;

	for (; *s != '\0'; length++)
	{
		s++;
	}
	return (length);
}
