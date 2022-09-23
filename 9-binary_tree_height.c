#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: s a pointer to the root node of the tree to measure the height
 * Return: height of a binary tree or NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftChild, rightChild;

	if (tree && tree->left)
		leftChild = binary_tree_height(tree->left) + 1;
	else
		leftChild = 0;
	if (tree && tree->right)
		rightChild = binary_tree_height(tree->right) + 1;
	else
		rightChild = 0;
	if (rightChild >= leftChild)
		return (rightChild);
	else
		return (leftChild);
}
