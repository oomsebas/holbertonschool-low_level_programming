#include "lists.h"

/**
 *add_dnodeint_end - function that adds a node at the end
 *@head: pointer to the head of the linked list
 *@n: parameter to be copied on the list
 *Return: direction to the last node created.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	join_tail(*head, new);

	return (new);
}

/**
 *join_tail- recursive function to find the last node and join i to
 * the new one created
 *@h: head node
 *@new: pointer to the new node
 *Return: None.
 */
void join_tail(dlistint_t *h, dlistint_t *new)
{

	if (h->next == NULL)
	{
		h->next = new;
		new->prev = h;
		return;
	}
	h = h->next;
	join_tail(h, new);
}
