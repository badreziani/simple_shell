#include "shell.h"

/**
 * get_full_cmd - return the full path to a command
 * @cmd: the command
 * @env: NULL terminated array of strings
 * Return: full command
 */
char *get_full_cmd(char *cmd, char **env)
{
	char *path_s, *path, *full_cmd, *d = ":";
	struct stat st;

	if (stat(cmd, &st) == 0)
	{
		full_cmd = _strdup(cmd);
		if (!full_cmd)
			return (NULL);
		return (full_cmd);
	}
	path_s = _getenv("PATH", env);
	if (!path_s)
		return (NULL);
	path = strtok(path_s, d);
	while (path)
	{
		full_cmd = malloc(sizeof(char) * (_strlen(cmd) + _strlen(path) + 2));
		if (full_cmd)
		{
			full_cmd = join_cmd(full_cmd, path, cmd);
			if (stat(full_cmd, &st) == 0)
			{
				free(path_s);
				return (full_cmd);
			}
		}
		free(full_cmd);
		path = strtok(NULL, d);
	}
	free(path_s);
	return (NULL);
}
