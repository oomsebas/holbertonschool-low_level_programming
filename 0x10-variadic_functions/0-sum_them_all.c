#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *sum_them_all - sum several items
 * @n: numbers of arguments to sum
 * @...: numbers to sum
 * Return: the sum of the numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i = 0, sum = 0;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
