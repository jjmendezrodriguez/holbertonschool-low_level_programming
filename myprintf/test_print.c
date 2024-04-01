#include "_printf.h"
/**
 * _printf -  prueba para comando de imprimir 
 */
int main()
{
	int num = 12;
	char *str = "testing!";

	_print("1 2 1 2 %s\n", str);
	_print("My age is %d\n", num);

	return (0);
}
