#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *argstostr - concatenates all the arguments.
 * @av: argument vector.
 * @ac: argument count.
 * Return:.
 */
char *argstostr(int ac, char **av)
{
	char *v;
	int i, j, k = 0, len = 0;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
			len++;
		}
	}
	v = malloc((len + ac + 1) * sizeof(char));
	if (v == 0)
	{
		free(v);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
		{
			v[k] = av[i][j];
		}
		v[k] = '\n';
		k++;
	}
	return (v);
}
