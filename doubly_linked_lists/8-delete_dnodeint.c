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
	dlistint_t *temp_node, *next_node, *current_node;

	if (!head)
	{
		return (-1);
	}

	if (*head == NULL || (index == 0 && (*head)->next == NULL))
	{
		free(*head);
		*head = NULL;
		return (1);
	}

	if (index == 0 && (*head)->next != NULL)
	{
		temp_node = (*head);
		(*head) = (*head)->next;
		free(temp_node);
		return (1);
	}

	current_node = *head;
	while (current_node != NULL && node_nb < index - 1)
	{
		current_node = current_node->next;
		node_nb++;
	}
	if (current_node == NULL)
	return (-1);

	if (current_node->next->next == NULL)
	{
		current_node->next = NULL;
		temp_node = current_node->next;
		free(temp_node);
		return (1);
	}

	next_node = current_node->next->next;
	temp_node = current_node->next;
	current_node->next = next_node;
	free(temp_node);
	return (1);
}
