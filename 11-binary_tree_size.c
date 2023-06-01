#include "binary_trees.h"

/**
 * binary_tree_size - the size of a binary tree to be measured
 * @tree: tree measure the size 
 *
 * Return: size  tree
 *         0 when tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
