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
	int i, sum, j, len1, len2;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	len1 = _strlen(s1), len2 = _strlen(s2);
	sum = len1 + len2 + 1;

	concat = malloc(sizeof(char) * sum);
	for (i = 0; i <= len1; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j <= len2; j++)
	{
		concat[len1 + j] = s2[j];
	}

	concat[sum] = '\0';

return (concat);
}
