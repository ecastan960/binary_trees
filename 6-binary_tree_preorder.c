#include "binary_trees.h"

/**
 * binary_tree_preorder - function that checks if a node is a leaf
 *
 * @tree: Pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 * Return: 1 if leaf or 0 if not
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL)
		return;
	if (tree != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
