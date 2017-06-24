#include<iostream>
#include<stdlib.h>

using namespace std;

class Stack
{
private:
	static const int max =100;
	int arr[max];
	int top;
public:
	Stack() { top = -1; }
	bool isEmpty();
	bool isFull();
	int pop();
	void push(int x);
};

bool Stack::isEmpty()
{
	if(top == -1)
		return true;
	return false;
}


bool Stack::isFull()
{
	if(top == max - 1)
		return true;
	return false;
}

int Stack::pop()
{
	if(isEmpty())
	{
		cout<<"Underflow Condition";
		abort();
	}
	
	int x = arr[top];
	top--;
	return x;
}