#include "shell.h"

/**
 * _getenv - get the environment variable
 * @name: the name of the variable
 * @env: env variable
 * Return: the value of name
 */
char *_getenv(char *name, char **env)
{
	char *key, *val = NULL, *line, *v_copy;
	char *d = "=\n";
	unsigned int i = 0;
	int flag = 0;

	while (env[i])
	{
		line = _strdup(env[i]);
		if (!line)
			return (NULL);
		key = strtok(line, d);
		if (_strcmp(key, name) == 0)
		{
			flag = 1;
			val = strtok(NULL, d);
			break;
		}
		i++;
		free(line);
	}
	if (flag == 0)
		return (NULL);
	v_copy = _strdup(val);
	free(line);
	return (v_copy);
}
