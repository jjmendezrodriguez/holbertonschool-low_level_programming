#include <stdio.h>
/**
 * get_endianness - this funcion checks the endianness
 *
 * return: always 0
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
