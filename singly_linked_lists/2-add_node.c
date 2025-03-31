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
 * add_node - adds a new node at the beginning of a list_t list
 * @head: address of the new element
 * @str: new element to add
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int len_str = 0;
	char *str_copy;
	list_t *new_list;

	if (h == NULL)
	return (NULL);

	if (str == NULL)
	return (NULL);
	len_str = _strlen(str);

	new_list = malloc(sizeof(list_t));
	if (new_list == NULL)
	return (NULL);

	str_copy = strdup(str);
	if (str_copy == NULL)
	{
		free(new_list);
		return (NULL);
	}
	else
	new_list->str = str_copy;
	new_list->len = len_str;
	new_list->next = *head;

	*head = new_list;
	return (new_list);
}
