#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"
/**
 * binary_tree_depth - finds the depth of a node in a binary tree
 * @tree: pointer to the node to measure the detph
 * Return: depth, 0 on error
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
}
