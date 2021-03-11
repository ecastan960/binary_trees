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
 * binary_tree_is_full - function that checks if a binary
 * tree is full
 *
 * @tree: Pointer to the root node of the tree to traverse
 * Return: Number of leaves in a tree
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int check = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right == NULL)
		return (0);
	else if (tree->left == NULL && tree->right != NULL)
		return (0);
	check = binary_tree_is_full(tree->left);
	if (tree->left == NULL && tree->right == NULL)
		check = 1;
	else if (tree->left != NULL && tree->right != NULL)
		check = 1;
	check = binary_tree_is_full(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		check = 1;
	return (check);
}


/**
 * binary_tree_is_perfect - function that checks if a binary
 * tree is full
 *
 * @tree: Pointer to the root node of the tree to traverse
 * Return: Number of leaves in a tree
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int check_left = 0;
	int check_right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	check_left = binary_tree_height(tree->left);
	check_right = binary_tree_height(tree->right);
	if (check_left != check_right)
		return (0);
	return (binary_tree_is_full(tree));
}
