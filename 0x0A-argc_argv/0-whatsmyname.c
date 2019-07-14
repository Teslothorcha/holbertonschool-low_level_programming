#include <stdio.h>
/**
 * main - prints name
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 * Return: 0.
 */

int main (int argc __attribute__((unused)), char* argv[] __attribute__((unused)))
{
	printf("%s\n", *argv);
	return (0);
}
