#include <stdlib.h>
#include <time.h>
/**
 * main - starts the program
 *
 * Return: 0
 */

int main(void)
{
	int n;

	if(n == 0)
	{
	printf ("is zero\n");
	}
	else if(n < 0)
	{
	printf ("is negative\n");
	}
	else
	{
	printf ("is positiveo\n");
	}
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
