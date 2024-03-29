#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_depth  - measures the depth of a binary tree
 * @tree: pointer to the root node of the tree to measure the depth
 * Return: if tree is NULL return 0
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	else
		return (1 + binary_tree_depth(tree->parent));
}
