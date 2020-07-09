#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *string_nconcat - function that concatenates two strings.
 *@s1: direction to copy
 *@s2: direction to the string source
 *@n: number of characters to copy
 *Return: pointer to the allocated memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= (_strlen(s2) + 1))
	{
		n = _strlen(s2);
	}

	size1 = _strlen(s1);
	p = malloc((size1 + n) + 2);
	if (p == NULL)
		return (NULL);

	p = _strcpy(p, s1);
	p = _strncat(p, s2, n);

	return (p);

}

/**
 *_strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 *@dest: destination of the array
 *@src: source to coy
 *
 *Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len;
	int i;

	len = _strlen(src);
	for (i = 0; i <= len ; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}

/**
 *_strncat - a function that concatenates two strings n bytes
 *@dest: destiny string
 *@src: source string to be appended.
 *@n: number of bytes to be appended.
 *
 *Return: pointes with the direction of the copied string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len;
	char *cp;

	len = _strlen(dest);
	cp = dest + len;

	while (n--)
	{
		*(cp) = *src;
		src++;
		cp++;
		if (*src == '\0')
		{
			break;
		}
	}
	*cp = '\0';
	return (dest);
}


/**
 *_strlen - function that returns the length of a string.
 *@s: string to measute its length.
 *
 *Return: int with the length of n.
 */
unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	while (*s)
	{
		len += 1;
		s = s + 1;
	}

	return (len);
}
