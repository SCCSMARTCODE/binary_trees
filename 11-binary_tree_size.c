#include "binary_trees.h"

/**
 * binary_tree_size - returns the size of the tree
 *
 * @tree: Pointer to the root node of the tree to traverse
 * Return: 0 if tree is NULL else return tree-size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
	{
		return (0);
	}

	size = binary_tree_size(tree->right) + binary_tree_size(tree->left);

	return (1 + size);
}
