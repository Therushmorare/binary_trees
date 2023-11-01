#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in bt
 * @tree: a pointer to the node to be measured
 *
 * Return: The depth of the node, else 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	
	return (binary_tree_depth(tree->parent) + 1);
}
