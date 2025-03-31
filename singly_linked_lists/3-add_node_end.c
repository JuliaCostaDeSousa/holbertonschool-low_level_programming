#include "lists.h"
/**
  * _strlen - returns the length of a string
  * Description: returns the length of a string
  * @s: string
  * Return: length of a string
  */
int _strlen(const char *s)
{
	int index = 0;

	while ((*(s + index) != '\0'))
	{
		index++;
	}
	return (index);
}
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: address of the new element
 * @str: new element to add
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len_str = 0;
	char *str_copy;
	list_t *new_list, *temp_list;

	str_copy = strdup(str);
	if (str_copy == NULL)
	return (NULL);
	len_str = _strlen(str);

	if (*head == NULL)
	{
		*head = malloc(sizeof(list_t));
		if (*head == NULL)
		return (NULL);

		(*head)->str = str_copy;
		(*head)->len = len_str;
		(*head)->next = NULL;
		return (*head);
	}
	else
	{
		new_list = *head;
		while (new_list->next != NULL)
		{
			new_list = new_list->next;
		}

		temp_list = malloc(sizeof(list_t));
		if (temp_list == NULL)
		{
			return (NULL);
		}
		temp_list->str = str_copy;
		temp_list->len = len_str;
		temp_list->next = NULL;

		new_list->next = temp_list;
	}
	return (new_list);
}
