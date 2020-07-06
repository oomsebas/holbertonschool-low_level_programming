#include "holberton.h"
#include <stdio.h>

/**
 *main - program that adds positive numbers.
 *@argc: number of arguments passed for the sum
 *@argv: array of pointer to the arguments
 *
 *Return: 0 success, 1 error.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc <= 1)
	{
		printf("%d\n", 0);
		return (1);
	}
	for (i = 1 ; i < argc ; i++)
	{
		if (_isdigit(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum = sum + _atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

/**
 *_isdigit - function that checks for a digit (0 through 9).
 *@c: the digit to detect
 *
 *Return: 1 if c is a digit, 0 otherwise.
 *
 */
int _isdigit(char *c)
{
	while (*c != '\0')
	{
		if (*c < '0' || *c > '9')
		{
			return (1);
		}
		c++;
	}
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
