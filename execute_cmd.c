#include "shell.h"
/**
 * execute_cmd - executes a command
 * @tokens: Array of the command args
 * @argv: NULL terminated array of string
 * @env: NULL terminated array of string
 * Return: the status of the execution
 */
int execute_cmd(char **tokens, char **argv, char **env, unsigned int count)
{
	char *full_cmd, *i;
	pid_t pid;
	int wstatus; 

	full_cmd = get_full_cmd(tokens[0], env);
	if (!full_cmd)
	{
		i = convert_uint(count);
		_perror(argv[0], i, tokens[0]);
		free(i);
		free_array(tokens);
		return(127);
	}
	pid = fork();
	if (pid == 0)
	{
		if (execve(full_cmd, tokens, env) == -1)
		{
			free_array(tokens);
			free(full_cmd);
		}
	}
	else
	{
		wait(&wstatus);
		free(full_cmd);
		free_array(tokens);
	}
	return (WEXITSTATUS(wstatus));
}
