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

	lastdigit = i % 10;

	_putchar(lastdigit + 0);
	_putchar('\n');

return (lastdigit);
}
