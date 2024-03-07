#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: Pointer to the node to measure the depth of.
 * Return: Depth of a node in a binary tree or if node is NULL return 0.
 **/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL)
		return (counter);

	while (tree->parent != NULL)
	{
		counter++;
		tree = tree->parent;
	}

	return (counter);
}
