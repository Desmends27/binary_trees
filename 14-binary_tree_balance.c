#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"
#include <stdio.h>
/**
 * binary_tree_height - height of the binary tree
 * @tree: pointer to the root node of the tree
 * Return: height of a tree, 0 on erro
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t rheight;
	size_t lheight;

	if (tree == NULL)
		return  (0);
	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);
	if (rheight > lheight)
		return (rheight + 1);
	else
		return (lheight + 1);
}

/**
 * binary_tree_balance - calculate the balanace factor
 * of a binary tree
 * @tree: pointer to the root node of the tree
 * to measure the balance factor
 * balance = height of right - height of left
 * Return: balance factor of tree, 0 on error
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lheight = 0;
	int rheight = 0;

	if (tree == NULL)
		return (0);

	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);
	return (lheight - rheight);
}
