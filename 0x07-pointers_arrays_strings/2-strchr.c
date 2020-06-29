#include "holberton.h"

/**
 *_strchr - a function that fills memory with a constant byte.
 *@s: string to detect
 *@c: character to detect on s
 *
 *Return: a pointer to the memory area dest.
 */
char *_strchr(char *s, char c)
{
	int cont = 1;
	int i = 0;

	while (s[i] != '\0')
	{
		cont += 1;
		i++;
	}

	while (cont--)
	{
		s++;
		if (*s == c)
			return (s);
	}
	return (NULL);
}
