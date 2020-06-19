#include "holberton.h"

/**
 *print_triangle - prints a triangle, followed by a new line.
 *@size: the number of rows a columns of the triangle.
 *
 *Return: None
 */
void print_triangle(int size)
{
	int col = size;
	int row = size;
	int spaces = size;
	int counter = 1;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	while (row--)
	{
		spaces = size - counter;
		while (spaces--)
		{
			_putchar(' ');
			col--;
		}
		while (col--)
		{
			_putchar('#');
		}
		_putchar('\n');
		counter += 1;
		col = size;

	}
}
