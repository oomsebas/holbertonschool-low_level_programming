#include "holberton.h"
#include <stdio.h>
/**
 *main - program that adds positive numbers.
 *@argc: number of arguments passed for the sum
 *@argv: array of pointer to the arguments
 *
 *Return: 0 success, 1 error.
 */

int main(int argc, char **argv)
{
	int cents[] = {25, 10, 5, 2, 1};
	int  total, div, cont = 0;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = _atoi(argv[1]);
	if (total < 0)
       	{
       		printf("%d\n", 0);
       		return (0);
       	}

	for (i = 0; i < 5; i++)
	{
		div = total / cents[i];
		cont += div;
		total = total - (div * (cents[i]));
	}
	printf("%d\n", cont);
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
