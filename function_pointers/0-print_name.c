#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - funtion that print a name
 * @name: variable
 * @f: variable 
 */
void print_name(char *name void (*f)(char *))
{
	if (name == NULL || f == NULL)
		retunr;
	f(name);
}
