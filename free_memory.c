#include "main.h"

/*
 * free_mem - function that frees the memory in  programm
 * @str1:
 * @str2:
 * @str3:
 *
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
