#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - function that concatenates two strings.
 *@s1: the first string to concatenate
 *@s2: the second string to concatenate
 *Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2;
	char *p, *c;

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	p = malloc((size1 + size2 + 1) * sizeof(char));
	c = p;
	if (p == NULL)
	{
		return (NULL);
	}
	while (size1--)
	{
		*p = *s1;
		p++;
		s1++;
	}
	if (size2 == 0)
	{
		*p = '\0';
	}
	while (size2--)
	{
		*p = *s2;
		p++;
		s2++;
	}
	*p = '\0';
	return (c);
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

	if ( s == NULL)
	{
		return (0);
	}

	while (*s)
	{
		len += 1;
		s = s + 1;
	}

	return (len);
}
