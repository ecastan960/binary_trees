#include "binary_trees.h"
/**
 * balance_left - function that measures the balance
 * factor of a binary tree
 *
 * @tree: Pointer to the root node of the tree to traverse
 * Return: Number of leaves in a tree
 */
int balance_left(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (balance_left(tree->left) + 1);
}

/**
 * balance_right - function that measures the balance
 * factor of a binary tree
 *
 * @tree: Pointer to the root node of the tree to traverse
 * Return: Number of leaves in a tree
 */
int balance_right(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (balance_right(tree->right) + 1);
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
	b_left = balance_left(tree);
	b_right = balance_right(tree);
	return (b_left - b_right);
}
