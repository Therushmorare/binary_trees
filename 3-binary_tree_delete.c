#include "binary_trees.h"

/**
 * binary_tree_delete - function to delete nodes in a binary tree
 * @tree: binary tree to be deleted
 *
 * Return: nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}

	if (tree == NULL)
		return (NULL);
}
