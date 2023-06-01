#include "binary_trees.h"
/**
 * binary_tree_inorder - goes through a tree using in-order
 * transversal
 * @tree: pointer to the root node of the tree
 * @func: pointer to a functin call for each node
 * value will be passed as parameter
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL)
		return;
	if (tree == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
