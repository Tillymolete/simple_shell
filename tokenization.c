#include "main.h"


/*** Tokenize the input string based on delimiters*/

char **tokenize(char *input, const char *delimiters)
{
	char *token;
	char **tokens = malloc(sizeof(char *));
	int token_count = 0;
	
	if (tokens == NULL)
	{
		perror("malloc");
		exit(1);
	}
	token = strtok(input, delimiters);
	while (token != NULL)
	{
		tokens[token_count] = strdup(token);
		token_count++;
		tokens = realloc(tokens, (token_count + 1) * sizeof(char *));
		if (tokens == NULL)
		{
			perror("realloc");
			exit(1);
		}
		token = strtok(NULL, delimiters);
	}
	tokens[token_count] = NULL;
	
	return (tokens);
}
