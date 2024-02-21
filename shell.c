#include "shell.h"

/**
 * main - The entry point of the shell
 * @ac: number of items in av
 * @av: NULL terminated array of strings
 * Return: 0
 */
int main(__attribute__((unused))int ac, __attribute__((unused))char **av)
{
	ssize_t nread = 0;
	char *line = NULL;
	size_t n = 0;
	char *exit;
	int isCMP;

	exit = "exit";
	while (1)
	{
		_puts("($) ");
		nread = getline(&line, &n, stdin);
		if (nread == -1){
			break;
		}
		else {
			if (line[nread - 1] == '\n') {
				line[nread - 1] = '\0';
			}
			isCMP = _strcmp(line,exit);
			if (isCMP == 0) {
				break;
			}else{
				execute_cmd(line);
			}
		}
		free(line);
	}
	return (0);
}

