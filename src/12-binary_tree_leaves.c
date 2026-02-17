#include "binary_trees.h"

/**
 * binary_tree_leaves - function measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: retun 0 for tree been NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		if (tree->right == NULL && tree->left == NULL)
			size += 1;
		size += binary_tree_leaves(tree->right);
		size += binary_tree_leaves(tree->left);
	}
	return (size);
}
