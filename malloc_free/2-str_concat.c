#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings
 *
 * @s1: variable
 * @s2: variable
 *
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, sum, len1 = 0, len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}
	sum = len1 + len2 + 1;
	concat = malloc(sizeof(char) * sum);
	if (concat == 0)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		concat[len1 + i] = s2[i];
	}
	return (concat);
}
