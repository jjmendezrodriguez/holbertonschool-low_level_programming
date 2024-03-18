#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a
 *  parameter on each element of an array
 *
 * @size: of the array
 * @action: pointer to the function you need to use
 * @array: variable
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	while (size-- > 0)
	{
		action(*array);
			array++;
	}
}
