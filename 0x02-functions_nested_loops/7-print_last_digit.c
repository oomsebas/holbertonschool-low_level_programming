#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @c: the number to extract the last digit
 *
 * Return: res the last digit of c
 */
int print_last_digit(int c)
{
	int res, abs;

	if (c >= 0)
	{
		res = c % 10;
	}
	else
	{
		abs = c * (-1);
		res = abs % 10;

	}
	_putchar(res + '0');
	return (res);
}
