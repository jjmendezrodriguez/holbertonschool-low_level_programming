#include "main.h"
/**
 * print_last_digit - start the program
 *
 *@i: value digit
 *
 * Return: Always 0.
 */
int print_last_digit(int i)
{
	int lastdigit;

	if (i < 0)
	{
		i = -i;
	}
	lastdigit = i % 10;
	_putchar(lastdigit);
	_putchar('\n');

return (lastdigit);
}
