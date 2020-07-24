#include "lists.h"

/**
 *free_list - free the memory allocations for the linked list
 *@head: head  of the linked list
 *Return: adress of
 */
void free_list(list_t *head)
{
	list_t *aux;

	while (head)
	{
		aux = head->next;
		free(head->str);
		free(head);
		head = aux;
	}
}
