#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 *_strdup - function that returns a pointer to a newly allocated space in memory
 *, which contains a copy of the string given as a parameter.
 *@str: Pointer indicating the string to copy.
 *Return: pointer indicating the new adress of the copied string.
 */
char *_strdup(char *str)
{
	int i;
	char *p, size;

	if (str == NULL)
	{
		return (NULL);
	}

	size = _strlen(str);
	p = malloc(size * sizeof(str));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size ; i++)
	{
		p[i] = str[i];
	}
	return (p);
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
