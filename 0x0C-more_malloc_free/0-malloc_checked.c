#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - function that allocates memory using malloc
 *@b: the number of bytes to allocate
 *
 *Return: pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		free(p);
		exit(98);
	}
	return (p);
}
