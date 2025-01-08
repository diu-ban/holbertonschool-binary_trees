#include "binary_tree.h"
#include <stdlib.h>

/**
 * binary_tree_delete - Deletes an entire binary tree.
 * @tree: Pointer to the root node of the tree to delete.
 *
 * Description: This function recursively traverses the tree in post-order,
 * freeing the left and right subtrees before deleting the current node.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
	  return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
