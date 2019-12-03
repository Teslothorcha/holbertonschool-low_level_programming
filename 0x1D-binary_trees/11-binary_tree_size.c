#include "binary_trees.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	const binary_tree_t *l = NULL, *r = NULL;

	if (!tree)
		return (0);

	if(tree->left)
		l = tree->left;
	if(tree->right)
		r = tree->right;
	return (binary_tree_size(l) + 1 + binary_tree_size(r));
}
