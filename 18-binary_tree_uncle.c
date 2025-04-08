# include "binary_trees.h"

/**
* binary_tree_uncle - Trouver l'oncle d'un noeud
* @node: pointeur vers le noeud pour lequel on cherche l'oncle
* Return: pointeur vers le noeud oncle,ou NULL si le noeud n'a pas d'oncle
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);

	else
		return (node->parent->parent->left);
}
