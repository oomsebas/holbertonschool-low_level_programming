#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *array_range - function that creates an array of integers
 *@min: min number of the array
 *@max: max number of the array
 *Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *p;
	int i, j, range;

	if (min > max)
		return (NULL);

	range = (max - min) + 1;

	p = malloc(sizeof(int) * range);
	if (p == NULL)
		return (NULL);

	for (i = 0, j = min; j <= max; i++, j++)
		p[i] = j;

	return (p);

}
