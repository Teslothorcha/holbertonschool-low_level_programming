#include "binary_trees.h"
/**
 * binary_tree_inorder - prints tree ino order
 * @tree: root tree node
 * @func: pointer to print function
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{

	if (!tree)
		return;

	else
	{
		binary_tree_inorder(left, &print_num);
		func(tree->n);
		binary_tree_inorder(right, &print_num);
	}
}
