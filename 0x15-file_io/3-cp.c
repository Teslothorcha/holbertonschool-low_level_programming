#include "holberton.h"
/**
 * closebitch - close open files
 * @from: file copying form
 * @to: file in which to copy
 */
void closebitch(int *from, int *to)
{
	if (close(*from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can\'t close fd %d\n", *from);
		exit(100);
	}
	if (close(*to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can\'t close fd %d\n", *to);
		exit(100);
	}
}
/**
 * main - copy file to another
 *@argc: arguments
 *@argv: argument vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int openfrom, opento, readd;
	char *buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	openfrom = open(argv[1], O_RDONLY);
	if (openfrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}
	opento = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 00664);
	if (opento == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((readd = read(openfrom, buffer, 1024)) > 0)
	{
		if (write(opento, buffer, readd) < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can\'t write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (readd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	closebitch(&openfrom, &opento);
	return (0);
}
