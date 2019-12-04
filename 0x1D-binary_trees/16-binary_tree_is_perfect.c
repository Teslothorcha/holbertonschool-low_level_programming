#include <stdio.h>
#include <math.h>
#include "binary_trees.h"
/**
 * binary_tree_height - determines height of a given tree
 * @tree: tree's root node
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	const binary_tree_t *left = NULL, *right = NULL;
	size_t h_l = 0, h_r = 0;

	if (!tree)
		return (0);

	else
	{
		if (tree->left)
		{
			left = tree->left;
			h_l = binary_tree_height(left) + 1;
		}
		else
			h_l = 0;
		if (tree->right)
		{
			right = tree->right;
			h_r = binary_tree_height(right) + 1;
		}
		else
			h_r = 0;
		if (h_l < h_r)
			return (h_r);
		else
			return (h_l);
	}
}
/**
 * binary_tree_size - determines amount of nodes
 * @tree: tree's root node
 * Return: a,mount of nodes
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	const binary_tree_t *l = NULL, *r = NULL;

	if (!tree)
		return (0);

	if (tree->left)
		l = tree->left;
	if (tree->right)
		r = tree->right;
	return (binary_tree_size(l) + 1 + binary_tree_size(r));
}
/**
 * binary_tree_is_perfect - determines amount if tree is perfect
 * @tree: tree's root node
 * Return: 1 if tree s perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h, s, i = 0, f_p = 1;

	h = binary_tree_height(tree);
	s = binary_tree_size(tree);

	while (i < h + 1)
	{
		f_p *= 2;
		i++;
	}


	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);
	if ((f_p - 1) == s)
		return (1);

	return (0);
}
