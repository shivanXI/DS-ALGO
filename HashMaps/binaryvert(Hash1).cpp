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
	if (root == NULL)
		return;
	
	m[hd].push_back(root->key);
	
	getVerticalOrder(root->left, hd-1, m);
	getVerticalOrder(root-right, hd+1, m);
}

void printVerticalOrder(node* root)
{
	map< int, vector<int> > m;
	int hd = 0;
	getVerticalOrder(root, hd,m);

	map< int,vector<int> > :: iterator it;
	for(it=m.begin(); it!=m.end(); it++)
	{
		for(int i=0; i<it->second.size();i++)
			cout << it->second[i] << " ";
		cout << endl;
	}
}

int main()
{
	printVerticalOrder(root);
	return 0;
}
