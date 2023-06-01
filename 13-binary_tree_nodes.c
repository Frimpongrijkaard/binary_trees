#include "binary_trees.h"

/**
 * binary_tree_nodes - the nodes with at least 1 child in a binary tree is count
 * @tree: the nodes from which the tree is count
 *
 * Return: number of nodes counted
 *         0 when tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}

/**
 * binary_tree_size - the size of a binary tree to be weighed
 * @tree:  the size of tree is measure
 *
 * Return: size of the tree
 *         0 when tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_leaves - counts number of the leaves in the binary tree
 * @tree: tree to count the leaves from
 *
 * Return: number of leaves
 *         0 when tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
