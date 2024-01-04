#include "binary_trees.h"

/**
 * binary_tree_nodes - returns the amount of the tree's leaves
 *
 * @tree: Pointer to the root node of the tree to traverse
 * Return: 0 if tree is NULL else return number of leaves
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
	{
		return (0);
	}

	size = binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left);

	if (tree->right || tree->left)
		return (1 + size);
	else
		return (0 + size);
}
