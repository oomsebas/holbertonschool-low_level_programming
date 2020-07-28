#include "lists.h"

/**
 *free_listint - function that frees the memory allocation for a linked
 *list.
 *@head: pointer to the linked list.
 *Return: None.
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head != NULL)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
