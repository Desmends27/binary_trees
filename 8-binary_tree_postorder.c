#include "binary_trees.h"
/**
 * binary_tree_postorder - goes thrugh a tree using post order
 * @tree: pointer to the root node of the tree
 * @func: pointer to a function to call on each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL)
		return;
	if (tree == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
