#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"
/**
 * binary_tree_depth - finds the depth of a node in a binary tree
 * @tree: pointer to the node to measure the detph
 * Return: depth, 0 on error
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t ldepth, rdepth;

	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);
	ldepth = binary_tree_depth(tree->left);
	rdepth = binary_tree_depth(tree->right);

	if (rdepth > ldepth)
		return (rdepth + 1);
	else
		return (ldepth + 1);
}
