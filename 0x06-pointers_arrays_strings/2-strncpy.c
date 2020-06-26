#include "holberton.h"

/**
 *_strncpy - a function that copies a string
 *@dest: destiny to copy the string
 *@src: source string to be copied.
 *@n: number of bytes to be copy.
 *
 *Return: pointer with the direction of the copied string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *cp;
	int i;

	cp = dest;
	while (i <  n && *src != '\0')
	{
		*cp = *src;
		src++;
		cp++;
	}
	n++;
	while (*cp == '*' && n--)
	{
		*cp = '\0';
		cp++;
	}
	return (dest);
}
