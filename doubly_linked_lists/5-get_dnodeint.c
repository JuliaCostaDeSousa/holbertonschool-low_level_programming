#include "lists.h"

/**
 * free_dlistint - returns the nth node of a dlistint_t linked list
 * @head: list
 * @index: nth node
 * Return:  the nth node or NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node_nb = 0;

	if (head == NULL)
	return (NULL);

	while (head->next != NULL && node_nb != index)
	{
		head = head->next;
		node_nb++;
	}

	if (head->next == NULL)
	return (NULL);
	else
	return (head);
}
