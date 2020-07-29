#include "lists.h"

/**
 *delete_nodeint_at_index - unction that deletes the node at index
 *index of a listint_t linked list.
 *@head: entry point for the linked list
 *@index: node to delete
 *Return: i for success, -1 for unsuccess
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux;
	listint_t *aux1;

	if (*head == NULL)
		return (-1);
	aux = *head;

	if (index == 0)
	{
		aux = aux->next;
		free(*head);
		*head = aux;
		return (1);
	}
	while (--index)
	{
		aux = aux->next;
	}
	aux1 = aux->next;
	aux->next = (aux->next)->next;
	free(aux1);

	return (1);
}
