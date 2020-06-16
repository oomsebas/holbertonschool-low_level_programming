#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @c: the number to extract the last digit
 *
 * Return: the last digit of c
 */
int print_last_digit(int c)
{
	int res;

	if (c > 0)
	{
		res = c % 10;
	}
	else if (c == 0)
	{
		res = 0;

        }
	else
	{
		res = (-1) * c;
		res = res % 10;

	}
	_putchar(res + '0');
	return (res);
}
