#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

void insert(struct node **head_ref, int new_data)
{
	struct node *new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

struct node* XOR (struct node *a, struct node *b)
{
	return (struct node*)((uintptr_t) (a)^(uintptr_t)(b));
}


void convert(struct node *head)
{
	struct node *next_node;
	struct node *prev = NULL;

	while(head != NULL)
	{
		next_node = head->next;
		head->next = XOR(next_node, prev);
		prev = head;
		head = next_node;
	}
}

void pairSum(struct node *head, int x)
{
	struct node *first = head;
	struct node *next_node = NULL, *prev = NULL;
	struct node *second = head;

	while(second->next != prev)
	{
		struct node *temp = second;
		second  = XOR(second->next, prev);
		prev = temp;
	}

	next_node = NULL;
	prev = NULL;

	bool flag = false;
	while(first != NULL && second != NULL && first != second && first != next_node)
	{
		if((first->data + second->data)==x)
		{
			cout << "("<< first->data <<","<< second->data <<")" <<endl;
			flag = true;
			
			struct node *temp = first;
			
			first = XOR(first->next,prev);
			prev = temp;

			temp = second;
			second = XOR(second->next,next_node);
			next_node = temp;
		}
		else
		{
			if((first->data + second->data) < x)
			{	
				struct node *temp = first;
			    first = XOR(first->next, prev);
			    prev = temp;
		    }
		    else
		    {
		    	struct node *temp = second;
			    second = XOR(second->next, next_node);
			    next_node = temp;
		    }
	    }	

    }

    if (flag == false)
    	cout << "No pair found" << endl;

 }   

 int main()
 {
 	struct node* head = NULL;
 	int x = 17;

 	insert(&head, 11);
 	insert(&head, 10);
 	insert(&head, 9);
 	insert(&head, 8);
 	insert(&head, 7);
 	insert(&head, 6);
 	insert(&head, 3);

 	convert(head);
 	pairSum(head,x);
 	return 0;

 }