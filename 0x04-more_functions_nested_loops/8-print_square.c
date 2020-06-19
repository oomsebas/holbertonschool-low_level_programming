#include "holberton.h"

/**
 *print_square - prints a square, followed by a new line.
 *@size: the number of rows a columns of the square.
 *
 *Return: None
 */
void print_square(int size)
{
	int col = size, row = size;

	if (size <= 0)
		_putchar('#');
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
