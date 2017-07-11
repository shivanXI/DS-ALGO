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

	if ()
}