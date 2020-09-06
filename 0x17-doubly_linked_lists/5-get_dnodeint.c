#include "lists.h"

/**
 *get_dnodeint_at_index - function that prints the nth node
 *@head: head of the linked list
 *@index: index of the node to get
 *Return: The node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *find;

	if (head == NULL)
		return (NULL);

	find = head;
	while (i != index && find != '\0')
	{
		i++;
		find = find->next;
		if (find == NULL)
			return (NULL);
	}

	return (find);
}
