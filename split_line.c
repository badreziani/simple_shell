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

	if (!line)
		return (NULL);
	copy = _strdup(line);
	if (!copy)
	{
		return (NULL);
	}
	tokens = tokenize(copy);
	if (!tokens)
	{
		free(copy), copy = NULL;
		return (NULL);
	}
	free(copy), copy = NULL;
	return (tokens);
}
