#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - starts the program
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int lastdigit;
	int j = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastdigit = n % 10;

	if (lastdigit == 0)
	{
	printf("Last digit of %d is %d and 0\n", n, lastdigit);
	}
	else if (lastdigit >= 6)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
	}
	else if (lastdigit <= 5 && lastdigit != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);
	}
	return (0);
}
