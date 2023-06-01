#include "binary_trees.h"

/**
 * bst_search - searches for a Binary Search Tree
 * @tree: a pointer tree 
 * @value: the value to be search
 * Return: NULL when tree is NULL
 *         NULL when no match is found
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *node = (bst_t *)tree;

	if (!tree)
		return (NULL);

	while (node)
	{
		if (value == node->n)
			return (node);
		if (value < node->n)
			node = node->left;
		else if (value > node->n)
			node = node->right;
	}

	return (NULL);
}
