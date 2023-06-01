#include "binary_trees.h"

/**
 * binary_tree_preorder - look through the binary tree using pre-order traversal
 * @tree: tree to be visited
 * @func: pointer to a function 
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
