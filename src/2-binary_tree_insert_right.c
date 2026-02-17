#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function inserts a node as a right-child
 *                           of another in a binary tree.
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node_to_insert;

	if (parent == NULL)
		return (NULL);

	node_to_insert = binary_tree_node(parent, value);

	if (node_to_insert == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		node_to_insert->right = parent->right;
		parent->right->parent = node_to_insert;
	}
	parent->right = node_to_insert;

	return (node_to_insert);
}
