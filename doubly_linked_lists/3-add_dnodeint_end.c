#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: list
 * @n: element to add
 * Return:  address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_list, *temp_list;

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

	new_list = *head;
	while (new_list->next != NULL)
	{
		new_list = new_list->next;
	}

	temp_list = malloc(sizeof(dlistint_t));
	if (temp_list == NULL)
	return (NULL);
	temp_list->n = n;
	temp_list->prev = new_list;
	temp_list->next = NULL;

	/**
	 * Ici, new_list pointe toujours vers l'avant-dernier noeud meme si
	 * on lui a attribué le dernier noeud
	 */
	new_list->next = temp_list;
	/**
	 * Soit on retourne temp_list directement, soit on fait pointer new_list
	 * vers le bon noeud pour qu'il retourne bien l'adresse du dernier noeud
	 * Pour "mettre à jour" new_list pour qu'il renvoie bien le dernier noeud
	 * on l'incrémente au noeud suivant qui est bien le dernier noeud
	 */
	new_list = new_list->next;
	return (new_list);
}
