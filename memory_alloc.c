#include "main.h"

/*
 * mem - program that allocate memory
 * @str: the string of characters
 * @n: the number of characters in the string
 *
 * return: string
 */
char **mem(char **str, size_t n)
{
	str = malloc(sizeof(char *) * n);

	return (str);
}

/*
 * mem1 - function that allocates memory 
 * @str: the string of characters
 * @n: the number of characters in the string
 *
 * return: string
 */

char *mem1(char *str, size_t n)
{
	str = malloc(n);

	return (str);
}
