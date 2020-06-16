#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @c: The number to extract the last digit.
 *
 * Return: The last digit of c.
 */
int print_last_digit(int c)
{
	int res;

	last = (c % 10);

	if (res < 0)
	{
		res = res * (-1);
		_putchar(res + '0');
		return (res);
	}
	else
	{
		_putchar(res + '0');
		return (res);
	}
}
