#include "holberton.h"

/**
 *is_palindrome - checks if a string is palindromic
 *@s: the string to be checked
 *
 *Return: If palindromic then 1, else 0
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (_strcmp_recursion(s, 0, length - 1));
}

/**
 *_strlen_recursion - function that counts the length of
 *string using recursion
 *@s: the string to be counted
 *
 *Return: Length of string.
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

/**
 * _strcmp_recursion - function that compares the characters of
 * first half and back second half of string
 * @s: the string to be compared
 * @n: the starting point for first half
 * @length: the starting point for the second half
 *
 * Return: 1 if all chars were equal, else 0.
 */
int _strcmp_recursion(char *s, int n, int length)
{
	if (n > length)
		return (1);
	if (s[n] != s[length])
		return (0);

	return (_strcmp_recursion(s, n + 1, length - 1));
}

