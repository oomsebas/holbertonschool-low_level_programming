#include "holberton.h"

/**
 *print_binary - print a binary number
 *@n:decimal number to be printed in binary
 *Return: None.
 */
void print_binary(unsigned long int n)
{
	char c;

	if (n > 1)
		print_binary(n >> 1);
	c = (n & 1) + '0';
	_putchar(c);
}
