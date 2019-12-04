#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert node on left side of a node
 * @parent: parent of new node
 * @value: value of new node
 * Return: new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new =  malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->right = NULL;
	new->left = NULL;
	new->parent = parent;

	if (parent->left)
		parent->left->parent = new, new->left = parent->left;
	parent->left = new;
	return (new);

}
