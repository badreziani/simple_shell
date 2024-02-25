#include "shell.h"
/**
 * free_array - frees an array
 * @arr: array of strings
 * Return: nothing
 */
void free_array(char **arr)
{
	size_t i = 0;

	if (!arr)
		return;
	while (arr[i])
	{
		free(arr[i]);
		arr[i] = NULL;
		i++;
	}
	free(arr), arr = NULL;
}
