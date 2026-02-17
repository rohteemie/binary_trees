#include "binary_trees.h"


/**
 * binary_tree_balance - function measures the balance factor
 * @tree: a pointer to the root node to measure the balance factor
 * Return: 0 If tree is NULL
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int Th = 0;
	int Tl = 0;

	if (tree)
	{
		Th = binary_tree_height(tree->left);
		Tl = binary_tree_height(tree->right);
	}
	return (Th - Tl);
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: s a pointer to the root node of the tree to measure the height
 * Return: height of a binary tree or NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftChild = 0;
	size_t rightChild = 0;

	if (!tree)
		return (0);

	if (tree->left)
	{
		leftChild = binary_tree_height(tree->left) + 1;
	}
	else
		leftChild = 1;
	if (tree->right)
		rightChild = binary_tree_height(tree->right) + 1;
	else
		rightChild = 1;
	if (rightChild >= leftChild)
		return (rightChild);
	else
		return (leftChild);
}
