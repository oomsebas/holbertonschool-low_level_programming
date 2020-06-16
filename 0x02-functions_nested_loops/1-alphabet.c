#include "holberton.h"

/**
 * print_alphabet - Prints the alphabet from a-z to stdout.
 */
void print_alphabet(void)
{
	int n = 97;

	while (n <= 122)
	{
		_putchar(n);
		n++;
	}
	_putchar(10);
}
