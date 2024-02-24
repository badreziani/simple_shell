#include "shell.h"
/**
 * free_array - frees an array
 * @arr: array of strings
 * Return: nothing
 */
void free_array(char **arr, size_t len)
{
	size_t i;
	if (!arr)
		return;
	for (i = 0; i < len; i++)
		free(arr[i]), arr[i] = NULL;
	free(arr), arr = NULL;
}
