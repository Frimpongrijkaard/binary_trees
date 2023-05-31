#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: Pointer to the newly created node
 *         NULL on failure
 *         NULL if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL){
		return NULL;
	}

	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL){
		return NULL;
	}

	new_node-> n = value;
	new_node -> parent = parent;
	new_node -> left = NULL;
	new_node -> right = NULL;

	if (parent-> right != NULL){
		new_node->right = parent->right;
		parent -> right -> parent = new_node;
	}

	parent->right = new_node;
	return new_node;
}
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_print(root);
    printf("\n");
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    binary_tree_print(root);
    return (0);
}
