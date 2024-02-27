#include "shell.h"

/**
 * convert_uint - convert a number to a string
 * @n: the the number
 * Return: a string
 */
char *convert_uint(unsigned int n)
{
	char *str;
	int len = 2, tmp;

	tmp = n;
	while (tmp >= 0)
	{
		if (tmp / 10 == 0)
			break;
		tmp /= 10;
		len++;
	}
	str = malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	tmp = n;
	len--;
	str[len--] = '\0';
	for (; len >= 0; len--)
	{
		str[len] = (tmp % 10) + '0';
		tmp /= 10;
	}
	return (str);
}
