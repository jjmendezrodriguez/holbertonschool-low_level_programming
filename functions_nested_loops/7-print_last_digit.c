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

	if (lastdigit < 0)
	{
		lastdigit  = lastdigit * -1;
	}
	_putchar(lastdigit + '0');

return (lastdigit);
}
