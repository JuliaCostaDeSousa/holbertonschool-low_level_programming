#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int node_number = 0;

	if (h == NULL)
	return (0);

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		h = h->next;
		node_number++;
	}

	while (h->str != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		node_number++;
		if (h->next != NULL)
		h = h->next;
		else
		break;
	}

	return (node_number);
}
