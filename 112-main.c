#include <stdlib.h>
#include "binary_trees.h"

/**
 * main - the entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
	bst_t *tree;
	int array[] = {
		79, 47, 68, 87, 84, 91, 21, 32, 34, 2,
		20, 47, 22, 98, 1, 62, 95
	};
	size_t n = sizeof(array) / sizeof(array[0]);

	tree = array_to_bst(array, n);
	if (!tree)
		return (1);
	binary_tree_print(tree);
	binary_tree_delete(tree);
	return (0);
}
