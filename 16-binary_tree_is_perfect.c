#include "binary_trees.h"
/**
 * depth - calculates the depth
 * @node: node to find depth
 * Return: detph of node
 */
int depth(const binary_tree_t *node)
{
	int d = 0;

	while (node != NULL)
	{
		d++;
		node = node->left;
	}
	return (d);
}
/**
 * is_perfect - checks if a tree is perfect
 * @tree: root node
 * @d: depth
 * @level: level of the depth
 * Return: 1 if perfect, 0 otherwise
 */
int is_perfect(const binary_tree_t *tree, int d, int level)
{
	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
		return (d == level + 1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_perfect(tree->left, d, level + 1) &&
			is_perfect(tree->right, d, level + 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect(wrapper function
 * @tree: pointer to the root node of the tree
 * Return: 1 if perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = depth(tree);

	return (is_perfect(tree, d, 0));
}
