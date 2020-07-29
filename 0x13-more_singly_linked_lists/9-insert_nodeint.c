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
		return (add_nodeint(head, n));
	}
	aux = *head;
	while (--idx && aux != NULL)
	{
		aux = aux->next;
	}
	if (!idx && aux == NULL)
	{
		return (add_nodeint_end(head, n));
	}
	if (idx > 0)
		return (NULL);
	if (!idx)
	{
		new->n = n;
		aux1 = aux->next;
		aux->next = new;
		new->next = aux1;
		return (new);
	}
	return (NULL);
}

/**
 *add_nodeint - function that creates a node at the beginning
 *@head: pointer to the first node;
 *@n: int to add to the new node;
 *Return: pointer to the first element of the list;
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);

}
