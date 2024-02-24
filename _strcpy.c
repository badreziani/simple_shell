#include "shell.h"

/**
 * _strcpy - copies a string in an other
 * @dest: the destionation string
 * @src: the source string
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, const char *src)
{
	int i = 0;

	while (1)
	{
		dest[i] = src[i];
		if(src[i] == '\0')
			break;
		i++;
	}

	return (dest);
}
