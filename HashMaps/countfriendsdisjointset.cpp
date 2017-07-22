#include <bits/stdc++.h>
using namespace std;
int array[100005], size[100005];

int root(int node)
{
	while(array[node] != node)
	{
		array[node] = array[array[node]];
		node = array[node];
	}

	return node;
}

bool find_set_name(int a, int b)
{
	if(root(a) == root(b))
		return true;
	else
		return false;
}

void union_mutual_friends(int a, int b)
{
	int root_of_a = root(a);
	int root_of_b = root(b);

	if(size[root_of_a] < size[root_of_b])
	{
		size[root_of_b] += size[root_of_a];
		array[root_of_a] = array[root_of_b];
	}
	else
	{
		size[root_of_a] += size[root_of_b];
		array[root_of_b] = array[root_of_a];
	}
}

int main()
{
	int n,m,a,b;
	cin>>n>>m;
	for(int i=0; i<100005; i++){
		array[i] = i;
		size[i] = 1;
	}

	
}