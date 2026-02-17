#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function inserts a node as a left-child
 * of another in a binary tree.
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftNode;

	if (parent == NULL)
		return (NULL);

	leftNode = binary_tree_node(parent, value);

	if (leftNode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		leftNode->left = parent->left;
		parent->left->parent = leftNode;
	}
	parent->left = leftNode;

	return (leftNode);
}
