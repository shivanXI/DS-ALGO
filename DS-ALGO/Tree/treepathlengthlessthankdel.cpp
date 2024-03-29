#include <bits/stdc++.h>

using namespace std;

struct Node
{
	int data;
	Node *left, *right;
};

Node *newNode(int data)
{
	Node *node = new Node;
	node->data = data;
	node->left = node->right = NULL;
	return node;
}

Node *removeShortPathNodesUtil(Node *root, int level, int k)
{
	if(root == NULL)
		return NULL;

	root->left = removeShortPathNodesUtil(root->left, level+1, k);
	root->right = removeShortPathNodesUtil(root->right, level+1, k);

	if(root->left == NULL && root->right == NULL && level < k)
	{
		delete root;
		return NULL;
	}

	return root;
}

Node *removeShortPathNodes(Node *root, int k)
{
	int pathLen = 0;
	return removeShortPathNodesUtil(root, 1, k);
}

void printInorder(Node *root)
{
	if (root)
	{
		printInorder(root->left);
		cout << root->data << " ";
		printInorder(root->right);
	}
}

int main()
{
	
	return 0;
}