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
	if (size <=0)
		_putchar('#');

	col = size;
	row = size;
	while (row--)
	{
		while (col--)
		{
			_putchar('#');
		}
		_putchar('\n');
		col = size;
	}
}
