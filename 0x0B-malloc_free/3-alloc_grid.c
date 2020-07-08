#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - function that returns a pointer to a 2 dimensional
 *array of integers.
 *@width: width of the 2d array
 *@height: height of the 2d array
 *Return: pointer to the 2d array
 */
int **alloc_grid(int width, int height)
{
	int  **p;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(height * sizeof(int *));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);

}
