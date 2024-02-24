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
		free(line), line = NULL;
		free(token), token = NULL;
		return (NULL);
	}
	token = strtok(line, d);
	while (token)
	{
		tokens[j] = malloc(sizeof(char) * (1 + _strlen(token)));
		if (!tokens[j])
		{
			free_array(tokens, j);
			free(token), token = NULL;
			free(line), line = NULL;
			return (NULL);
		}
		tokens[j] = strcpy(tokens[j], token);
		j++;
		token = strtok(NULL, d);
	}
	free(token), token = NULL;
	free(line), line = NULL;
	tokens[j] = NULL;
	return (tokens);
}
