#include "lists.h"


/**
 *print_listint - prints all the elements of a listint_t list
 *@h: list of integers to print
 *Return: number of memebers printed.
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	i++;
	printf("%d\n", h->n);

	if (h->next == NULL)
		return (i);

	i += (print_listint(h->next));

	return (i);
}
