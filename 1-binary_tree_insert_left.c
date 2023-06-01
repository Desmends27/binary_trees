#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_insert_left - inserts a node as left child
 * @parent: pointer to the node to insert the left child
 * @value: value to be stored in new node
 * Return: pointer to the created node or NULL on failure
 * or if parrent is null
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child;
	/*binary_tree_t *temp;*/

	if (parent == NULL)
		return (NULL);

	left_child = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		left_child->left = parent->left;
		left_child->left->parent = left_child;
	}

	parent->left = left_child;
	return (parent->left);

}
