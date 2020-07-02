#include "holberton.h"

/**
 *_sqrt_recursion - function that returns the natural square root of a number
 *@n: the number to square root.
 *
 *Return: None.
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);
	else if (n > 0)
		return (binary_search(n, 1));
	return (0);
}

/**
 *binary_search - function that returns the natural square root of a number.
 *@n: the number for the root
 *@root: init number
 *Return: None
 */

int binary_search(int n, int root)
{
	if (root * root == n)
		return (root);
	else if (root * root > n)
		return (-1);

	return (binary_search(n, root + 1));

}
