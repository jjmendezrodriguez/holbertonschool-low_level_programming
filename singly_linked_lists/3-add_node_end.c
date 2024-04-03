#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: pointer to the head of the list_t list
 * @str: string to be added to the list_t list
 *
 * Return: memory allocation fails or str is NULL - NULL
 *         Otherwise - Address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		for (last = *head; last->next != NULL; last = last->next)
			;
		last->next = new;
	}

	return (*head);
}
