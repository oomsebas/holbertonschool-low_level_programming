#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char pr[9] = "Holberton";
	int  i;

	for (i = 0; i <= 8; i++)
	{
	_putchar(pr[i]);
	}
	_putchar(10);
	return (0);
}
