#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h, size, expected_nodes;

	if (tree == NULL)
		return (0);

	/* hauteur (en niveaux) de l'arbre */
	h = binary_tree_height(tree);

	/* nombre de noeuds total */
	size = binary_tree_size(tree);

	/* nombre de noeuds d'un arbre parfait : 2^(h+1) - 1 */
	expected_nodes = ((size_t)1 << (h + 1)) - 1;

	return (size == expected_nodes);
}
