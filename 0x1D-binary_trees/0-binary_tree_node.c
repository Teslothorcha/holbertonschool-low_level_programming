#include "binary_trees.h"
/**
 * binary_tree_node - inerts new node
 * @parent: parent new node
 * @value: valu to insert on new node
 * Return: new node
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
