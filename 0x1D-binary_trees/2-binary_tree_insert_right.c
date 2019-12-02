#include "binary_trees.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new =  malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->right = NULL;
	new->left = NULL;
	new->parent = parent;

	if(parent->right)
		parent->right->parent = new, new->right = parent->right;
	parent->right = new;
	return (new);

}
