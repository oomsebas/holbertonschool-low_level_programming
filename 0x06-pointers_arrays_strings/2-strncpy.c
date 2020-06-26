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
	int i;

	for (i = 0; (i < n) && (src[i] != 0); i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
