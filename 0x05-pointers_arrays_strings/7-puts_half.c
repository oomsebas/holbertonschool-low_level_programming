#include "holberton.h"

/**
 *puts_half - unction that prints half of a string, followed by a new line.
 *@str: the string to filter.
 *
 *Return: none.
 */
void puts_half(char *str)
{
	int len, i, st;

	len = _strlen(str);
	if (len % 2 == 0)
	{
		st = len / 2;
		for (i = st; i < len; i++)
		{
			_putchar(*(str + i));
		}
	}
	else
	{
		st = (len - 1) / 2;
		for (i = st + 1; i < len; i++)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}

/**
 *_strlen - function that returns the length of a string.
 *@s: string to measute its length.
 *
 *Return: int with the length of n.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len += 1;
		s = s + 1;
	}

	return (len);
}
