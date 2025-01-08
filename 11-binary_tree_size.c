#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: Size of the tree. If tree is NULL, return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t ln, rn;

	if (tree == NULL)
		return (0);
	ln = binary_tree_size(tree->left);
	rn = binary_tree_size(tree->right);
	return (ln + rn +1);
}
