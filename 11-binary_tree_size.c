#include "binary_trees.h"

/**
* binary_tree_size - Measures the size of a binary tree.
* @tree: Pointer to the root node of the tree to measure the size.
* Return: Size of the tree (number of nodes), or 0 if tree is NULL.
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sizeL, sizeR;

	if (tree == NULL)
	{
		return (0);
	}
	sizeL = binary_tree_size(tree->left);
	sizeR = binary_tree_size(tree->right);

	return (1 + sizeL + sizeR);
}
