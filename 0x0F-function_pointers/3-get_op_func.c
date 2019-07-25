#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - return pointer to function for calculator
 * @s: operator string
 *
 * Return: address to operation function
 */
int (*get_op_func(char *s))(int, int)
{

	int count = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	while (ops[count].op)
	{
		if (ops[count].op[0] == *s)
		{
			return (ops[count].f);
		}
		count++;
	}
	return (NULL);
}
