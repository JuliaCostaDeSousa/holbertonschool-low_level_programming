#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: list
 * @idx: index
 * @n: data node value
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int node_nb = 0;
	dlistint_t *temp_list, *next_node, *current_node;

	if (*h == NULL)
	return (NULL);
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	current_node = *h;
	while (current_node != NULL && node_nb < idx - 1)
	{
		current_node = current_node->next;
		node_nb++;
	}
	if (current_node == NULL)
	return (NULL);

	next_node = current_node->next;
	temp_list = malloc(sizeof(dlistint_t));
	if (temp_list == NULL)
	{
		return (NULL);
	}
	temp_list->n = n;
	temp_list->prev = current_node;
	temp_list->next = next_node;

	current_node->next = temp_list;
	next_node->prev = temp_list;

	return (temp_list);
}
