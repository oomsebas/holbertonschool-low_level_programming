#include "holberton.h"

/**
 *print_array - function that prints n elements of an array of integers,
 *followed by a new line.
 *@a: pass by reference of the array
 *@n: number of places to print
 *
 *Return: None
 */
void print_array(int *a, int n)
{

	while (n > 0)
	{
		printf("%d", *a);
		if (n > 1)
			printf(", ");
		a++;
		n--;
	}
	printf("\n");
}
