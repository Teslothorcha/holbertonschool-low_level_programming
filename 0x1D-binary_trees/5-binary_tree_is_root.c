#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if node is root
 * @node: node to be checked
 * Return: 1 on succes
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	int boool = 0;

	if (!node)
		return (0);
	if (!(node->parent))
		boool = 1;
	else
		return (boool);
	return (boool);

}
