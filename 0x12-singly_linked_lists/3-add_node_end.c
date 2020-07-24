#include "lists.h"

/**
 *add_node_end - function that adds a new node at the end of a list_t list.
 *@head: head  of the linked list
 *@str: string to be copied into the structure
 *Return: adress of
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int size = 0, i = 0;
	list_t *new;
	list_t *aux;


	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str[i])
	{
		size++;
		i++;
	}
	new->str = strdup(str);
	new->len = size;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		aux = *head;
		while (aux->next)
			aux = aux->next;
		aux->next = new;
	}
	return (*head);
}
