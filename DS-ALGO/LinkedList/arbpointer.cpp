#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node* next, *arbit;
};

Node* reverse(Node *head)
{
	Node *prev = NULL, *current = head, *next;
	while(current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	return prev;
}

Node* makeArbit(Node *head)
{
	head = reverse(head);
	Node *max = head;

	Node *temp = head->next;
	while(temp != NULL)
	{
		temp->arbit = max;

		if(max->data < temp->data)
			max = temp;

		temp = temp->next;
	}
	return reverse(head);
}

void printNextArbit(Node *node)
{
    printf("Node\tNext Pointer\tArbit Pointer\n");
    while (node!=NULL)
    {
        cout << node->data << "\t\t";
 
        if (node->next)
            cout << node->next->data << "\t\t";
        else cout << "NULL" << "\t\t";
 
        if (node->arbit)
            cout << node->arbit->data;
        else cout << "NULL";
 
        cout << endl;
        node = node->next;
    }
}

Node *newNode(int data)
{
    Node *new_node = new Node;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}