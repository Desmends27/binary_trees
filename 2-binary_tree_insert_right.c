#include "binary_trees.h"
/**
 * binary_tree_right - inserts a node as the right-child
 * @parent: parent to the node to insert
 * @value: value to be placed
 * Return: pointer to created node or NULL on failure 
 * or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	if (parent == NULL)
		return (NULL);
	right_child = binary_tree_node(parent, value);

	if (right_child == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		right_child->right = parent->right;
		right_child->right->parent = right_child;
	}
	parent->right = right_child;
	return parent->right;
}
