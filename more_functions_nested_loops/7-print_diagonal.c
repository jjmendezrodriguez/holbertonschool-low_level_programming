#include "main.h"
/**
 * print_diagonal - draws line diagonal in the terminal
 *
 * @n: is the number of time the character_ should be printed
 */
void print_diagonal(int n)
{
	int dia, space;

	if (n > 0)
	{
		for (dia = 1; dia < n; dia++)
		{
			for (space = 1; space < dia; space++)
			{
				if (space != 0)
				{
					_putchar(' ');
				}
		}
			_putchar('\\');
			_putchar('\n');
		}


	}

	else
		_putchar('\n');
}
