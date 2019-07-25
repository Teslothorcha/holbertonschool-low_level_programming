#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 *main - search for rght function to operate arguments
 *@argc: argument count
 *@argv: argument vector
 *Return: operation result as integer
 */
int main(int argc, char *argv[])
{

	int (*operation)(int a, int b);

	if (*argv[3] == '0'  && (*argv[2] == '%' || *argv[2] == '/'))
	{
		printf("Error\n");
		return (100);
	}
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	operation = get_op_func(argv[2]);
	if (!operation)
	{
		printf("Error\n");
		return (99);
	}
	printf("%d\n", operation(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
