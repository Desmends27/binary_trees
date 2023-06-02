#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is null, otherwise 1 for full tree
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full = 0;

	if (tree == NULL)
		return (0);
	if (((tree->left == NULL && tree->right == NULL) 
			|| (tree->left != NULL && tree->right != NULL)) && tree->parent)
	{
		return (1);
	}
	else
		return (0);
	full = binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
	return (full);
}
