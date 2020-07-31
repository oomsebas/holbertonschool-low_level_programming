#include "holberton.h"

/**
 *clear_bit - clear a bit for a number n
 *@n: the number to clear the bit
 *@index: index to be cleared
 *Return: 1 for success, -1 for error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if ((sizeof(n) * 8) < index)
		return (-1);

	(*n) = (*n) & ~(1 << index);

	return (1);
}
