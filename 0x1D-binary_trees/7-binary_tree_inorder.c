#include "binary_trees.h"
/**
 * binary_tree_inorder - prints tree ino order
 * @tree: root tree node
 * @func: pointer to print function
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
