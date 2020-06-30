#include "holberton.h"

/**
 *_strpbrk - a function that searches a string for any of a set of bytes.
 *@s: string to detect
 *@accept: the string to detect the first ocurrence.
 *
 *Return: pointer to the first ocurrence in the string.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{

			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (s);

}
