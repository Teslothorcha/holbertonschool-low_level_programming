#include "binary_trees.h"
/**
 * binary_tree_nodes - determines amount of nodes of a given tree
 * @tree: treeś root node
 * Return: amount of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	const binary_tree_t *l = NULL, *r = NULL;

	if (!tree)
		return (0);

	if (tree->left)
		l = tree->left;

	if (tree->right)
		r = tree->right;

	if ((tree->left) || (tree->right))
		return (binary_tree_nodes(l) + 1 + binary_tree_nodes(r));

	return (0);
}
