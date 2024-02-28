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

	i = _strlen(s);
	if (i == 0)
		return (NULL);
	copy = malloc(sizeof(char) * (i + 1));
	if (!copy)
	{
		return (NULL);
	}
	i = 0;
	while (s[i] != '\0')
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
