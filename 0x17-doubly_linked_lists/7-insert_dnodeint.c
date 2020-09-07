#include "lists.h"

/**
 *insert_dnodeint_at_index - insert a node on a0 list
 *@h: pointer to the head of the list
 *@idx: index to insert the node
 *@n: number to the node to insert.
 *Return: pointer to the head of the created list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t **head;
	dlistint_t *next;
	dlistint_t *new = NULL;
	int number;

	head = h;
	number = n;

	if (*head == NULL)
	{
		new = add_dnodeint(head, number);
		return (new);
	}
	current = *head;
	if (idx == 0)
	{
		add_dnodeint(head, number);
		return (*head);
	}
	for (; (current->next != NULL); current = current->next)
	{
		next = current->next;
		if (!(--idx))
		{
			new =  malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = number;
			new->next = next;
			current->next = new;
			next->prev = new;
			new->prev = current;
			return (new);
		}
	}
	if (idx == 1)
	{
		add_dnodeint_end(head, number);
		return (new);
	}
}
