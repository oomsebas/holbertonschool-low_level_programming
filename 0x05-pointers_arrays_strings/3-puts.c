#include "holberton.h"

/**
 *_puts - function that prints a string, followed by a new line, to stdout.
 *@str: pointer to print.
 *
 *Return: None
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str = str + 1;
	}
	_putchar('\n');

}
