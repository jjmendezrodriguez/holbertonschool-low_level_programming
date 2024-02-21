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
char letter;
char upletter;

for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
for (upletter = 'A'; upletter <= 'Z'; upletter++)
{
putchar(upletter);
}
putchar('\n');

return (0);
}
