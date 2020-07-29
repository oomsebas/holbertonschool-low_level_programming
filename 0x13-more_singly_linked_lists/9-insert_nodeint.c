#include "lists.h"

/**
 *insert_nodeint_at_index - function that inserts a new node at
 *a given position
 *@head: entry point for the linked list
 *@idx: index to insert the node
 *@n: number to fill the new node
 *Return: pointer to the new created node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux = NULL;
	listint_t *new = NULL;
	listint_t *aux1 = NULL;


	if (*head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}

	aux = *head;

	while (--idx && aux != NULL)
	{
		aux = aux->next;
	}

	if (idx > 0)
		return (NULL);

	if(!idx)
	{
		new->n = n;
		aux1 = aux->next;
		aux->next = new;
		new->next = aux1;
	}

	return (new);
}
