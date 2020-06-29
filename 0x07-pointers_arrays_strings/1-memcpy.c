#include "holberton.h"

/**
 *_memcpy - a function that fills memory with a constant byte.
 *@dest: space in memory to fill
 *@src: space in memory to copy
 *@n: the number of places to write
 *
 *Return: a pointer to the memory area dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

		while (n--)
		{
			*p = *src;
			src++;
			p++;
		}

	return (dest);
}
