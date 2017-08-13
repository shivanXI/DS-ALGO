#include <bits/stdc++.h>
using namespace std;

//Tip No. 3: use loops with macros
#define rep(i,n) for(i=0; i<n; ++i)
#define REP(i,k,n) for(i=k; i<=n; ++i)
#define REPR(i,k,n) for(i=k; i>=n; --i)

//Tip No.2: Initializer List
template<typename T>
void printList(std::initializer_list<T>)
{
	for(const auto &value: text)
		std::cout << value << " ";
}

int main()
{
	//Tip No. 1: Range based for loop to iterate over arrays and vectors
	vector<int> vec = {0,1, 2, 3, 4};

	for(const auto &value : vec)
		cout<< value << ' ';
	cout << '\n';

	int array[] = {1, 2, 3, 4, 5};
	for(const auto &value : array)
		cout << value << " ";
	//range based for loop

	printList({"One", "Two", "Three"}) //Tip No. 2: Initializer List

	//Tip No.3: use loops with macros
	int i;
	int size = sizeof(array)/sizeof(array[0])
	rep(i, size)
		cout<<array[i]<<" ";
	cout<<'\n';
	
	REP(i, 1, size-1)
		cout<<array[i]<<" ";
	cout<<'\n';

	REPR(i, size-1, 0)
		cout<<array[i]<<" ";
	cout<<'\n';
	//using loops with macros

	

	return 0;
}