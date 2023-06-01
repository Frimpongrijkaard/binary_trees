#include "binary_trees.h"

/**
 * bst_remove - removes a node from a Binary Search Tree
 * @root: a pointer root 
 * @value: the value to be remove 
 * Return: NULL on failure
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *mode = NULL;

	if (!root)
		return (NULL);

	if (value < root->n)
		root->left = bst_remove(root->left, value);
	else if (value > root->n)
		root->right = bst_remove(root->right, value);
	else
	{
		if (!root->left)
		{
			mode = root->right;
			free(root);
			return (mode);
		}
		else if (!root->right)
		{
			mode = root->left;
			free(root);
			return (mode);
		}
		mode = bst_min_val(root->right);
		root->n = mode->n;
		root->right = bst_remove(root->right, mode->n);
	}
	return (root);
}

/**
 * bst_min_val - finds minmum node
 * @root: a pointer root 
 * Return: a pointer to the smallest node
 */
bst_t *bst_min_val(bst_t *root)
{
	bst_t *small = root;

	while (small->left)
		small = small->left;

	return (small);
}
