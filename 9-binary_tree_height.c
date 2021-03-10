#include "binary_trees.h"

/**
 * height_calc - Auxiliary function to calculate
 * height of tree
 *
 * @temp: Pointer to the root node of the tree to traverse
 * Return: height of tree
 */

int height_calc(const binary_tree_t *temp)
{
	int height_right = 0;
	int height_left = 0;

	if (temp == NULL)
		return (-1);
	height_left = height_calc(temp->left);
	height_right = height_calc(temp->right);
	if (height_left > height_right)
		return (height_left + 1);
	else
		return (height_right + 1);
}

/**
 * binary_tree_height - function that measures the height
 * of a binary tree
 *
 * @tree: Pointer to the root node of the tree to traverse
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int height;

	if (tree == NULL)
		return (0);
	height = height_calc(tree);
	return (height);
}
