#include "main.h"


int main(void)
{
        ssize_t n;
        size_t buf = 0;
        char *in;

        printf("Enter something: ");
        get_line(in, buf, 0);

        printf("Input is: %s", in);
        return (0);
} 
