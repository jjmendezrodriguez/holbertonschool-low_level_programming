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
	char *dup;
	int len;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = dup;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		for (last = *head; last->next != NULL; last = last->next)
			continue;
		last->next = new;
	}
	len = 0;
	while (str[len])
		len++;
	new->len = len;

	return (new);
}
