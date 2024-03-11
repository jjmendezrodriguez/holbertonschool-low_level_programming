#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of char and initialize with a specific char
 * @size: variable value
 * @c: varible value
 *
 * Return: Always 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
