#include "main.h"
/**
 * _strcmp - funtion that compares two strings
 *
 * @s1: value of argument 1
 * @s2: value of argument 2
 *
 * Return: *s1 - *s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
