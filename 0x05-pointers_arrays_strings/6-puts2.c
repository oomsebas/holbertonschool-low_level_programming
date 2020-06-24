#include "holberton.h"

/**
 *puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 *Return: None
 */
void puts2(char *str)
{
	int len;
	int i;

	len = _strlen(str);
	for (i = 0; i < len ; i++)
	{

		if (i % 2 == 0)
		{
			_putchar(*(str+i));
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
