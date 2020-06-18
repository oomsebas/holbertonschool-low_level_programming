#include "holberton.h"

/**
 *print_diagonal - function that draws a diagonal line on the terminal
 *@n: number of diagonal places to print
 *
 *Return: None
 */
void print_diagonal(int n)
{
	int spaces = 0;
	int counter = 0;

	if (n <= 0)
		_putchar('\n');
	while (n > 0)
	{
		spaces = counter;
		while (spaces--)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
		n--;
		counter++;
	}

}
