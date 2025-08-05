#include "binary_trees.h"

/**
* binary_tree_depth - Measures the height of a binary tree
* @tree: Pointer to the root node of the tree to measure the height
*
* Return: Height of the tree, or 0 if tree is NULL
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}

		for (; tree->parent; depth++)
		{
		tree = tree->parent;
		}

return (depth);
}
