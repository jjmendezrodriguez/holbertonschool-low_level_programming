#include "main.h"
#include <stdio.h>
/**
 * print_rev - make the code reverse
 *
 * @s: the value of variable
 */
void print_rev(char *s)
{
	int len = 0, i;

	while (s[i++] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
