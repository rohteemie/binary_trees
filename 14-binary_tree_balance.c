#include "binary_trees.h"


/**
 * binary_tree_balance - function measures the balance factor
 * @tree: a pointer to the root node to measure the balance factor
 * Return: 0 If tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;

	if (!tree)
		return (0);
	balance = binary_tree_height(tree);

	return (balance);
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

	if (tree && tree->left)
	{
		leftChild += 1;
		leftChild += binary_tree_height(tree->left);
	}

	if (tree && tree->right)
	{
		rightChild += 1;
		rightChild += binary_tree_height(tree->right);
	}

	return (leftChild - rightChild);
}
