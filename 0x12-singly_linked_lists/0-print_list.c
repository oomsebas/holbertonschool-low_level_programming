#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 *print_list - print the items of a link list
 *@list_t: the head of a link list
 *
 *Return: number of members of the link list.
 */
size_t print_list(const list_t *h)
{
	size_t length;

	while (h)
	{
		printf("[%d] %s\n", h->len,
		       (h->str == NULL) ? "(nil)" : h->str);
		length += 1;
		h = h->next;
	}
	return (length);
}
