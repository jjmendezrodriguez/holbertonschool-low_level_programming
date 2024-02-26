#include "main.h"
/**
 * print_line - draws line in the terminal
 *
 * @n: is the number of time the character_ should be printed
 */
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_');
	}

	_putchar('\n');
}
