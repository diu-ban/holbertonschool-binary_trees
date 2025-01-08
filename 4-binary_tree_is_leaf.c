#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - Checks if a node is a leaf in a binary tree.
 * @node: Pointer to the node to check.
 *
 * Description:
 * A node is considered a leaf if it does not have any children,
 * meaning both its left and right child pointers are NULL.
 *
 * Return: 1 if the node is a leaf, 0 otherwise.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->right == NULL && node->left == NULL)
		return (1);
	return (0);
}
