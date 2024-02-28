#include "shell.h"

/**
 * _putr - Prints an error
 * @s: the string to print
 * Return: the number of printed characters
 */
ssize_t _putr(char *s)
{
	return (write(2, s, _strlen(s)));
}
