#include "binary_trees.h"

/**
 * array_to_avl - it builds an AVL tree from an array
 *
 * @array: the array to create from
 *
 * @size: the size of the array
 *
 * Return: a pointer to the root node of the created AVL tree
 *         NULL on failure
 */
avl_t *array_to_avl(int *array, size_t size)
{
	unsigned int i;
	avl_t *root = NULL;

	for (i = 0; i < size; i++)
		avl_insert(&root, array[i]);

	return (root);
}
