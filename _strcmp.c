#include "shell.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: Interger
 */
int _strcmp(char *s1, char *s2)
{
	int r = 0, i = 0;

	while (1)
	{
		r = s1[i] - s2[i];
		if (r != 0 || (s1[i] == '\0' && s2[i] == '\0'))
			break;
		i++;
	}
	return (r);
}
