#include "main.h"

/**
 * puts2  - other character
 * @str: value for the variable
 */
void puts2(char *str)
{
	int len = 0, i = 0;
	
	while (str[len] != '\0')
	
	len++;
	

	for (i = 0; i < len; i += 2)
	
	_putchar(str[i]);
	
	_putchar('\n');
}
