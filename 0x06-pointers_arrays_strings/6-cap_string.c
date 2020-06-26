#include "holberton.h"

/**
 *cap_string - a function that copies a string
 *@s: destiny to copy the string
 *
 *Return: int.
 */
char *cap_string(char *s)
{
	int i, len;

	len = _strlen(s);
	for (i = 0; i < len; i++)
	{
		if ((s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!'
		     || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')'
		|| s[i] == '{' || s[i] == '}' || s[i] == 9 || s[i] == 32
		|| s[i] == 10) && ((s[i + 1] >= 'a')
		&& (s[i + 1] <= 'z')))
		{
			s[i + 1] = s[i + 1] - 32;
		}
	}
	return (s);
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
