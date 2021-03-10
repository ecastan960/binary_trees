#include "binary_trees.h"

/**
 * search_last_node - Deletes entire tree
 *
 * @tree: Tree to be deleted
 * @current: Current node
 */
void search_last_node(binary_tree_t *tree, binary_tree_t *current)
{

	if ( (current->left) != NULL)
	{
		current = current->left;
		search_last_node(tree, current);
	}
	else if ( (current->right) != NULL)
	{
		current = current->right;
		search_last_node(tree, current);
	}
	else
	{
		if (current->parent != tree)
		{
			current->parent->left = NULL;
			current->parent->right = NULL;
		}
		else if (current->parent == tree)
		{
			if (current->parent->left == current)
				current->parent->left = NULL;
			else
			{
				current->parent->right = NULL;
			}
		}
		free(current);
	}
}

/**
 * binary_tree_delete - Deletes entire tree
 *
 * @tree: Tree to be deleted
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *temp = NULL;

	if (tree == NULL)
		return;
	if (tree->left != NULL)
	{
		temp = tree->left;
		search_last_node(tree, temp);
		binary_tree_delete(tree);
	}
	else if (tree->right != NULL)
	{
		temp = tree->right;
		search_last_node(tree, temp);
		binary_tree_delete(tree);
	}
	else
	{
		free(tree);
	}
}
