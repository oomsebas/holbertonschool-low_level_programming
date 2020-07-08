#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *argstostr - function that frees a 2 dimensional grid.
 *@ac: pointer of the 2d array to free
 *@av: height of the 2d array
 *Return: None
 */
char *argstostr(int ac, char **av)
{
	int i, sum = 0;
	char *p, *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		sum += _strlen(*(av + i));
	p = malloc((sum * sizeof(char)) + ac - 1);
	if (p == NULL)
	{
		return (NULL);
	}
	s = p;

	for (i = 0; i < ac; i++)
	{
		p = copystr(p, *(av + i));
		p++;
	}
	return (s);
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

	if (s == NULL)
	{
		return (0);
	}

	while (*s)
	{
		len += 1;
		s = s + 1;
	}

	return (len);
}

/**
 *copystr- function that frees a 2 dimensional grid.
 *@dest: pointer of the 2d array to free
 *@source: height of the 2d array
 *Return: None
 */
char *copystr(char *dest, char *source)
{

	while (*source)
	{
		*dest = *source;
		source++;
		dest++;
	}
	*dest = '\n';
	return (dest);
}
