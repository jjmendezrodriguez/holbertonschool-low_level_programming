#include "main.h"
/**
 * reverse_array - funtion that reverses the array
 *
 * @a: variable argument
 * @n: numbers of lements of array
 *
 */
void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
