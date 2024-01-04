#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Balance factor of the tree, or 0 if the tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int bal;

	if (!tree)
		return (0);

	bal = binary_tree_height(tree->left) - binary_tree_height(tree->right);
	if (tree->left)
		bal += 1;
	if (tree->right)
		bal -= 1;

	return (bal);
}
