#include "binary_trees.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

	const binary_tree_t *left = NULL, *right = NULL;
	if (!tree)
		return;
	func(tree->n);
	if(tree->left)
		left = tree->left;
	if(tree->right)
		right = tree->right;
	binary_tree_preorder( left, &print_num);
	binary_tree_preorder( right, &print_num);

}
