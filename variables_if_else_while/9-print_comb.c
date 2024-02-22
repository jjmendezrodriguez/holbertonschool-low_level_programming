#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - starts the program
 *
 * Return: 0
 */

int main(void)
{
char num;

for (num = '0'; num <= '9'; num++)
{
	putchar(num);
	if (num != '9')
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');

return (0);
}
