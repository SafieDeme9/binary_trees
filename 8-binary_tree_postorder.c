#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_postorder - goes through binary tree using post-order traversal
 * @tree: pounter to the root of the tree to traverse
 * @func: pointer to a function to call each node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
