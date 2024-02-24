#include "shell.h"
/**
 * tokenize - splits a string tokens
 * @line: the array to be freed
 * Return: Array of tokens
 */
char **tokenize(char *line)
{
	char **tokens = NULL, *token = NULL, *d = " \t\n";
	size_t i = 0, j = 0;

	i = count_tokens(line);
	if (i == 0)
		return (NULL);
	tokens = malloc(sizeof(char *) * (i + 1));
	if (!tokens)
	{
		return (NULL);
	}
	token = strtok(line, d);
	while (token)
	{
		tokens[j] = _strdup(token);
		j++;
		token = strtok(NULL, d);
	}
	tokens[j] = NULL;
	return (tokens);
}
