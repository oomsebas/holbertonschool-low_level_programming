#include "holberton.h"

/**
 *rev_string - function that reverses a string.
 *@s: the string to reverse.
 *
 *Return: None.
 */

void rev_string(char *s)
{
	int len;
	int i;
	char c;

	len = _strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		c = s[i];
		s[i] = s[(len - 1) - i];
		s[(len - 1) - i] = c;
	}
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
