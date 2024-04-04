#include "lists.h"

/**
 * print_dlistint - prints all the elements
 * @h: head of the dlistint_t list
 * 
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; h = h->next, nodes++)
	{
		printf("%d\n", h->n);
	}

	return (nodes);
}
