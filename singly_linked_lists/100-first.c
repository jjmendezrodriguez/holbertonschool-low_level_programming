#include <stdio.h>

void print_before_main(void) __attribute__((constructor));

/**
 * print_before_main - Prints a message before the main function is executed.
 */
void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
