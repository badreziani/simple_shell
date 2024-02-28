#include "shell.h"

/**
 * is_func - checks whether a passed cmd is function
 * @cmd: the command to check
 * Return: 0 or 1
 */

int is_func(char *cmd)
{
	return (_strcmp(cmd, "exit") == 0 || _strcmp(cmd, "env") == 0);
}
