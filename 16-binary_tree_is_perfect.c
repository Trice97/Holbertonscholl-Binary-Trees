#include "binary_trees.h"

/**
* binary_tree_height - Calcule la hauteur d’un arbre binaire
* @tree: pointeur vers la racine de l’arbre
*
* Return: hauteur de l’arbre, 0 si tree est NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left = 0, right = 0;

if (!tree)
return (0);

if (tree->left)
left = 1 + binary_tree_height(tree->left);
if (tree->right)
right = 1 + binary_tree_height(tree->right);

return (left > right ? left : right);
}

/**
* binary_tree_size - Calcule le nombre total de nœuds dans l’arbre
* @tree: pointeur vers la racine de l’arbre
*
* Return: taille de l’arbre, 0 si tree est NULL
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
if (!tree)
return (0);

return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
* binary_tree_is_perfect - Vérifie si un arbre binaire est parfait
* @tree: pointeur vers la racine de l’arbre
*
* Return: 1 si parfait, 0 sinon
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t height, size, expected_nodes;

if (!tree)
return (0);

height = binary_tree_height(tree);
size = binary_tree_size(tree);


expected_nodes = (1 << (height + 1)) - 1;  /* Calcul de 2^(height + 1) - 1 */

return (size == expected_nodes);
}
