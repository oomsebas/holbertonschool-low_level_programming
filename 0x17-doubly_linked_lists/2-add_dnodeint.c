#include "lists.h"

/**
 *add_dnodeint - function that creates a node at the beginning
 *@head: pointer to the first node;
 *@n: int to add to the new node;
 *Return: pointer to the first element of the list;
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head != NULL)
		tmp->prev = new;
	*head = new;

	return (*head);

}
