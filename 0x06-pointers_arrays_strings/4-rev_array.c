#include "holberton.h"

/**
 *reverse_array - function that reverses the content of an array of integers.
 *@a: the reference of the array a
 *@n: the size of the array.
 *
 *Return: None;
 */
void reverse_array(int *a, int n)
{
	int j, z;

	j = 0;
	n = n - 1;
	while (j < n)
	{
		z = a[n];
		a[n] = a[j];
		a[j] = z;
		n--;
		j++;
	 }
}
