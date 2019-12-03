#include "binary_trees.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	const binary_tree_t *l = NULL, *r = NULL;

	if (!tree)
		return (0);

	if(tree->left)
		l = tree->left;

	if(tree->right)
		r = tree->right;

	if (!(tree->left) && !(tree->right))
		return (1);

	else
		return binary_tree_leaves(l) + binary_tree_leaves(r);
}
