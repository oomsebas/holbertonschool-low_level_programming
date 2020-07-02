#include "holberton.h"

/**
 * _pow_recursion - unction that returns the value of x raised to
 *the power of y
 *@x: base.
 *@y: exponent.
 * Return: int with the result
 */
int _pow_recursion(int x, int y)
{
	int res;

	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (x == 0)
		return (0);
	y--;
	res = _pow_recursion(x, y);
	res = res * x;
	return (res);
}
