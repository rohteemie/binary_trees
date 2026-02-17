#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - function create a binary tree node
 * @parent: parent to the current node
 * @value: is the value in the parent node
 * Return: return a pointer to the new node or NuLL on failure
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;
	parent = node;

	return (parent);
}
