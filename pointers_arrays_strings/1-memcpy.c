#include "main.h"
/**
 * _memcpy - copies memory
 *
 * @dest: varieble
 * @src: variable
 * @n: variable
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *i = dest;
	const char *J = src;

		while (n-- > 0)
	{
		*i++ = *J++;
	}

	return (dest);
}
