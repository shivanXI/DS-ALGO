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

//Tip No.7: To know whether number x is a power of 2 or not
bool isPowerOfTwo (int x)
{
	return x && (!(X&(x-1)));
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

	//Tip No.4: swapping of 2 numbers using XOR
	a ^= b;
	b ^= a;
	a ^= b;

	//Tip No.5: Most significant digit
	double k = log10(N);
	k = k - floor(k);
	int x = pow(10, k); // x is the most significant digit of N

	//Tip No.6: No. of digit in the number given N
	int numb = floor(log10(N)) + 1;

	//Tip No.7: Algorithms built-in STL
	int x,y;
	_gcd(x,y);
	sort(vec.begin(), vec.end());
	reverse(vec.begin(), vec.end());
	cout << *max_element(vec.begin(), vec.end());
	cout << *min_element(vec.begin(), vec.end());
	accumulate(vec.begin(), vec.end(), 0);
	cout << count(vec.begin(), vec.end(), 3);
	find(vec.begin(), vec.end(), 5) != vec.end()? cout << "found":cout << "\n not found";
	binary_search(vec.begin(), vec.end(), x);
	cout << distance(vec.begin(), max_element(vac.begin(), vec.end()));
	





	return 0;
}