#include "holberton.h"

/**
 *print_rev - function that prints a string, in reverse,
 *followed by a new line.
 *@s: pointer to the string ti reverse.
 *
 *Return: None.
 *
 */
void print_rev(char *s)
{
	int len;

	len = _strlen(s);
	s = s + len - 1;
	while (len--)
	{
		_putchar(*s);
		s = s - 1;
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
