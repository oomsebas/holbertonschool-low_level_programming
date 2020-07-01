#include "holberton.h"

/**
 *_strlen_recusion - function that returns the length of a string.
 *@s: the string to measure.
 *
 *Return: int
 */
int _strlen_recursion(char *s)
{
	int n;

	if (*s == '\0')
		return (n = 0);
	s++;
	n = _strlen_recursion(s);
	n++;
	return (n);
}
