#include "binary_trees.h"
/**
 *binary_tree_uncle - unction that finds the uncle of a node
 *@node: pointer to the node
 *
 *Return: if node has no uncle return NULL else return uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
return (NULL);
if (node->parent->parent->left == node->parent)
return (node->parent->parent->right);
if (node->parent->parent->right == node->parent)
return (node->parent->parent->left);
return (NULL);
}