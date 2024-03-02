#include "main.h"
/**
 * _strncpy - copy the strings and incres the value
 *
 * @dest: variable arguments
 *
 * @src: variable arguments
 *
 * @n: el numero maximo que copiaremos de src
 *
 * Return: al pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, s_len = 0;

	while (src[i++])
		s_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = s_len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
