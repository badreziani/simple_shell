#include "shell.h"

/**
 * _perror - prints error to sdtout
 * @sh_name: the name of the shell
 * @i: the index of the command
 * @cmd: the command
 */
void _perror(char *sh_name, char *i, char *cmd)
{
	_puts(sh_name);
	_puts(": ");
	_puts(i);
	_puts(": ");
	_puts(cmd);
	_puts(": not found\n");
}
