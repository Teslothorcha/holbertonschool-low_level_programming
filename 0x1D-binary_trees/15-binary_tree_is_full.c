#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: is a pointer to the root node of the tree to check
 * Return: 1 if its full 0 is not
 */

int binary_tree_is_full(const binary_tree_t *tree)
{

	const binary_tree_t *t = tree;

	if (!t)
		return (0);
	if ((t->left) && (t->right))
	{
		if (binary_tree_is_full(tree->right) != 1)
			return (0);
		if (binary_tree_is_full(tree->left) != 1)
			return (0);
	}
	if ((t->right && !t->left) || (!t->right && t->left))
		return (0);
	else
		return (1);

}
