#include "binary_trees.h"

/**
 * binary_tree_leaves - binary tree leaves
 * @tree: pointer to tree
 *
 * Return: count of binary_tree_leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
}
