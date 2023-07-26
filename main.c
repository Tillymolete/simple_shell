#include "main.h"

/**
 * main - Betty Function
 * @argc: the argument count for the environment
 * @argv: argument vector of environment
 * @env: the environment variable
 *
 * Return: 0 at success
 */

int main(int argc, char **argv, char **env) {
    ssize_t numchar = 0;
    size_t buf = 0;
    char *inchar = NULL, *nm = argv[0], **tokens = NULL;
    char *ps1 = NULL;

    /*Get the PS1 environment variable, or set a default prompt*/
    ps1 = get_ps1();
    
    if (argc == 1)
    {
	    while (1)
	    {
		    printf("%s", ps1);
		    
		    numchar = getline(&inchar, &buf, stdin);
		    if (numchar < 0 || numchar == EOF)
			    break;
		    /* Remove the trailing newline character*/
		    if (inchar[numchar - 1] == '\n')
		    {
			    inchar[numchar - 1] = '\0';
			    numchar--;
		    }
		    
		    /* Tokenize the input command*/
		    tokens = tokenize(inchar, " ");
		    /* Execute the command*/
		    execu(tokens, env, nm);
		    /* Free the memory used for tokens*/
		    free_tokens(tokens);
	    }
    }
    /*Free the memory used for the input buffer*/
    free(inchar);
    return 0;
}

/**
 * free_tokens - frees allocated memory used for tokens
 * @tokens: the allocated array of string memory
 *
 * Return: Nothing
 */
void free_tokens(char **tokens)
{
	int i;

	if (tokens != NULL)
	{
		for (i = 0; tokens[i] != NULL; i++)
			free(tokens[i]);
	}
	free(tokens);
}

/**
 * get_ps1 - retrieves value of environment variable
 *
 * Return: value of the environment
 */
char *get_ps1()
{
    char *ps1 = getenv("PS1");
    if (ps1 == NULL)
        /*Default prompt if PS1 is not set*/
        ps1 = "#cisfun$ ";
    return (ps1);
}
