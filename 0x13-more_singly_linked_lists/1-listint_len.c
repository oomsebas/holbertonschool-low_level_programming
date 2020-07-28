#include "lists.h"

/**
 *listint_len - function that prints the number of nodes
 *@h: linked lists to be calculated the number of members
 *Return: Number of nodes on the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	i++;
	h = h->next;
	i += listint_len(h);

	return (i);
}
