#include "binary_trees.h"

/**
 * binary_tree_height - height of a binary tree
 * @tree: input tree
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (measure(tree) - 1);
}

/**
 * measure - helper
 * @tree: input tree
 * Return: height of tree
 */

size_t measure(const binary_tree_t *tree)
{
	size_t left, right;
	int total;

	if (tree == NULL)
		return (0);

	left = measure(tree->left);
	right = measure(tree->right);
	total = max(left, right) + 1;
	return (total);
}

/**
 * max - helper
 * @a: the first number
 * @b: the second number
 * Return: height of tree
 */

int max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}
