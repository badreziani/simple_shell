#include "shell.h"
/**
 * tokenize - splits a string tokens
 * @line: the array to be freed
 * Return: Array of tokens
 */
char **tokenize(char *line)
{
	char **tokens = NULL, *token = NULL, *d = " \t\n";
	char *copy = NULL;
	size_t i = 0, j = 0;

	if (!line)
		return (NULL);
	copy = _strdup(line);
	if (!copy)
	{
		return (NULL);
	}
	i = count_tokens(line);
	if (i == 0)
		return (NULL);
	tokens = malloc(sizeof(char *) * (i + 1));
	if (!tokens)
	{
		return (NULL);
	}
	token = strtok(copy, d);
	while (token)
	{
		tokens[j] = _strdup(token);
		token = strtok(NULL, d);
		j++;
	}
	free(copy), copy = NULL;
	tokens[j] = NULL;
	return (tokens);
}
