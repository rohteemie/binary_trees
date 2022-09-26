#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: is a pointer to the root node of the tree to check
 * Return: 0 if tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int TR = 0;
	int TL = 0;

	if (!tree)
		return (0);
	TL = binary_tree_leaves(tree->left);
	TR = binary_tree_leaves(tree->right);

	if (TL == TR)
		return (1);
	else
		return (0);

}

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
