#include "binary_trees.h"

/**
* binary_tree_is_full - Vérifie si un arbre binaire est plein
* @tree: pointeur vers 1e noeud de l'arbre à vérifier
* Return: 1 si l'arbre est plein sinon 0
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);


	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (0);
}
