#include "shell.h"

/**
 * _strlen - counts the length of a string
 * @s: the string
 * Return: the number of character in s
 */
size_t _strlen(const char *s)
{
	size_t len = 0;

	if (!s)
		return (0);
	while (s[len] != '\0')
		len++;
	return (len);
}
