#include "lists.h"

/**
 * dlistint_len - print the lenght od a double linked list
 * @h: the double link list to be measured
 * Return: the number of nodes of the double link list
 */

size_t dlistint_len(const dlistint_t *h)
{

	size_t i = 0;

	if (h == NULL)
		return (0);
	i++;
	h = h->next;
	i += dlistint_len(h);

	return (i);
}
