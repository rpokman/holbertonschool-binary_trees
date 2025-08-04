#include "binary_trees.h"

/**
* binary_tree_delete - Deletes an entire binary tree
* @tree: Pointer to the root node of the tree to delete
*
* Description: This function frees all the nodes of a binary tree using
* post-order traversal. If tree is NULL, nothing is done.
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
