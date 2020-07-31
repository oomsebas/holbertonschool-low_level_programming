#include "holberton.h"

/**
 *get_bit - get a bit number according to a given index
 *@n: number to get the index
 *@index: index to search
 *Return: the number of the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index <= 32)
	{
		i = (n >> index) & 1;
		return (i);
	}
	return (-1);
}
