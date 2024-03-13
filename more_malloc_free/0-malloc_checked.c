#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: variable
 *
 * Return: ptr
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	exit(98);
	return (ptr);
}
