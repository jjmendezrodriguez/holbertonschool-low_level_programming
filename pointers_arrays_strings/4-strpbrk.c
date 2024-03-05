#include "main.h"
/**
 * _strpbrk - gets the length of a prefix substring
 *
 * @s: string to be searched
 * @accept: set of bytes to be searched for
 *
 * Return: If a set is matched - a pointer to the matched byte
 *         If no set is matched - NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}

	return ('\0');
}
