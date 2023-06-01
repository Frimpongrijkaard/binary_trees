#include "binary_trees.h"

/**
 * bst_insert - inserts a value in a Binary Search Tree
 * @tree: a double pointer tree t
 * @value: the value to store
 * Return: NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *tmp = NULL;
	bst_t *second = NULL;
	bst_t *new_node = NULL;

	if (!tree)
		return (NULL);
	if (*tree == NULL)
		return (*tree = binary_tree_node(NULL, value));

	tmp = *tree;
	while (tmp)
	{
		second = tmp;
		if (value < tmp->n)
			tmp = tmp->left;
		else if (value > tmp->n)
			tmp = tmp->right;
		else if (value == tmp->n)
			return (NULL);
	}

	new_node = binary_tree_node(NULL, value);
	if (second == NULL)
		second = new_node;
	else if (value < second->n)
	{
		second->left = new_node;
		new_node->parent = second;
	}
	else
	{
		second->right = new_node;
		new_node->parent = second;
	}

	return (new_node);
}
