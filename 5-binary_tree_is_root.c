#include "binary_trees.h"

/**
 * binary_tree_is_root - checks when  node is  root
 * @node: node to be check
 *
 * Return: 1 when node is a root
 *         0 when not a root
 *         0 whrn node is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return ((!node || node->parent) ? 0 : 1);
}
