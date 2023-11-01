#include "binary_trees.h"

/**
 * binary_tree_is_leaf - binary tree leaves
 * @node: pointer to node
 *
 * Return: one if its a leaf, and zero if its not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
