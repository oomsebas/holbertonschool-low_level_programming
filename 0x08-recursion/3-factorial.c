#include "holberton.h"

/**
 *factorial - function that returns the factorial of a given number.
 *@n: the number to calculate the facotorial.
 *
 *Return: None
 */
int factorial(int n)
{
	int res;

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	n--;
	res = factorial(n);
	n++;
	res = res * n;
	return (res);
}
