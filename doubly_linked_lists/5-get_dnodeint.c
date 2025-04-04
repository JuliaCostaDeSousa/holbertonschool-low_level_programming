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
