#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to tree
 *
 * Return: tree balance
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

/**
 * binary_tree_height - calculate heeight of binary tree
 * @tree: pointer to the tree
 *
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		size_t left_height = 0, right_height = 0;
		left_height = binary_tree_height(node->left);
		right_height = binary_tree_height(node->right);

		if (left_height > right_height)
			return (left_height + 1);
		else
			return (right_height + 1);
	}
}
