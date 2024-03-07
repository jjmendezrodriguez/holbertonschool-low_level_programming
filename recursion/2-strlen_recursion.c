#include "main.h"
/**
 * _strlen_recursion - return the length of a string
 *
 * @s: variable Argument
 * Return: to funcion and make the loop
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
