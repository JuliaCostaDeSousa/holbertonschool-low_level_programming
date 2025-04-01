#include "lists.h"

/**
 * print_dlistint -prints all the elements of a dlistint_t list
 * @h: list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int node_number = 0;

	if (h == NULL)
	return (node_number);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_number++;
		h = h->next;
	}
	return (node_number);
}
