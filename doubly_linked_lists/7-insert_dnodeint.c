#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: list
 * @index: nth node
 * Return: the nth node or NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node_nb = 0;

	if (head == NULL)
	return (NULL);

	while (head != NULL && node_nb < index)
	{
		head = head->next;
		node_nb++;
	}
	if (head == NULL)
	return (NULL);

	return (head);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: list
 * @idx: index
 * @n: data node value
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp_list, *next_node, *current_node;

	if (*h == NULL)
	return (NULL);
	if (idx == 0)
	return (add_dnodeint(h, n));

	current_node = get_dnodeint_at_index(*h, idx);
	if (current_node == NULL)
	return (NULL);

	if (current_node->next == NULL)
	return (add_dnodeint_end(h, n));

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
