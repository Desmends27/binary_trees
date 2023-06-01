#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through a
 * binary tree using pre-order transversal
 * @tree: pointer to the root node
 * @func: node to be passed as parameter to the function
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL)
		return;
	if (tree == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
