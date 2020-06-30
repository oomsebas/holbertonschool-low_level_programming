#include "holberton.h"

/**
 *_strstr - a function that locates a substring.
 *@haystack: string to look for the substring
 *@needle: string to detect
 *
 *Return: pointer to the first ocurrence in the string.
 */
char *_strstr(char *haystack, char *needle)
{


	while (*needle != '\0')
	{
		while  (*haystack != '\0')
		{
			if (*needle == *haystack)
			{
				return (haystack);
				break;
			}
			haystack++;

		}

		needle++;
	}

	return (NULL);

}
