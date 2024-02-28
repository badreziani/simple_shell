#include "shell.h"

/**
 * _perror - prints error to sdtout
 * @sh_name: the name of the shell
 * @i: the index of the command
 * @cmd: the command
 */
void _perror(char *sh_name, char *i, char *cmd)
{
	_putr(sh_name);
	_putr(": ");
	_putr(i);
	_putr(": ");
	_putr(cmd);
	_putr(": not found\n");
}
