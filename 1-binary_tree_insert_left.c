#include "binary_trees.h"


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;
		
	newnode = binary_tree_node(parent, value);

	if (newnode == NULL || parent == NULL)
	{
		return (NULL);
	}

	if (parent->left == NULL)
	{
		parent->left = newnode;
	}
	else
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
		parent->left = newnode;
	}

	return(newnode);
}
