#include "holberton.h"

/**
 * swap_int - function that swaps the values of two integers.
 *@a: pointer to first value to interchange for b
 *@b: pointer to second value to interchange for a
 *
 *return: None.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
