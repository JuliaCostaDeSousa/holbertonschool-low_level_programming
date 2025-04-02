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
	dlistint_t *temp_list, *current_node, *new_list;

	node_nb = dlistint_len(*h);

	if (*h == NULL || idx == 0 || node_nb == 0)
	return (add_dnodeint(h, n));
	
	if (node_nb == idx)
	return (add_dnodeint_end(h, n));
	if (idx > node_nb)
	return (NULL);

	temp_list = malloc(sizeof(dlistint_t));
	if (temp_list == NULL)
	{
		return (NULL);
	}

	new_list = *h;
	current_node = get_dnodeint_at_index(new_list, idx);

	temp_list->n = n;
	/* Previous node */
	temp_list->prev = current_node->prev;
	/* Next node */
	temp_list->next = current_node;
	if (current_node->prev != NULL)
	{
		/* Linking previous node to new node */
		current_node->prev->next = temp_list;
	}
	/* Linking current node back to new node */
	current_node->prev = temp_list;

	return (temp_list);
}
