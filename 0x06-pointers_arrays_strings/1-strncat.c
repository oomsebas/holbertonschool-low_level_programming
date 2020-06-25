#include "holberton.h"

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
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len += 1;
		s = s + 1;
	}

	return (len);
}
