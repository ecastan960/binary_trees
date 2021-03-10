#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as
 * the right-child of another node
 *
 * @parent: Pointer to the parent node
 * @value: Pointer to the left child node
 * Return: New node to the right of the parent node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *New_node = NULL;
	binary_tree_t *temp = NULL;

	if (parent == NULL)
		return (NULL);

	New_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (New_node == NULL)
		return (NULL);

	if (parent->right == NULL)
	{
		parent->right = New_node;
		New_node->parent = parent;
		New_node->n = value;
		New_node->left = NULL;
		New_node->right = NULL;
	}
	else
	{
		temp = parent->right;
		temp->parent = New_node;
		parent->right = New_node;
		New_node->parent = parent;
		New_node->n = value;
		New_node->left = NULL;
		New_node->right = temp;
	}
	return (New_node);
}
