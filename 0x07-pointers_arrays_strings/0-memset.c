#include "holberton.h"

/**
 *_memset - a function that fills memory with a constant byte.
 *@s: space in memory to fill
 *@b: the number byte to write in memory
 *@n: the number of places to write
 *
 *Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (p);
}
