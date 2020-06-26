#include "holberton.h"

/**
 *rot13 - function that encodes a string into 1337.
 *@s: the string to encode
 *
 *Return: pointer to the encoded array
 */
char *rot13(char *s)
{
	int i, j;
	char c[] = {"aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ"};
	char num[] = {"nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmMnN"};

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while (c[j] != '\0')
		{
			if (s[i] == c[j])
			{
				s[i] = num[j];
				break;
			}
			j++;
		}
	}
	return (s);
}
