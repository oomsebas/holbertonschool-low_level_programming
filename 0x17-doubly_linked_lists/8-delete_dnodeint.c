#include "lists.h"

/**
 *insert_dnodeint_at_index - insert a node on a0 list
 *@h: pointer to the head of the list
 *@idx: index to insert the node
 *@n: number to the node to insert.
 *Return: pointer to the head of the created list
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	dlistint_t *current;
	dlistint_t *prev;
	dlistint_t *next;

	current = *head;
	if (*head == NULL)
	{
		return (-1);
	}
	if ((*head)->next == NULL)
	{
		tmp = *head;
		*head = NULL;
		free(tmp);
		return (1);
	}
	if (index == 0)
	{
		tmp = *head;
		*head = current->next;
		(*head)->prev = NULL;
		tmp->next = NULL;
		current->prev = NULL;
		free(tmp);
		return (1);
	}
	for (; current->next != NULL; current = current->next)
	{
		next = current->next;
		prev = current->prev;
		if (!index--)
		{
			prev->next = next;
			next->prev = prev;
			free(current);
			return (1);
		}

	}
	if (index == 0)
	{
		prev = current->prev;
		prev->next = NULL;
		free(current);
		return (1);
	}
	return (1);
}
