#include "binary_trees.h"

/**
 * array_to_bst - A Binary Search Tree from an array
 * @array: pointer of the array
 * @size: the size of the array
 * Return: NULL on failure
 */
bst_t *array_to_bst(int *array, size_t size)
{
	unsigned int i;
	bst_t *root = NULL;

	for (i = 0; i < size; i++)
		bst_insert(&root, array[i]);

	return (root);
}
