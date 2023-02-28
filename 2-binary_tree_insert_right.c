#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - insert a node as right-child of another node
 *
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store to the new node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right;

	if (parent == NULL)
		return (NULL);

	new_right = binary_tree_node(parent, value);

	if (new_right == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_right->right = parent->right;
		parent->right->parent = new_right;
	}
	parent->right = new_right;

	return (new_right);
}
