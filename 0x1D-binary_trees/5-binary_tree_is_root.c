#include "binary_trees.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
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
