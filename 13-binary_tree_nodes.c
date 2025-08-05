#include "binary_trees.h"

/**
* binary_tree_nodes - Measures the size of a binary tree.
* @tree: Pointer to the root node of the tree to measure the size.
* Return: Size of the tree (number of nodes), or 0 if tree is NULL.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	return (0);

	return (1 + binary_tree_nodes(tree->left) +  binary_tree_nodes(tree->right));
}
