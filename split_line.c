#include "shell.h"
/**
 * split_line - splits a string tokens
 * @line: the array to be freed
 * Return: Array of tokens
 */
char **split_line(char *line)
{
	char **tokens = NULL, *token, *d = " \t\n";
	char *copy;
	size_t i = 0, j = 0;

	copy = _strdup(line);
	if (!copy)
	{
		return (NULL);
	}
	i = count_tokens(line);
	if (i == 0)
	{
		free(copy);
		return (NULL);
	}
	tokens = malloc(sizeof(char *) * (i + 1));
	if (!tokens)
	{
		free(copy);
		return (NULL);
	}
	token = strtok(copy, d);
	while (token)
	{
		tokens[j] = _strdup(token);
		if (!tokens[j])
		{
			free(copy);
			free_array(tokens);
			return (NULL);
		}
		token = strtok(NULL, d);
		j++;
	}
	free(copy);
	tokens[j] = NULL;
	return (tokens);
}
