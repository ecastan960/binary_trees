#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as
 * the left-child of another node
 *
 * @parent: Pointer to the parent node
 * @value: Pointer to the left child node
 * Return: New node to the left of the parent node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *New_node = NULL;
	binary_tree_t *temp = NULL;

	if (parent == NULL)
		return (NULL);

	New_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (New_node == NULL)
		return (NULL);

	if (parent->left == NULL)
	{
		parent->left = New_node;
		New_node->parent = parent;
		New_node->n = value;
		New_node->left = NULL;
		New_node->right = NULL;
	}
	else
	{
		temp = parent->left;
		temp->parent = New_node;
		parent->left = New_node;
		New_node->parent = parent;
		New_node->n = value;
		New_node->left = temp;
		New_node->right = NULL;
	}
	return (New_node);
}
