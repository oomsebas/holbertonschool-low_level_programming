#include "holberton.h"

/**
 *_atoi - function that convert a string to an integer.
 *@s: the string to
 *
 *Return: the integer to print
 */
int _atoi(char *s)
{
	int  sign = 0, res = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign++;
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
	if (sign % 2 != 0)
	{
		res = res * (-1);
	}
	return (res);
}
