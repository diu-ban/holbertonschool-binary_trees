#include "binary_trees.h"
#include <stdlib.h>
size_t binary_tree_depth(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t left_depth, right_depth;

    if (tree == NULL)
        return (0);

	left_depth = binary_tree_depth(tree->left);
	right_depth = binary_tree_depth(tree->right);

	if (left_depth != right_depth)
        	return (0);

	if (!binary_tree_is_perfect(tree->left) || !binary_tree_is_perfect(tree->right))
		return (0);
	return (1);
}

/**
 * binary_tree_depth - Measures the depth of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the depth.
 *
 * Return: Depth of the tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    return (1 + binary_tree_depth(tree->left));
}
