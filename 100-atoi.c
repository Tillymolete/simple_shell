#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _atoi - convert string digits to integer
 * @string: pointer to the string array
 *
 * Return: the function string
 */

int _atoi(char *string)
{
	int x;
	int res = 0;
	int sign = -1;
	int brk = 0;

	for (x = 0; string[x] != '\0'; x++)
	{
		if (string[x] == '-')
		{
			sign = sign * -1;
		}
		if (string[x] >= '0' && string[x] <= '9')
		{
			res = res * 10;
			res -= (string[x] - '0');
			brk = 1;
		}
		else if (brk == 1)
			break;
	}
	res = sign * res;
	return (res);
}
