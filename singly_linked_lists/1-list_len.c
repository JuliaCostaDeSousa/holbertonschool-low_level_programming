#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: list
 * Return: number of elements in a linked list_t list.
 */

size_t list_len(const list_t *h)
{
	int node_number = 0;

	if (h->str == NULL)
	{
		h = h->next;
		node_number++;
	}

	while (h->str != NULL)
	{
		node_number++;
		if (h->next != NULL)
		h = h->next;
		else
		break;
	}

	return (node_number);
}
