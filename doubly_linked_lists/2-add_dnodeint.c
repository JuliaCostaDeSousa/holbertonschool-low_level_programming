#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: list
 * @n: element to add
 * Return:  address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp_list;

	if (!head)
	return (NULL);

	if (*head == NULL)
	{
		*head = malloc(sizeof(dlistint_t));
		if (*head == NULL)
		return (NULL);

		(*head)->n = n;
		(*head)->prev = NULL;
		(*head)->next = NULL;
		return (*head);
	}
	
	temp_list = malloc(sizeof(dlistint_t));
	if (temp_list == NULL)
	return (NULL);
	temp_list->n = n;
	temp_list->prev = NULL;
	temp_list->next = (*head);

	(*head)->prev = temp_list;
	(*head) = temp_list;
	return ((*head));
}
