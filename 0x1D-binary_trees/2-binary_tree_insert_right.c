#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert node on right side of anode
 * @parent: parent of new node
 * @value: value of new node
 * Return: new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if (parent->right)
		parent->right->parent = new, new->right = parent->right;
	parent->right = new;
	return (new);
}
