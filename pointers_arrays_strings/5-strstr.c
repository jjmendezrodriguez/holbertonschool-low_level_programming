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
	int text = 0;

	for (leng = 0; needle[leng] != '\0'; leng++)
	{
	}
	if (leng == 0)
		return (haystack);
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				text = i + j;
				if (needle[j] != haystack[text])
					break;
			}
			if (leng == j)
				return (&haystack[i]);
		}
		i++;
	}
	return ('\0');
}
