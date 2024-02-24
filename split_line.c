#include "shell.h"
/**
 * split_line - takes a string and splits it to tokens
 * @line: the string to be splited
 * Return: array of tokens
 */
char **split_line(char *line)
{
	char **tokens = NULL;
	char *copy = NULL;
	char *token = NULL;

	if (!line)
		return (NULL);
	copy = _strdup(line);
	if (!copy)
	{
		free(line), line = NULL;
		return (NULL);
	}
	free(line), line = NULL;
	tokens = tokenize(copy);
	if (!tokens)
	{
		free(copy), copy = NULL;
		free(token), token = NULL;
		return (NULL);
	}
	free(token), token = NULL;
	free(copy), copy = NULL;
	return (tokens);
}
