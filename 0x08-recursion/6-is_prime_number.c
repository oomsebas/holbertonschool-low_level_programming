#include "holberton.h"

/**
 *is_prime_number - a function that returns 1 if the input integer is a prime
 *number, otherwise return 0. - checks if 'n' is prime
 *@n: the number to be checked
 *
 * Return: If prime then 1, else 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (check_factor(n, 2));
}

/**
 * check_factor - funtion to see if n is a factor
 * a factor of 'n'
 * @n: the number to be checked
 * @fact: the factor to check if it goes into 'n'
 *
 * Return: If does not factor then 1, else 0.
 */
int check_factor(int n, int fact)
{
	if (n % fact == 0)
		return (0);
	if (fact == (n / 2))
		return (1);

	return (check_factor(n, fact + 1));
}
