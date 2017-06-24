#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node *next;
};

void push(struct node** head_ref, int new_data)
{
	struct node* new_node = (struct node*) malloc(sizeof(struct node));
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}


void mergeLists(struct node *a, struct node * &b)
{
	while(a && b)
	{
		if(a->data > b->data)
		{
			swap(a->data, b->data);

			struct node *temp = b;

			if(b->next && b->data > b->next->data)
			{
				b = b->next;
				struct node *ptr= b, *prev = NULL;

				while(ptr && ptr->data < temp->data)
				{
					prev = ptr;
					ptr = ptr->next;
				}

				prev->next = temp;
				temp->next = ptr;
			}
		}

		a = a->next;
	}
}

void printList(struct node *head)
{
	while(head)
	{
		cout << head->data << "->" ;
		head = head->next;
	}
	cout << "NULL" << endl;
}

int main()
{
	struct node *a = NULL;
	push(&a , 10);
	push(&a, 8);
    push(&a, 7);
    push(&a, 4);
    push(&a, 2);
 
    struct node *b = NULL;
    push(&b, 12);
    push(&b, 3);
    push(&b, 1);
 
    mergeLists(a, b);
 
    cout << "First List: ";
    printList(a);
 
    cout << "Second List: ";
    printList(b);
 
    return 0;
} // O(mn)