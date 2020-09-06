#include "lists.h"

/**
 *free_dlistint - function that frees the memory allocation for a linked
 *list.
 *@head: pointer to the linked list.
 *Return: None.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head != NULL)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
