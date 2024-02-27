#include "shell.h"

/**
 * count_tokens - countis the number of tokens
 * @line: the line to count its tokens
 * Return: the number of tokens
 */
size_t count_tokens(char *line)
{
	char *d = " \t\n";
	char *token = NULL;
	size_t i = 0;

	if (!line)
		return (0);
	token = strtok(line, d);
	/*this loop take the rest of tokens*/
	while (token)
	{
		i++;
		token = strtok(NULL, d);
	}
	free(token), token = NULL;
	return (i);
}
