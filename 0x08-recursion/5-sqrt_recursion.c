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

	res = binary_search(1, n, n);
	return (res);
}

int binary_search(int start, int end, int n)
{
	int mid;

	mid = (start + end) / 2;
	if (((mid * mid) <= n) && (((mid+1) * (mid +1)) > n))
	{
		if (mid * mid == n)
			return (mid);
		else
			return(-1);
	}
	else
	{
		if ((mid * mid) <= n)
		{
			mid = binary_search(mid + 1, end, n);
		}
		else
		{
			mid = binary_search(start, mid - 1, n);
		}
	}
	return (mid);

}
