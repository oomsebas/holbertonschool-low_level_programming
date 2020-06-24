#include "holberton.h"

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
	for (i = 0; i < len ; i++)
	{
		*(dest + i) = *(src + i);
	}
	printf("%s", dest);
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
