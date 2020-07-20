#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 *print_all - function that prints anything.
 *@format: format to print every character c:char i:integer f:float, s:string
 *@...: the arguments to print.
 *Return: None.
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	va_list ap;
	op_ ops[] = {
		{"c", printc},
		{"i", printi},
		{"f", printfl},
		{"s", prints},
		{NULL, NULL},
	};

	va_start(ap, format);
	while (format[i])
	{
		j = 0;
		while (format[j])
		{
			if (ops[j].op[0] == format[i])
			{
				(*ops[j].f)(ap);
			}
			j++;
		}
		i++;
	}
	printf("\n");

}

/**
 *printc - function that prints char.
 *@ap: list with the parameter to print
 *Return: None.
 */
void printc(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 *printi - function that prints integer.
 *@ap: list with the parameter to print
 *Return: None.
 */
void printi(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 *printfl - function that prints float.
 *@ap: list with the parameter to print
 *Return: None.
 */
void printfl(va_list ap)
{
	printf("%2f", va_arg(ap, double));
}

/**
 *prints - function that prints string.
 *@ap: list with the parameter to print
 *Return: None.
 */
void prints(va_list ap)
{
	printf("%s", va_arg(ap, char*));
}
