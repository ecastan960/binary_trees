#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 *
 * @parent: Pointer to the parent node
 * @value: Pointer to the left child node
 * Return: New node in the binary tree
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *New_node = NULL;

	New_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (New_node == NULL)
		return (NULL);
	New_node->n = value;
	New_node->left = NULL;
	New_node->right = NULL;
	if (parent == NULL)
		return (New_node);
	else
	{
		New_node->parent = parent;
		return (New_node);
	}
}
