#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: Pointer to the newly created node
 *         NULL on failure
 *         NULL if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL) {
		return NULL;
	}

	binary_tree_t *Newnode = malloc(sizeof(binary_tree_t));

	if (Newnode == NULL){
		return NULL;
	}

	Newnode-> n = value;
	Newnode->parent = parent;
	Newnode-> left = parent->left;
	parent->left = Newnode;
	Newnode-> right = NULL;


	if (parent->left != NULL){
		Newnode-> left -> parent = Newnode;
	}

	return Newnode;
}
