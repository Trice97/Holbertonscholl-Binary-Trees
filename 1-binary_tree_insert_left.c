#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_insert_left - Inserts a node as the left-child of another
* @parent: Pointer to the node to insert the left child in
* @value: The vale to store in the new node
*
* Return: Pointer to the created node or NULL on failure
*
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *newNode;

if (parent == NULL)
return (NULL);

newNode = binary_tree_node(parent, value);
if (newNode == NULL)
return (NULL);

if (parent->left != NULL)
{
newNode->left = parent->left;
parent->left->parent = newNode;
}
parent->left = newNode;
return (newNode);
}
