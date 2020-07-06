#include "holberton.h"
#include <stdio.h>

/**
 *main - program that multiplies two numbers.
 *@argc: number of arguments passed for the multiplication
 *@argv: array of pointer to the arguments
 *
 *Return: 0 success, 1 error.
 */
int main(int argc, char *argv[])
{
	int i, mult = 1;

	if (argc <= 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	for (i = 1 ; i < argc ; i++)
		mult = mult * _atoi(argv[i]);

	printf("%d\n", mult);
	return (0);
}

/**
 * _atoi - function that convert a string to an integer.
 * @s: the string to convert.
 *
 * Return: the integer to print.
 *
 */
int _atoi(char *s)
{
	int  sign = 1;
	unsigned int res = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign = sign * -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			res = (res * 10) + (*s - '0');
		}
		else if (*s == ';')
		{
			break;
		}
		s++;
	}
	return (res * sign);
}


