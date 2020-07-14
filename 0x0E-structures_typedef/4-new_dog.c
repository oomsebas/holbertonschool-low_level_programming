#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *new_dog - creates a dinamic structure
 *@name: name for the dog
 *@age: age for the dog
 *@owner: name of the owner
 *Return: None
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);

	if (name)
	{
		ptr->name = malloc(sizeof(char) * (_strlen(name) + 1));
		if (ptr->name == NULL)
		{
			free(ptr);
			return (NULL);
		}
			_strcpy(ptr->name, name);
	}
	else
		ptr->name = NULL;

	if (owner)
	{
		ptr->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
		if (ptr->owner == NULL)
		{
			free(ptr->owner);
			free(ptr);
			return (NULL);
		}
		_strcpy(ptr->owner, owner);
	}
	else
		ptr->owner = NULL;

	ptr->age = age;

	return (ptr);
}

/**
 * _strcpy - copies one string into another
 * @dest: the destination to copy into
 * @src: the source to copy from
 * Return: Pointer to copied string.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
		dest[i] = src[i];

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
