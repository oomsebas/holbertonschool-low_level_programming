#include "lists.h"

/**
 *add_nodeint_end - function that adds a node at the end
 *@head: pointer to the head of the linked list
 *@n: parameter to be copied on the list
 *Return: direction to the last node created.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	new->n = n;
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
void join_tail(listint_t *h, listint_t *new)
{

	if (h->next == NULL)
	{
		h->next = new;
		return;
	}
	h = h->next;
	join_tail(h, new);
}
