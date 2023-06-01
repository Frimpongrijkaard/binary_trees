#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as the right-child 
 * @parent: pointer to the node to insert the right-child 
 * @value: value to store in the new node
 *
 * Return: Pointer to the newly created node
 *         NULL on failure
 *         NULL if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return NULL;
	}

	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return NULL;
	}

	new_node -> n = value;
	new_node -> parent = parent;
	new_node -> left = NULL;
	new_node -> right = parent -> right;
	parent -> right = new_node;

	if (new_node -> right != NULL)
	{
		parent -> right -> parent = new_node;
	}
	return new_node;
}