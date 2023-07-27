#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the string comparision
 */

int _strcmp(char *s1, char *s2)
{
	size_t n = 0;
	size_t i;
	int diff;

	for (i = 0; i < n; i++)
	{
		diff = s1[i] - s2[i];
		if (diff != 0)
			break;
	}
	return (diff);
}
