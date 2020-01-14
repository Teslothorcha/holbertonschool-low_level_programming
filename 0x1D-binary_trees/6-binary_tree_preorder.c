#include "binary_trees.h"
/**
 * binary_tree_preorder - prtins tree on pre-order
 * @tree: root tree node
 * @func: pointer to print function
 * Return: Always 0 (Success)
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{


	if (tree && func)
	{
		func(tree->n);

		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
