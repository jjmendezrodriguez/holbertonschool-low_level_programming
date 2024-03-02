#include "main.h"
#include <stdio.h>
/**
 * _strncat - funtion that concatenates two strings
 *
 * @dest: value of the variable
 *
 * @src: value of the variable
 *
 * @n: value of the variable
 * Return: devuerve e pointer al main
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i++])
		j++;

	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];

	return (dest);
}
