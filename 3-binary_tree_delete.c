#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Description: Recursively deletes all nodes in a binary tree
 * If tree is NULL, function does nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}

	/* Delete left subtree first */
	binary_tree_delete(tree->left);

	/* Delete right subtree */
	binary_tree_delete(tree->right);

	/* Delete the node itself */
	free(tree);
}
