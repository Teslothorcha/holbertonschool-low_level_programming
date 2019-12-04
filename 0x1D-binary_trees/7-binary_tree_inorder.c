#include "binary_trees.h"
/**
 * binary_tree_inorder - prints tree ino order
 * @tree: root tree node
 * @func: pointer to print function
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{

	const binary_tree_t *left = NULL, *right = NULL;

	if (!tree)
		return;

	if (tree->left)
		left = tree->left;

	if (tree->right)
		right = tree->right;
	binary_tree_inorder(left, &print_num);
	func(tree->n);
	binary_tree_inorder(right, &print_num);

}
