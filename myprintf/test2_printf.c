#include "_printf.h"
#include <stdio.h>
/**
 * test2 - prieba para _printf
 */
int main()
{
	int num;
		
	for (num = 0; num <= 9; num++)
	{
		if (num == 0)
		{
			_print("cero\n", num);
		}
		else if (num == 5)
		{
			printf("la mitad\n", num);

		}
		else
		_print("no es cero\n", num);
	}
	return (0);
}
