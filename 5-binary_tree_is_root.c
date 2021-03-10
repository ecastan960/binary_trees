#include "binary_trees.h"

/**
 * binary_tree_is_root - function that checks if a node is a leaf
 *
 * @node: Node to check
 * Return: 1 if leaf or 0 if not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent)
		return (0);
	return (1);
}
