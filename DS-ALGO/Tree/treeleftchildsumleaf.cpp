#include <bits/stdc++.h>

using namespace std;

struct Node
{
	int key;
	struct Node* left, *right;
};

Node *newNode(char k)
{
	Node *node = new Node;
	node->key = k;
	node->right = node->left = NULL;
	return node;
}

bool isLeaf(Node *node)
{
	if(node == NULL)
		return false;
	if (node->left == NULL && node->right == NULL)
		return true;
	return false;
}

int leftLeavesSum(Node *root)
{
	int result = 0;

	if(root != NULL)
	{
		if(isLeaf(root->left))
			result += root->left->key;
		else
			result += leftLeavesSum(root->left);
		result += leftLeavesSum(root->right);
	}

	return result;
}

int main()
{
	return 0;
}