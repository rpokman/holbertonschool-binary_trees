#include "binary_trees.h"

/**
* binary_tree_uncle - Finds the sibling of a node
* @node: Pointer to the node to find the sibling
*
* Return: Pointer to the sibling node, or NULL if no sibling
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
        return (NULL);

	if (node->parent->parent->left == node->parent &&
        node->parent->parent->right)
        return (node->parent->parent->right);

    if (node->parent->parent->right == node->parent &&
        node->parent->parent->left)
        return (node->parent->parent->left);

	return (NULL);
}
