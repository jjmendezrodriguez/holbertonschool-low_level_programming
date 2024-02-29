#include "main.h"
/**
 * _strcpy - code that copy the value
 *
 * @dest: valeu of the variable
 * @src: valeu of the variable
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
