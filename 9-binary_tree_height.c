#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"
/**
 * binary_tree_height - height of the binary tree
 * @tree: pointer to the root node of the tree
 * Return: height of a tree, 0 on erro
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t rheight;
	size_t lheight;

	if (tree == NULL || binary_tree_is_leaf(tree))
		return  (0);
	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);
	if (rheight > lheight)
		return (rheight + 1);
	else
		return (lheight + 1);
}
