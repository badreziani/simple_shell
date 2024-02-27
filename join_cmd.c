#include "shell.h"
/**
 * join_cmd - joins the command
 * @full_cmd: the full command
 * @path: the path
 * @cmd: the short command
 * Return: the full command
 */

char *join_cmd(char *full_cmd, char *path, char *cmd)
{
	size_t i, j;

	for (i = 0; path[i] != '\0'; i++)
		full_cmd[i] = path[i];
	full_cmd[i] = '/';
	i++;
	for (j = 0; cmd[j] != '\0'; j++)
	{
		full_cmd[i] = cmd[j];
		i++;
	}
	full_cmd[i] = '\0';
	return (full_cmd);
}
