#include "binary_trees.h"

/**
 * binary_tree_is_root - binary tree root node
 * @node: pointer to node
 *
 * Return: one if its a root, and zero if its not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
