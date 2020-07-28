#include "lists.h"

/**
 *pop_listint - pop the head of a linked list
 *@head: double pointer to the head of the list
 *Return: Int with the value of the poped node
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *aux;
        
	if (head == NULL)
		return (0);

	n =(*head)->n;
	aux = (*head);
	(*head) = (*head)->next;
	free(aux);

	return (n);
}
