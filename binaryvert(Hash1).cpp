#include <bits/stdc++.h>
#include <vector>
#include <map>
using namespace std;

struct node
{
	int key;
	node *left, *right;
};

struct node* newNode (int key)
{
	struct node* node  =  new node;
	node->key  = key;
	node->left  = node->right  = NULL;
	return node;
}

void  getVerticalOrder(node* root, int hd, map<int, vector<int>> &m)
{
	
}
