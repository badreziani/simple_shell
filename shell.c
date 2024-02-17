#include "shell.h"

/**
 * main - The entry point of the shell
 * @ac: number of items in av
 * @av: NULL terminated array of strings
 * Return: 0
 */
int main(__attribute__((unused))int ac, __attribute__((unused))char **av)
{
	ssize_t nread = 0;
	char *line = NULL;
	size_t n = 0;

	while (nread != -1)
	{
		if (isatty(STDIN_FILENO))
			_puts("$ ");
		nread = getline(&line, &n, stdin);
		if (nread == EOF)
		{
			fflush(stdin);
			break;
		}
		execute_cmd(line);
		fflush(stdin);
	}
	free(line);
	return (0);
}

