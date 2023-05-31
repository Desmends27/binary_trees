#include "binary_trees.h"
/**
 * binary_tree_node -  creates a binary tree node
 * @parent: pointer to the parent of the node to create
 * @value: value is the value to put in the new node
 * Return: a pointer to the new node or null on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);
	node->n = value;
	node->right = NULL;
	node->left = NULL;
	node->parent = parent;
	return (node);
}
