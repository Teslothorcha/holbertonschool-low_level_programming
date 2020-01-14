#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if node is a leaf
 * @node: node to check
 * Return: 1 on success
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int boool = 1;

	if (!node)
		return (0);
	if (node->right || node->left)
		boool = 0;
	else
		return (boool);
	return (boool);

}
