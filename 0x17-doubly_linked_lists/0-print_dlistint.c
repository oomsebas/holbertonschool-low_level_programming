#include "lists.h"

/**
 * print_dlistint - print all the elements of a double linked lists
 * @h: pointer to the double linked list to prints
 * Return: The number of nodes printed
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	printf("%d\n", h->n);
	i++;
	if (h->next == NULL)
		return (i);

	i += (print_dlistint(h->next));

	return (i);
}
