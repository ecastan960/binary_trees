#include "binary_trees.h"

/**
 * binary_tree_inorder - function that goes through a binary
 * tree using in-order traversal
 *
 * @tree: Pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 * Return: 1 if leaf or 0 if not
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL)
		return;
	if (tree != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
