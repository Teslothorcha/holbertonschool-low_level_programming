#include "binary_trees.h"
/**
 * binary_tree_node - Entry point
 *
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *new;

	new =  malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->right = NULL;
	new->left = NULL;
	new->parent = parent;
	return (new);

}
