#include "binary_trees.h"

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
	if (tree->left == NULL && tree->right == NULL)
		return (1);
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
