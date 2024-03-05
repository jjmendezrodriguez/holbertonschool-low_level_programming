#include "main.h"
/**
 * _strstr - locates a substring
 *
 * @needle: variable
 * @haystack: variable
 *
 * Return: they return the addres or the null
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, leng = 0;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (needle[j] != haystack[i+j])
					break;
			}
			for (leng = 0; needle[leng] != '\0'; leng++)
			{
			}
			if (leng == j)
				return (&haystack[i]);
		}
		i++;
	}

	return ('\0');
}	
