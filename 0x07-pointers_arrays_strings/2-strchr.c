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
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return ('\0');
}
