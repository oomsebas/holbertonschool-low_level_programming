#include <stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"
/**
*print_numbers - print the numbers with a designated separator
*@separator: the separetor between numbers
*@n: the amount of numbers to print
* @...: numbers to be printed
* Return: None
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);
	if (n == 0)
	{
		va_end(ap);
		return;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < (n - 1) && (separator != NULL))
			printf("%c ", *separator);
	}
	printf("\n");
	va_end(ap);
}
