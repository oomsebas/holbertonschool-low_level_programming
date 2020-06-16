#include "holberton.h"

/**
 *_isalpha - this function check for alphabetic character
 *@c: the ASCII character to check.
 *
 *Return: 1 if c is a letter lowercase or uppercase.
 * 0 if not.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);

}
