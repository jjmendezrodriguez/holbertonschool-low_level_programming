#include "main.h"

/**
 * _isalpha - check the code.
 *
 * @c: value to be checked
 *
 * Return: 1 when 1 if c lowercase or uppercase 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
