#include "binary_trees.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new =  malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->right = NULL;
	new->left = NULL;
	new->parent = parent;

	if(parent->left)
		parent->left->parent = new, new->left = parent->left;
	parent->left = new;
	return (new);

}
