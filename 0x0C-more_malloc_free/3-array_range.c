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
	int i, range;

	if (min > max)
		return (NULL);

	range = (max - min);

	p = malloc(sizeof(int) * range + 1);
	if (p == NULL)
		return (NULL);
	p[0] = min;
	for (i = 1; i <= range; i++)
		p[i] = p[i - 1] + 1;

	return (p);

}
