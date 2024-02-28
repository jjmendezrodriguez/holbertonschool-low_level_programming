#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n number of elements
 *               of an array of integers
 * @a: array of integers.
 * @n: number of elements to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			continue;

		printf(", ");
	}
	printf("\n");
}
