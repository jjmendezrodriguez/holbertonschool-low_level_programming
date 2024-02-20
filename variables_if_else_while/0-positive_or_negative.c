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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
	printf("is zero\n");
	}
	else if (n < 0)
	{
	printf("is negative\n");
	}
	else
	{
printf("is positiveo\n");
	}
	return (0);
}
