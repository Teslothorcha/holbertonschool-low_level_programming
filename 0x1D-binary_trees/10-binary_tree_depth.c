#include <stdio.h>
#include "binary_trees.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);
	else
	{
		if(tree->parent)
			depth = binary_tree_depth(tree->parent) + 1 ;
		else
			depth = 0;
	}
	return depth;
}
