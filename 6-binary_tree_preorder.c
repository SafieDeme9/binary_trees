#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: pounter to the root of the tree to traverse
 * @func: pointer to a function to call each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
