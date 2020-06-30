#include "holberton.h"

/**
 *_strspn - a function that gets the length of a prefix substring
 *@s: string to detect
 *@accept: number of bytes of the segment
 *
 *Return: a pointer to the memory area dest.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, cont = 0, len = 1;

	for (i = 0; accept[i] != '\0'; i++)
	{
		len += 1;
	}

	while (*s != '\0')
	{
		for (i = 0; i <= len; i++)
		{

			if (*s == accept[i])
			{
				cont += 1;
				break;
			}
			else if (i == len)
			{
				return (cont);
			}
		}
		s++;
	}
	return (cont);
}
