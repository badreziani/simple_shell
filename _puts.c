#include "shell.h"

/**
 * _puts - Prints a string
 * @s: the string to print
 * Return: the number of printed characters
 */
ssize_t _puts(char *s)
{
	return (write(1, s, _strlen(s)));
}
