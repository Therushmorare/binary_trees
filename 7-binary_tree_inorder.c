#include "binary_trees.h"

/**
 * binary_tree_inorder - in-order traversal function
 * @tree: pointer to tree
 * @ func: pointer to func
 *
 * Return: nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
