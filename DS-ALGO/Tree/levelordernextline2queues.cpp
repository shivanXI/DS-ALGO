#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node *left, *right;
};

void levelOrder2queue(Node *root)
{
	queue<Node *> q1, q2;

	if(root == NULL)
		return;

	q1.push(root);
	while (!q1.empty() || !q2.empty())
	{
		while(!q1.empty())
		{
			if (q1.front()->left != NULL)
				q2.push(q1.front()->left);
			if (q1.front()->right != NULL)
				q2.push(q1.front()->right);

			cout << q1.front()->data <<" ";
			q1.pop();
		}

		cout << "\n";
	}
}

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