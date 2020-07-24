#include "lists.h"


/**
 *list_len - function that returns the number of elements
 *in a linked list_t list.
 *@h: pointer to the head of the structure
 *Return: the size of the linked list
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		size += 1;
		h = h->next;
	}

	return (size);
}
