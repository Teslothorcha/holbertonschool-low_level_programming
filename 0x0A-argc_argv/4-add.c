#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - prints arguments received
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int str, digit, sum = 0;
	
	if (argc < 2)
	{
		printf("0\n");
		return(0);
	}
	for (str = 1; str < argc; str++)
	{
		for(digit = 0; argv[str][digit] != '\0'; digit++)
		{
			if(!(isdigit(argv[str][digit])))
			{
				printf("Error\n");
				return(1);
			}
		}
		sum += atoi(argv[str]);
	}
	printf("%d\n", sum);
	return (0);
} 
