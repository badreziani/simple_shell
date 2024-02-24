#include "shell.h"

/**
 * prompt - prints a prompt on stdout
 * Return: a string
 */
char *prompt(void)
{
	char *line = NULL;
	size_t n = 0;
	ssize_t nread;

	if (isatty(0) == 1)
		_puts("$ ");
	nread = getline(&line, &n, stdin);
	if (nread == -1)
	{
		free(line);
		line = NULL;
		return (NULL);
	}
	return (line);
}
