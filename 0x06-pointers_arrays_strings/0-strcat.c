#include "holberton.h"

/**
 *_strcat - function that concatenates two strings.
 *@dest: destiny string.
 *@src: string to append to dest.
 *
 *Return: pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int len;
	char *cp;

	len = _strlen(dest);
	cp = dest + len;
	*(cp - 1) = 32;         /*add the space between strings*/
	while (*src != '\0')
	{
		*(cp) = *src;
		src++;
		cp++;
	}
	return (dest);
}

/**
 *_strlen - function that returns the length of a string.
 *@s: string to measute its length.
 *
 *Return: int with the length of n.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len += 1;
		s = s + 1;
	}

	return (len);
}
