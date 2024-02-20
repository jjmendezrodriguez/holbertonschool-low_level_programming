#include <stdio.h>

/**
 * main - starts the program
 *
 * Return: 0
 */
int main(void)
{
	char uno;
	int dos;
	long int tres;
	long long int cuatro;
	float cinco;

	printf("Size of a char: %zu bytes(s)\n", sizeof(char));
	printf("Size of an int: %zu bytes(s)\n", sizeof(int));
	printf("Size of a long int: %zu bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
