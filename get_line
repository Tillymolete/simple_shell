#include "main.h"

/** get_line - reads inputs from standard input
 * 
 * Retrun: a pointer
 */

char *get_line()
{
        char c;
        static char array[BUFFER];
        static size_t i = 0; /* buffer index */
        static ssize_t numchar = 0;
	char *inchar = NULL; /* inpute */
	size_t inchar_i = 0;

        while(1)
        {
                if (i >= numchar)
                {
			numchar = read(STDIN_FILENO, array, BUFFER);
			i = 0;
			if (numchar <= 0)
				break;
		}
                c = array[i];
                i++;

                if (c == '\n' || c == EOF)
                        break;
                if (i == 0)
                        inchar = malloc(BUFFER);
                else if (i % BUFFER == 0)
                        inchar = realloc(inchar, i + BUFFER); /* reallocation to create enough space */
		inchar[i] = c;
        }
        if (inchar)
        {
                inchar = realloc(inchar, i++); /* adding new segment to put end of char */
                inchar[i] = '\0';
        }
        return (inchar);
}
