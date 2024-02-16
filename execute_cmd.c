#include "shell.h"
/**
 * execute_cmd - executes a command
 * @cmd: the command line
 * Return: nothing
 */
void execute_cmd(char *cmd)
{
	char **tokens;
	char **env = {NULL};
	char *copy;
	char *d = " \n";
	char *tok;
	int i = 0, status;
	pid_t pid;

	copy = malloc(sizeof(char) * (1 + _strlen(cmd)));
	if (!copy)
	{
		perror("malloc 1");
		exit(1);
	}
	copy = _strcpy(copy, cmd);
	tok = strtok(cmd, d);
	while (tok)
	{
		i++;
		tok = strtok(NULL, d);
	}
	tokens = malloc(sizeof(char *) * (i + 1));

	i = 0;
	tok = strtok(copy, d);
	while (tok)
	{
		tokens[i] = malloc(sizeof(char) * (1 + _strlen(tok)));
		tokens[i] = strcpy(tokens[i], tok);
		if (!tokens[i])
		{
			/* TO DO: Free all*/
			perror("malloc 2");
			exit(1);
		}
		i++;
		tok = strtok(NULL, d);
	}
	tokens[i] = NULL;
	pid = fork();
	if(pid == 0)
	{
		if(execve(tokens[0], tokens, env) == -1)
			perror("execve");
	}
	else
		wait(&status);
	/* TO DO: Free tokens */
}
