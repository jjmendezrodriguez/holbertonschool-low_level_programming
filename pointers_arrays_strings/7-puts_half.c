#include "main.h"

/**
 * puts_half  - other character
 * @str: value for the variable
 */
void puts_half(char *str)
{
	int len = 0, i = 0, n;

	while (str[len] != '\0')
	
	len++;

	if ((len % 2) == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;

	for (i = n ; i < len; i++)
		_putchar(str[i]);
	
	_putchar('\n');
}
