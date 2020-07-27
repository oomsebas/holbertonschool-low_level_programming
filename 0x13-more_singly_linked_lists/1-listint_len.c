#include "lists.h"

#define calc_len(obj) ((sizeof(obj)) / (sizeof(obj->n)))

/**
 *listint_len - function that prints the number of nodes
 *@h: linked lists to be calculated the number of members
 *Return: Number of nodes on the linked list.
 */
size_t listint_len(const listint_t *h)
{
	int i;

	i = calc_len(h);

	return (i);
}
