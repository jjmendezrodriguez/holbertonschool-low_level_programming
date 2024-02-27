#include "main.h"
/**
 * swap_int - swaps values
 *
 * @a: value of a
 *
 * @b: vaue of b
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
