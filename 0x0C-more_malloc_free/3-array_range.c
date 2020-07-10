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

	range = _abs(max-min);
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

/**
 *_abs - computes the absolute value of a number
 *@c: the number to compute the absolute value
 *
 *Return: the absolute value of the number
 */
int _abs(int c)
{
	if (c > 0)
	{
		return (c);
	}
	else if (c == 0)
	{
		return (0);
	}
	else
	{
		c = (-1) * c;
		return (c);
	}
}
