#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_is_perfect - returns 1 if true 0 if false
 *
 * @tree: Pointer to the root node of the tree to traverse
 * Return: 0 if tree is not full
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int size = 1;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->right)
		size *= binary_tree_is_perfect(tree->right);
	if (tree->left)
		size *= binary_tree_is_perfect(tree->left);

	if (binary_tree_height(tree->right) != binary_tree_height(tree->left))
	{
		return (0 * size);
	}

	if (tree->right && tree->left)
		return (1 * size);
	else if (!(tree->right) && !(tree->left))
		return (1 * size);
	else
		return (0 * size);

}
