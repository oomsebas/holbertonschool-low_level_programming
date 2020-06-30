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
	int cont = 0;

	while (*needle != '\0')
	{
		while (*haystack != '\0')
		{
			haystack++;
			if (*needle == *haystack)
			{
				cont+=1;
				break;
			}


		}
		needle++;
	}

	return (haystack-cont+1);


}
