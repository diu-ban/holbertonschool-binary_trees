#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - Inserts a node as the left child of another node.
 * @parent: Pointer to the node to insert the left child in.
 * @value: Value to store in the new node.
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = parent->right;

	if (parent->right)
		parent->right->parent = node->right;
	parent->right = node;
	return (node);
}
