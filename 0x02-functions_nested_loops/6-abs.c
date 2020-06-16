#include "holberton.h"
#include <stdio.h>

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
