#include "binary_trees.h"

/**
 * binary_tree_nodes - function counts the nodes with a least 1 child
 * @tree: pointer to the root node of the tree to count
 * Return: 0 if tree is NULL else counts
 */


size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree)
	{
		if (tree->left != NULL || tree->right != NULL)
			count += 1;
		count +=  binary_tree_nodes(tree->right);
		count += binary_tree_nodes(tree->left);
	}

	return (count);
}
