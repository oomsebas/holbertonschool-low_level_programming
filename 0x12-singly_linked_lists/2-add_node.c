#include "lists.h"
#include <string.h>

/**
 *add_node - function that adds a new node at the beginning of a list_t list.
 *@head: the direction to create the node
 *@str: the string to copy into the new node
 *Return: the new node created
 */
list_t *add_node(list_t **head, const char *str)
{
	int size = 0, i = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		size++;
		i++;
	}
	new->str = strdup(str);
	new->len = size;
	new->next = *head;
	*head = new;

	return (*head);
}
