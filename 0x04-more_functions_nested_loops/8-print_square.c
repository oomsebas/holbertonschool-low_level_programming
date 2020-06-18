#include "holberton.h"

/**
 *print_square - prints a square, followed by a new line.
 *@size: the number of rows a columns of the square.
 *
 *Return: None
 */
void print_square(int size)
{
	int j, n;

	j = size;
	n = size;
	if (size <= 0)
		_putchar('\n');

	while (n--)
	{
		while (j--)
		{
			_putchar('#');
		}
		_putchar('\n');
		j = size;
	}

}
