#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at specific index
 * @head: list
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int node_nb = 0;
	dlistint_t *current_node;

	if (*head == NULL)
	return (-1);

	current_node = *head;
	if (index == 0)
	{
		(*head) = current_node->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current_node);
		return (1);
	}

	while (current_node != NULL && node_nb < index)
	{
		current_node = current_node->next;
		node_nb++;
	}
	if (current_node == NULL)
	return (-1);

	if (current_node->prev != NULL)
	current_node->prev->next = current_node->next;
	if (current_node->next != NULL)
	current_node->next->prev = current_node->prev;

	free(current_node);

	return (1);
}
