#include "binary_trees.h"

/**
 * binary_tree_sibling - function that checks if a binary
 * tree is full
 *
 * @node: Pointer to a node of the tree to traverse
 * Return: Number of leaves in a tree
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	int check = 0;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left != NULL && node->parent->right != NULL)
	{
		check = node->n;
		if (node->parent->left->n == check)
			return (node->parent->right);
		else
			return (node->parent->left);
	}
	return (NULL);
}
