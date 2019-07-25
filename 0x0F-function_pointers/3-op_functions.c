#include <stdlib.h>
#include "3-calc.h"
/**
 *op_add - Add two values
 *@a: first argument to operate with
 *@b: Second argument to operate with
 *Return: Integer
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - Substract second arg from first arg
 *@a: first argument to operate with
 *@b: Second argument to operate with
 *Return: Integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - Multiply two values
 *@a: first argument to operate with
 *@b: Second argument to operate with
 *Return: Integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - Divides first arg into second arg
 *@a: first argument to operate with
 *@b: Second argument to operate with
 *Return: Integer
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 *op_mod - Module first arg into second arg
 *@a: first argument to operate with
 *@b: Second argument to operate with
 *Return: Integer
 */
int op_mod(int a, int b)
{
	return (a % b);
}
