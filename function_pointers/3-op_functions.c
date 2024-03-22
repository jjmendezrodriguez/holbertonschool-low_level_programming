#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - sum
 * @a: variable
 * @b: variable
 *
 * Return: the result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - restar
 * @a: variable
 * @b: variable
 *
 * Return: the result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplicar
 * @a: variable
 * @b: variable
 *
 * Return: the result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - dividi
 * @a: variable
 * @b: variable
 *
 * Return: the result
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - porcientos %
 * @a: variable
 * @b: variable
 *
 * Return: the result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
