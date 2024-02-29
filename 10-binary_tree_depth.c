#include "binary_trees.h"
/**
 *binary_tree_depth - measures the depth of a node in a binary tree
 *@tree: pointer to the root node
 *
 *return: tree depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t tree_depth = 0;

if (tree == NULL)
return (0);

while (tree->parent != NULL)
{
tree_depth++;
tree = tree->parent;
}
return (tree_depth);
}
