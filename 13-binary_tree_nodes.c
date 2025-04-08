#include "binary_trees.h"

/**
* binary_tree_nodes - compte les noeud avec au moins
*  un enfant dans l'arbre binaire
*  @tree: pointeur vers le noeud de racine
*  de l'arbre à compter les noeuds
*  Return: nombre de noeuds avec au moins un enfant
*  si tree est NULL retourne 0
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
if (tree->left != NULL || tree->right != NULL)
return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
