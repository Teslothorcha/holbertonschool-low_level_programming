#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int suma = 0, str, digit;

	for (str = 1; str < argc; str++)
	{
		for (digit = 0; argv[str][digit] != '\0'; digit++)
		{
			if (!isdigit(argv[str][digit]))
			{
				printf("Error\n");
				return (1);
			}
		}
		suma += atoi(argv[str]);
	}
	printf("%d\n", suma);
	return (0);
}
