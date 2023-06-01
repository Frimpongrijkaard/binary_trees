#include "binary_trees.h"

/**
 * binary_tree_is_bst - a binary tree is a valid Binary Search Tree
 * @tree: a pointer tree
 *
 * Return: 1 when tree is a valid BST
 *         0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (btib_helper(tree, INT_MIN, INT_MAX));
}

/**
 * btib_helper - a binary tree is a valid Binary Search Tree
 * @tree: a pointer tree
 * @min: minmum bound of checked node
 * @max: maximum bound of checked node
 *
 * Return: 1 when tree valid BST
 *         0 otherwise
 */
int btib_helper(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);

	if (tree->n < min || tree->n > max)
		return (0);

	return (btib_helper(tree->left, min, tree->n - 1) &&
		btib_helper(tree->right, tree->n + 1, max));
}
