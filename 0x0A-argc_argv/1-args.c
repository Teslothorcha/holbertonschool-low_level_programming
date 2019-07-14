#include <stdio.h>
/**
 * main - prints nunber of arguments passed to it
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 * Return: 0.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%d\n", argc);
	return (0);
}
