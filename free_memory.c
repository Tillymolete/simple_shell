#include "main.h"

/**
 * free_mem - function that dellocates memory in programm
 * @str1: A pointer to a pointer of a string arra
 * @str2: a pointer to char
 * @str3: a pointer to a string
 *
 * Return: Nothing
 */

void free_mem(char **str1, char *str2, char *str3)
{
	free(str2);
	str2 = NULL;
	free(str1);
	str1 = NULL;
	free(str3);
	str3 = NULL;
}
