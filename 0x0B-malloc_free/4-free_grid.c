#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - function that frees a 2 dimensional grid.
 *@grid: pointer of the 2d array to free
 *@height: height of the 2d array
 *Return: None
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (height--)
	{
		free(*(grid + i));
		i++;
	}
	free(grid);

}
