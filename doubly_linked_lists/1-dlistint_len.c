#include "lists.h"

/**
 * dlistint_len -prints the number of elements in a dlistint_t list
 * @h: list
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int node_number = 0;

	if (h == NULL)
	return (node_number);

	while (h != NULL)
	{
		node_number++;
		h = h->next;
	}
	return (node_number);
}
