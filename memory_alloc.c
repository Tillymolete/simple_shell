#include "main.h"

/*
 * mem - progra that allocate memory
 * @str:
 * @n:
 *
 * return
 */
char **mem(char **str, size_t n)
{
	str = malloc(sizeof(char *) * n);

	return (str);
}

/*
 * mem1 - function that allocates memory 
 * @str:
 * @n:
 *
 * return 
 */

char *mem1(char *str, size_t n)
{
	str = malloc(n);

	return (str);
}
