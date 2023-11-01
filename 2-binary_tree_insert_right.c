#include "binary_tree.h"

/**
 * binary_tree_insert_right - inserts a node as a right-child of a parent node
 * @parent: parent node
 * @value: value of new node(right-child)
 *
 * Return: new node, else Null if parent is NULL or upon failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = parent->right;
	parent->right = new;
	if (new->right)
		new->right->parent = new;
	return (new);
}
