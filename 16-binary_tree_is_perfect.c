#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: 0 if tree is NULL, the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		size_t left_height = 0, right_height = 0;

		left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		return ((left_height > right_height) ? left_height : right_height);
	}
	return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL, 1 if tree is perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL)
		height_left = binary_tree_height(tree->left);
	if (tree->right != NULL)
		height_right = binary_tree_height(tree->right);
	if (height_left == height_right &&
			binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right))
	{
		return (1);
	}
	return (0);
}
