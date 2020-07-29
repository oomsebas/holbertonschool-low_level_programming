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
	listint_t *aux;
	listint_t *new;
	listint_t *aux1;

	aux = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	while (--idx)
	{
		aux = aux->next;
	}
	new->n = n;
	aux1 = aux->next;
	aux->next = new;
	new->next = aux1;

	return (new);
}