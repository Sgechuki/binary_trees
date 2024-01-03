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
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: f tree is NULL return 0
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	return (maxim(l_height, r_height) + 1);
}
