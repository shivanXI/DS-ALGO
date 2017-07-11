#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node *left, *right;
};

Node* newNode (int data)
{
	Node *temp = new Node;
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

int main()
{
	Node *root = newNode(1);

	levelOrder2queue(root);
	return 0;
}