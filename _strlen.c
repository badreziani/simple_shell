#include "shell.h"

/**
 * _strlen - counts the length of a string
 * @s: the string
 * Return: the number of character in s
 */
size_t _strlen(char *s)
{
	size_t len = 0;

	while(s[len] != '\0')
		len++;
	return len;
}
