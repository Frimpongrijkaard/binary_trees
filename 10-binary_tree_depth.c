#include "binary_trees.h"

/**
 * binary_tree_depth -  the depth of a node in the  binary tree to be measured
 * @tree: n calculate the depth of a node
 *
 * Return: depth of the node
 *         0 when tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
