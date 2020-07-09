#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *strtow - function that takes an array and return an array of array
 *of each word.
 *@str: pointer of the array to translate
 *Return: pointer to the array 2D.
 */
char **strtow(char *str)
{
	char **q;

	q  = countwords(str);
	q = countletters(str, q);
	llenararr(q, str);
	return (q);
}

/**
 *countwords - function that counts the number of words in str
 *of each word.
 *@s: pointer of the array to translate
 *Return: pointer to the array 2D.
 */
char **countwords(char *s)
{
	int countwords = 0;
	char *p, **q;

	p = s;
	while (*p)
	{
		while (*p == ' ' && *p != '\0')
			p++;
		if (*p == '\0')
			break;
		while ((*p !=  ' ' && *p != '\0'))
		{
			p++;
		}
		countwords += 1;
	}
	q = malloc((countwords + 1) * sizeof(char *));

	if (q == NULL)
	{
		return (NULL);
	}
	return (q);
}

/**
 *countletters - function that counts the number of letters of each word
 *of each word.
 *@p: pointer of the array to translate
 *@q: pointer to the memory allocation of words
 *Return: pointer to the array 2D.
 */

char  **countletters(char *p, char **q)
{
	int i = 0, countletter = 0;

	while (*p)
	{
		countletter = 0;
		while (*p == ' ' && *p != '\0')
			p++;
		if (*p == '\0')
			break;
		while (*p !=  ' ' && *p != '\0')
		{
			p++;
			countletter += 1;
		}
		q[i] = malloc(sizeof(char) * (countletter + 1));
		if (q[i] == NULL)
		{
			while (i--)
			{
				free(q[i]);
			}
			return (NULL);
		}
		i++;
	}
	return (q);
}

/**
 *fillarr - allocates the string of source into the array 2d of destination
 *of each word.
 *@s1: pointer to the destination of the 2d array
 *@s2: pointer to the string 1d to copy to s1
 *Return: None
 */
void fillarr(char **s1, char *s2)
{

	int i = 0, j = 0;

	while (*s2)
	{
		while (*s2 == ' ' && *s2 != '\0')
			s2++;
		if (*s2 == '\0')
		{
			j++;
			break;
		}
		while (*s2 !=  ' ' && *s2 != '\0')
		{
			s1[j][i] = *s2;
			s2++;
			i++;
		}
		s1[j][i] = '\0';
		i = 0;
		j++;
	}
	s1[j] = NULL;

}
