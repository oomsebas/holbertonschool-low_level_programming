#include "holberton.h"
#include <stdio.h>

/**
 *main - program that prints the number of arguments passed into it
 *@argc: number of arguments passed
 *@argv: array of pointer to the arguments
 *
 *Return: 0 success, 1 error.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc <= 1)
	{
		printf("%d\n", 0);
	}
	else
		printf("%d\n", argc - 1);
	return (0);
}
