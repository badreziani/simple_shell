#include "shell.h"

/**
 * input - prints a prompt on stdout
 * Return: a string
 */
char *input(void)
{
	char *line = NULL;
	size_t n = 0;
	ssize_t nread;

	nread = getline(&line, &n, stdin);
	if (nread == -1)
	{
		free(line);
		return (NULL);
	}
	return (line);
}
