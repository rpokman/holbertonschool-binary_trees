#include "binary_trees.h"

/**
* binary_tree_leaves - Measures the size of a binary tree.
* @tree: Pointer to the root node of the tree to measure the size.
* Return: Size of the tree (number of nodes), or 0 if tree is NULL.
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
