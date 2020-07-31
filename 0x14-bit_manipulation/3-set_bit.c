#include "holberton.h"

/**
 *set_bit - set a bit from a number n
 *@n: number to set a bit
 *@index: index to be acknowledge
 *Return: 1 for success, -1 to error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (sizeof(n) * 8 < index)
		return (-1);

	(*n) = (*n) | (1 << index);
	return (1);
}
