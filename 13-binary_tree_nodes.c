#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least one child
 * @tree: pointer to the root node of the tree to count numbers of nodes
 *
 * Return: 0 if tree is NULL, number of nodes with at least one child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	size_t size = binary_tree_size(tree);
	size_t leaves = binary_tree_leaves(tree);

	return (size - leaves);
}
