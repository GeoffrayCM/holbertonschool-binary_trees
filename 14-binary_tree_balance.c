#include "binary_trees.h"

/**
 * height_node - helper to get height of a subtree
 * @tree: pointer to node
 *
 * Return: height of tree, or 0 if tree is NULL
 *
 * Note: this helper is only used if you voulez pas utiliser
 * binary_tree_height directement. Si votre fonction 9 existe
 * déjà et marche, vous pouvez l’appeler à la place.
 */
static size_t height_node(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);

	left_h = height_node(tree->left);
	right_h = height_node(tree->right);

	return ((left_h > right_h ? left_h : right_h) + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (tree == NULL)
		return (0);

	left_h = (int)height_node(tree->left);
	right_h = (int)height_node(tree->right);

	return (left_h - right_h);
}
