#include "binary_trees.h"
/**
 *binary_tree_is_perfect - function that checks if a binary tree is perfect
 *@tree: pointer to the root node
 *
 *Return: if  binary tree is perfect is NULL return 0 else return 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t left, right;

if (tree == NULL)
return (0);

left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);
if (left == right)
{
if (tree->left == NULL && tree->right == NULL)
return (1);

if (tree->left && tree->right)
return (binary_tree_is_perfect(tree->left) &&
binary_tree_is_perfect(tree->right));
}
return (0);
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
