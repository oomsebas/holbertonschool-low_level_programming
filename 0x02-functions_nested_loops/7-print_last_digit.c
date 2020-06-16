#include "holberton.h"

/**
 *print_last_digit - prints the last digit of a number
 *@c: the number to extract the last digit
 *
 *Return: res the last digit of c
 */
int print_last_digit(int c)
{
	int res, res1;

	if (c >= 0)
	{
		res = (c % 10);
	}
	else
	{
		res1 = c * (-1);
		res = (res1 % 10);
	}
	_putchar(res + '0');
	return (res);
}
