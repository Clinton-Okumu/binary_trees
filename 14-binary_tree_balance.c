#include "binary_trees.h"
/**
 *binary_tree_balance - measures the balance factor of a binary tree
 *@tree: pointer to the root node
 *
 *Return: size
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int left, right;

if (tree == NULL)
return (0);

left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);
return (left - right);
}

/**
 *binary_tree_height - function that measures the height of a binary tree
 *@tree: pointer to the root node
 *
 *Return: The height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left, right;

if (tree == NULL)
return (0);

left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);

return (1 + (left > right ? left : right));
}
