#include <bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *left;
	struct node *right;
};

void increment(struct node* node, int diff);

struct node* newNode(int data);

void convertTree(struct node* node)
{
	int left_data = 0, right_data = 0, diff;

	if (node == NULL || (node->left == NULL && node-> right == NULL))
		return;
	else
	{
		convertTree(node->left);
		convertTree(node->right);

		if(node->left != NULL)
			left_data = node->left->data;
		if(node->right != NULL)
			right_data = node->right->data;

		diff = left_data + right_data - node->data;

		if (diff > 0)
			node->data = node->data + diff;
		if (diff < 0)
			increment(node, -diff);
	}
}

