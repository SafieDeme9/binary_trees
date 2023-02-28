#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_root - checks if given node is a root
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a root, 0 otherwise and if node is NULL
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
