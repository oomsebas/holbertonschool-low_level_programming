#include "holberton.h"
#include <stdio.h>

/**
 *main- program that prints the name of the program
 *@argc: integer containing the number of arguments passed to the function
 *@argv: array of pointers pointing to the arguments passed
 *
 *Return: 0 for sucess, 1 for error.
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
