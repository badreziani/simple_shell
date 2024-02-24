#include "shell.h"

/**
 * main - The entry point of the shell
 * @ac: number of items in av
 * @av: NULL terminated array of strings
 * Return: 0
 */
int main(__attribute__((unused))int ac, __attribute__((unused))char **av)
{
	char *line = NULL;
	char **args = NULL;
	int status = 0;
	size_t i = 0;

	while (1)
	{
		line = prompt();
		if (!line)
		{
			if (isatty(0) == 1)
				_puts("\n");
			free(line);
			line = NULL;
			return (status);
		}
		args = split_line(line);
		if (!args)
		{
			free(line);
			return (status);
		}
		while (args[i])
			_puts(args[i++]);
		free(line);
		free_array(args, i);
	}
	return (0);
}
