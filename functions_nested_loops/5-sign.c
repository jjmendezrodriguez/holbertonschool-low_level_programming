#include "main.h"

/**
 * print_sign - check the code.
 *
 * @n: value to be checked
 *
 * Return: 1 and prints + if n is greater than zero,
 * 0 and print 0 if n is zero and -1 print -if n less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
