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



/**
 * binary_tree_balance - function that measures the balance
 * factor of a binary tree
 *
 * @tree: Pointer to the root node of the tree to traverse
 * Return: Number of leaves in a tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int b_left = 0;
	int b_right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	if (tree->left != NULL)
		b_left = binary_tree_height(tree->left);
	if (tree->right != NULL)
		b_right = binary_tree_height(tree->right);
	return (b_left - b_right);
}
