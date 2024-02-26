#include "main.h"
/**
 * _isupper(int c) - start the program
 *
 * @c: value
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
