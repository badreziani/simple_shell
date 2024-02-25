#include "shell.h"
/**
 * execute_cmd - executes a command
 * @tokens: Array of the command args
 * @argv: NULL terminated array of string
 * @env: NULL terminated array of string
 * Return: the status of the execution
 */
int execute_cmd(char **tokens, char **argv, char **env)
{
	pid_t pid;
	int wstatus;

	pid = fork();
	if (pid == 0)
	{
		if (execve(tokens[0], tokens, env) == -1)
		{
			perror(argv[0]);
			free_array(tokens);
			exit(0);
		}
	}
	else
	{
		wait(&wstatus);
		free_array(tokens);
	}
	return (WEXITSTATUS(wstatus));
}
