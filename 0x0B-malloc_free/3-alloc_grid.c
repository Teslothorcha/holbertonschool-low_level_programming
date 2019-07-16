#include "holberton.h"
#include "stdlib.h"
/**
 * *alloc_grid - crates a 2d int array and initializes it with 0
 * @width: columns of matrix
 * @height: rows of matrix
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int **mat = malloc(height * sizeof(int *));
	int pos, pos1;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	if (mat == NULL)
	{
		return (NULL);
	}
	for (pos = 0; pos < height; ++pos)
	{
		mat[pos] = malloc(width * sizeof(int));
		if (mat[pos] == NULL)
		{
			for (pos--; pos >= 0; pos--)
				free(mat[pos]);
			free(mat);
			return (NULL);
		}
		for (pos1 = 0; pos1 < width; pos1++)
		{
			mat[pos][pos1] = 0;
		}
	}
	return (mat);
}
