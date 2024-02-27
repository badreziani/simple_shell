#include "shell.h"

/**
 * execute_func - executes a function
 * @func: the function to execute
 * Return: Nothing
 */
void execute_func(char **tokens, char **env)
{
	size_t i;
	
	if (_strcmp(tokens[0], "exit") == 0)
	{
		free_array(tokens);
		exit(0);
	}
	else
	{
		free_array(tokens);
		for (i = 0; env[i]; i++)
		{
			_puts(env[i]);
			_puts("\n");
		}
	}
}
