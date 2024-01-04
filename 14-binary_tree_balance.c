#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Height - gets height of binary tree
 * @tree: pointer to root node of the tree
 * Return: 0 if tree is NULL
 */
int Height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	left = binary_tree_balance(tree->left);
	right = binary_tree_balance(tree->right);
	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: If tree is NULL, 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height, r_height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	l_height = binary_tree_balance(tree->left);
	r_height = binary_tree_balance(tree->right);
	return (l_height - r_height + 1);
}
