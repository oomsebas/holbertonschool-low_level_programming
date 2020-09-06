#include "lists.h"

/**
 *sum_dlistint - Write a function that returns the sum of all the
 *data (n) of a listint_t linked list.
 *@head: head to the linked list
 *Return: sum of all the int members of the lists.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *aux;

	if (head == NULL)
		return (0);

	aux = head;
	while (aux != NULL)
	{
		sum += aux->n;
		aux = aux->next;
	}

	return (sum);
}
