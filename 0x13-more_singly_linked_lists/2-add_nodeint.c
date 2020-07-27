#include "lists.h"

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
