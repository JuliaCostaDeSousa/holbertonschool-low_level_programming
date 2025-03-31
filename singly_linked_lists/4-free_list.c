#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: list
 */
void free_list(list_t *head)
{
	list_t *next_node;
	
	if (head == NULL)
	return;

	while (head->next != NULL)
	{
		next_node = head->next;
		free(head->str);
		free(head);
		head = next_node;
	}
	if (head != NULL)
	{
		free(head->str);
		free(head->next);
		free(head);
	}
}
