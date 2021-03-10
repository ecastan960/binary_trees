#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of
 * a node in a binary tree
 *
 * @tree: Pointer to the root node of the tree to traverse
 * Return: Depth of node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth += 1;
		tree = tree->parent;
	}
	return (depth);
}
