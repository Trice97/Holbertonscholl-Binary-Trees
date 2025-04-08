#include "binary_trees.h"

/**
* binary_tree_height - mesure la hauteur d'un arbre binaire
* @tree: pointeur vers le noeud racine de l'arbre binaire
* Return: hauteur de l'arbre, si tree est NULL
* retoune 0
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height;
size_t right_height;
if (tree == NULL)
return (0);
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
return ((left_height > right_height ? left_height : right_height)+1);
}

/**
* binary_tree_balance - mesure le facteur d'équilibre
* d'un arbre binaire
* @tree: pointeur vers le noeud racine de l'arbre à mesurer
* Return: facteur d'équilibre de l'arbre
* si tree est NULL, retourne 0
*/

int binary_tree_balance(const binary_tree_t *tree)
{
int left_height, right_height;
if (tree == 0)
return (0);
left_height = (int) binary_tree_height(tree->left);
right_height = (int) binary_tree_height(tree->right);
return (left_height - right_height);
}
