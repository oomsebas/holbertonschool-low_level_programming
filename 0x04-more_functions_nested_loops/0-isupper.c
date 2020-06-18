#include "holberton.h"

/**
 *_isupper - checks for uppercase character
 *@c: the letter to check
 *
 *Return: 1 if c is uppercse, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
