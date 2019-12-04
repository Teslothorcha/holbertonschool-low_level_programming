#include "binary_trees.h"
/**
 * binary_tree_postorder - prints tree on post-order
 * @tree: root tree node
 * @func: pointer to function
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{


	if (!tree)
		return;

	else
	{
		binary_tree_postorder(left, &print_num);
		binary_tree_postorder(right, &print_num);
		func(tree->n);
	}
}
