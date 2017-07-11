#include <bits/stdc++.h>
using namespace std;

struct node
{
	struct node *left;
	int data;
	struct node *right;
};

void printLevelOrderUsingSingleQueue(node *root)
{
	if (root == NULL) return;

	queue<node *> q;
	q.push(root);

	while(1)
	{
		int nodeCount = q.size();
		if (nodeCount == 0)
			break;

		while (nodeCount > 0)
		{
			node *node = q.front();
			cout << node->data ;
			q.pop()
			if()
		}
	}
}





node* newNode(int data)
{
	node *temp = new node;
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

int main()
{
	node *root = newNode(root);
	printLevelOrderUsingSingleQueue(root);
	return 0;
}