#include "main.h"
/**
 * _memset - fills memory with a constant byte
 *
 * @s: value of variable
 * @b: value of the variable
 * @n: value of the variable
 *
 * Return: to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
