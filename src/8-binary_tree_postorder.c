#include "binary_trees.h"
/**
 * binary_tree_postorder - fuction for binary tress inOrder traversal
 * @func: pointer function to call for each node
 * @tree: pointer to the root node of the tree to traverse
 * Return: If tree or func is NULL return void else return void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
