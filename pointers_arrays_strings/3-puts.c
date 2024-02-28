#include "main.h"
#include <stdio.h>
/**
 * _puts - make the code whit puts
 *
 * @str: the value of variable
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
