#include "holberton.h"

/**
 *_islower - Detects a if a character is lowercase or not.
 *@c: the ASCII to be detected if it is lower case
 *
 *Return: 1 - is lower case. 0 - if not.
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

