#include "holberton.h"

/**
 *print_line - function that draws a straight line in the terminal
 *@n: the number of times the underscore is printed
 *
 *Return: None
 *
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
