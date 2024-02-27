#include "main.h"

/**
 * print_triangle - forma con #.
 * @size: espacio de triangula.
 */
void print_triangle(int size)
{
	int i, space;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (space = size - i; space > 0; space--)
				_putchar(' ');

			for (space = 0; space < i; space++)
				_putchar('#');

			if (i == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
