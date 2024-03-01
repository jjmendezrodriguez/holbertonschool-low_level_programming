#include "main.h"
/**
 * _strcat - funtion that concatenates two strings
 *
 * @dest: value of the variable
 * @src: value of the variable
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *i = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest++ = *src++;
	}

	*dest = '\0';

	  return (i);
}
