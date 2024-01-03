#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * maxim - implementation of max function
 * @a: value
 * @b: value
 * Return: max value
 */
size_t maxim(size_t a, size_t b)
{
	if (a > b)
	{
		return (a);
	}
	else if (a < b)
	{
		return (b);
	}
	else
		return (b);
}

/**
 * binary_tree_depth  - measures the depth of a binary tree
 * @tree: pointer to the root node of the tree to measure the depth
 * Return: if tree is NULL return 0
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t l_depth, r_depth;

	if (tree == NULL)
		return (0);
	l_depth = binary_tree_depth(tree->left);
	r_depth = binary_tree_depth(tree->right);
	return (maxim(l_depth, r_depth) + 1);
}
