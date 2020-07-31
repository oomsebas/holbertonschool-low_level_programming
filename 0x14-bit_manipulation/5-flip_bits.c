#include "holberton.h"

/**
 *flip_bits - function that returns the number of bits you would need to flip
 *to get from one number to another.
 *@n: number base
 *@m: target number
 *Return: bits to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned long int flip;

	flip = n ^ m;

	for (flip = n ^ m; flip; flip >>= 1)
		if (flip & 1)
			i++;

	return (i);
}
