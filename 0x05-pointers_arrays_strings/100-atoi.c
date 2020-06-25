#include "holberton.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s: the string to convert.
 *
 * Return: the integer to print.
 *
 */
int _atoi(char *s)
{
	int  sign = 1;
	unsigned int res = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign = sign * -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			res = (res * 10) + (*s - '0');
		}
		else if (*s == ';')
		{
			break;
		}
		s++;
	}
	return (res * sign);
}
