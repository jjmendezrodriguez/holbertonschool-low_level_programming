#include "main.h"
#include <stdlib.h>
/**
 * _calloc - funcion that allocates memory for an array using malloc
 *
 * @nmemb: num of elements
 * @size: byte size of each array element
 *
 * Return: if nmemb = 0, size = 0, then calloc return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (i = 0; i < (size * nmemb); i++)
		filler[i] = '\0';

	return (mem);
}
