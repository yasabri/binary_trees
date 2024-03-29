#include "binary_trees.h" 

/*
 * Binary Tree Postorder: This function uses
 * 	post-order traversal to navigate a binary tree.
 * @tree: A reference to the tree's root node that has to be climbed.
 * @func: A reference to a callable function for every node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
