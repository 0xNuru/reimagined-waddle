#include "binary_trees.h"

/**
* binary_tree_delete - a function that deletes an entire binary tree
*
* Description: post-order traversal so that child is deleted before parent
* to avoid dangling pointers
* @tree: a pointer to the root node of the tree to delete
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
