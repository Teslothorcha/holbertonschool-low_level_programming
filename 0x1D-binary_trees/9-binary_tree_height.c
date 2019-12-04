#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_height - determines height of a given tree
 * @tree: root tree node
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	const binary_tree_t *left = NULL, *right = NULL;
	size_t h_l = 0, h_r = 0;

	if (!tree)
		return (0);

	else
	{
		if (tree->left)
		{
			left = tree->left;
			h_l = binary_tree_height(left) + 1;
		}
		else
			h_l = 0;
		if (tree->right)
		{
			right = tree->right;
			h_r = binary_tree_height(right) + 1;
		}
		else
			h_r = 0;
		if (h_l < h_r)
			return (h_r);
		else
			return (h_l);
	}
}
