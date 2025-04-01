#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node;

	if (head == NULL)
	return;

	while (head->next != NULL)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
	if (head != NULL)
	{
		free(head);
	}
}
