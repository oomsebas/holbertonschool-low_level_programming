#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 *
 */
int *array_range(int min, int max)
{
	int *p, i, range;

	if (min > max)
		return (NULL);

	range = max - min;
	p = malloc(sizeof(int) * range + 1);
	if (p == NULL)
		return (NULL);

	p[0] = min;
	for (i = 1; i <= range; i++)
	{
		p[i] = p[i-1] + 1;
	}
	return (p);

}
