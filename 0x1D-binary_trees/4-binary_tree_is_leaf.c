#include "binary_trees.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
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
