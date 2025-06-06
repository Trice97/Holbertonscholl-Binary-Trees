#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: Pointer to the node to check
 *
 * Return: 1 if node is a leaf, 0 otherwise
 * If node is NULL, return 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

/*A node is a a leaf at the moment he has no kid*/
	if (node->left == NULL && node->right == NULL)
	{
	return (1);
	}
	return (0);
}
