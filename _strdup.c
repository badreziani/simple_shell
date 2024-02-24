#include "shell.h"

/**
 * _strdup - duplicates a string
 * @s: the string to be duplicated
 * Return: a pointer to the new string
 */
char *_strdup(const char *s)
{
	char *copy = NULL;
	size_t i = 0;

	copy = malloc(sizeof(char) * (1 + _strlen(s)));
	if (!copy)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		copy[i] = s[i];
		i++;
	}
	return (copy);
}
