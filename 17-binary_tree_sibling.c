#include "binary_trees.h"

/**
* binary_tree_sibling - Recherche le frère d'un noeud
* @node: pointeur vers le noeud pour lequel on cherche le frère
* Return: pointeur vers le frère ou NULL si aucun frère ou si node est NULL
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);

	else
		return (node->parent->left);
}
