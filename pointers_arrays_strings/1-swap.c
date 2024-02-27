#include "main.h"
/**
 * swap_int - cambiar el valor de las integers
 * 
 * @a: valor a
 * @b: valor b
 *
 * @*: convert to pointers 
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
