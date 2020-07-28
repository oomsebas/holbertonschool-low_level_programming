#include "lists.h"

/**
 *free_listint2 - free the memory on heap for the linked list
 *@head: double pointer to linked list
 *Return: None
 */
void free_listint2(listint_t **head)
{

	listint_t *aux;

	while (*head != NULL)
	{
		aux = (*head)->next;
		free((*head));
		*head = aux;
	}
	*head = (listint_t *) NULL;
}
