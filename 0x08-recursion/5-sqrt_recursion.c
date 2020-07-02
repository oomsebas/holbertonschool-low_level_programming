#include "holberton.h"

/**
 *_sqrt_recursion - function that returns the natural square root of a number
 *@n: the number to square root.
 *
 *Return: None.
 */
int _sqrt_recursion(int n)
{
	int res;

	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	res = binary_search(1, n, n);
	return (res);
}

/**
 *binary_search - function that returns the natural square root of a number.
 *@res: the end of the interval
 *@n: the number for the root
 *
 *Return: None
 */

int binary_search(int n, int root)
{
	if (root * root == n)
		return (root);
	if (root * root > n)
		return (-1);

	return (binary_search(n, root + 1));

}
