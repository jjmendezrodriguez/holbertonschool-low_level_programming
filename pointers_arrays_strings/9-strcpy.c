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
	int index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
