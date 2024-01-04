#include "binary_trees.h"

/**
 * binary_tree_is_full - returns 1 if true 0 if false
 *
 * @tree: Pointer to the root node of the tree to traverse
 * Return: 0 if tree is not full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int size = 1;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->right)
		size *= binary_tree_is_full(tree->right);
	if (tree->left)
		size *= binary_tree_is_full(tree->left);

	if (tree->right && tree->left)
		return (1 * size);
	else if (!(tree->right) && !(tree->left))
		return (1 * size);
	else
		return (0 * size);
}
