#include "holberton.h"

/**
 *binary_to_uint - converts a binary to unsigned int
 *@b: pointer to a binary in char format
 *Return: converted binary
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int acum = 0;
	int i = 0, mult = 0;

	if (b == NULL)
		return (0);

	while (b[i])
		i++;

	while (i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		acum += (b[i] - '0') * (1 << mult);
		mult++;
	}
	return (acum);

}
