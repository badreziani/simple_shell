#include "shell.h"

/**
 * main - The entry point of the shell
 * @argc: number of items in av
 * @argv: NULL terminated array of strings
 * @env: NULL terminated array of strings
 * Return: 0
 */
int main(__attribute__((unused))int argc, char **argv, char **env)
{
	char *line = NULL;
	char **tokens = NULL;
	int status = 0;

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
		tokens = split_line(line);
		if (!tokens)
		{
			free(line);
			continue;
		}
		free(line);
		status = execute_cmd(tokens, argv, env);
	}
	return (0);
}
