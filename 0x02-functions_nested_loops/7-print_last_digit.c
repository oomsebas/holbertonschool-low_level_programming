#include "holberton.h"

/**
 *print_last_digit - prints the last digit of a number.
 *@c: the number to extract the last digit
 *
 *Return: the last digit of c
 */
int print_last_digit(int c)
{
	c = _abs(c);
	c = c % 10;
	_putchar(c + '0');
	return (c);
}
