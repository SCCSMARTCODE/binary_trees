#include "binary_trees.h"

/**
 * binary_tree_inorder - Performs a in-order traversal on a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: The function traverses the binary tree using in-order traversa
 * and applies the given function `func` to each node visited.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
