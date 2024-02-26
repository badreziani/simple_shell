#include "shell.h"

/**
 * _getenv - get the environment variable
 * @name: the name of the variable
 * Return: the value of name
 */
char *_getenv(char *name, char **env)
{
	char *key, *val = NULL, *line, *v_copy;
	char *d = "=\n";
	unsigned int i = 0;
	
	while (env[i])
	{
		line = _strdup(env[i]);
		key = strtok(line, d);
		if (_strcmp(key, name) == 0)
		{
			val = strtok(NULL, d);
			break;
		}
		i++;
	}
	v_copy = strdup(val);
	free(line);
	return (v_copy);
}
