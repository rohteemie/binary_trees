#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that insert a node as
 *  the left-child of another node
 * @parent: pointer to the node to insert the left child in
 * @value: value to insert into the left node
 * return: pointer to the left node creater or NULL on failure
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
