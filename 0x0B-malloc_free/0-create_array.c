#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 *create_array - function that creates an array of chars,
 *and initializes it with a specific char
 *@size: The size of the memory to allocate
 *@c: the character to fill in the memory
 *Return: direction of the first element of the memory allocation.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr =  malloc((size * sizeof(c)));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
