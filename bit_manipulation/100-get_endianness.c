#include <stdio.h>
/**
 * get_endianness - Determines the endianness of the machine.
 *
 * Return: 0 if the machine is big endian. 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *ptr = (char *)&num;

	if (*ptr)
	return (1);

	else
	return (0);
}
