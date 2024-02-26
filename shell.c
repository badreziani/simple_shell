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
	int estatus = 0;
	
	while (1)
	{
		if (isatty(0) == 1)
			_puts("$ ");
		line = input();
		if (!line)
		{
			if (isatty(0) == 1)
				_puts("\n");
			return (estatus);
		}
		tokens = split_line(line);
		if (!tokens)
		{
			free(line);
			continue;
		}
		free(line);
		estatus = execute_cmd(tokens, argv, env);
	}
	return (0);
}
