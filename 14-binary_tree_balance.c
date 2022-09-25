#include "binary_trees.h"


/**
 * binary_tree_balance - function measures the balance factor
 * @tree: a pointer to the root node to measure the balance factor
 * Return: 0 If tree is NULL
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int n;
	size_t leftChild = 0;
	size_t rightChild = 0;
	if (!tree)
		return (0);
	if (tree->left)
	{
		leftChild += 1;
		leftChild += binary_tree_balance(tree->left);
	}

	if (tree->right)
	{
		rightChild += 1;
		rightChild += binary_tree_balance(tree->right);
	}
	n = leftChild - rightChild;
	return (n);
}
