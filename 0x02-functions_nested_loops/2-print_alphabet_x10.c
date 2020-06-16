#include "holberton.h"

/**
 *print_alphabet_x10 - prints the alphabet to stdout ten times
 *
 */
void print_alphabet_x10(void)
{
	int n = 97;
	int m = 0;

	while (m <= 9)
	{
		while (n <= 122)
		{
			_putchar(n);
			n++;
		}
	_putchar(10);
	m++;
	n = 97;
	}
}
