#include "holberton.h"

/**
 *leet - function that encodes a string into 1337.
 *@s: the string to encode
 *
 *Return: pointer to the encoded array
 */
char *leet(char *s)
{
	int i, j;
	char c[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while (c[j] != '\0')
		{
			if (s[i] == c[j])
			{
				s[i] = num[j];
			}
			j++;
		}
	}
	return (s);
}
