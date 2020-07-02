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
 *@start: the init of the interval
 *@end: the end of the interval
 *@n: the number for the root
 *
 *Return: None
 */

int binary_search(int start, int end, int n)
{
	int mid;

	mid = (start + end) / 2;
	if (((mid * mid) <= n) && (((mid + 1) * (mid + 1)) > n))
	{
		if ((mid * mid) == n)
			return (mid);
		else
			return (-1);
	}
	else
	{
		if ((mid * mid) <= n)
		{
			return (binary_search(mid + 1, end, n));
		}
		else
		{
			return  (binary_search(start, mid - 1, n));
		}
	}
	return (start);

}
