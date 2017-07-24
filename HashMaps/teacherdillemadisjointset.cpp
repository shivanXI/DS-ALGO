#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll array_l[100001];
ll size_l[100001];

void init(ll int n)
{
	for(ll i= 1; i<=n;i++){
		array_l[i] = i;
		size_l[i] = 1;
	}
}

ll int root(ll int i){
	while(array_l[i] != i){
		array_l[i] = array_l[array_l[i]];
		i = array_l[i];
	}
	return i;
}

void make_union(int array_l[], int size_l[], int size_Male[], int size_Female[], int a, int b){
	ll int ra = root(x);
	ll int rb = root(y);
		if(size[ra] > size[rb]){
			array_l[rb] = array_l[ra];
			size_l[ra] += size_l[rb];
			size_l[rb] = 1;
		
		}else{
			array_l[ra] = array_l[rb];
			size_l[rb] += size_l[ra];
			size_l[ra] = 1;
		}
}

int main()
{
	ll int n,m;

	//long result = 0;
	cin>>n>>m;
	init(n);
	ll int relation = m;
	while(relation--)
	{
		ll int x,y;
		cin>>x>>y;
		if(root(x) != root(y))
		{
			make_union(x,y);
		}
	}

	ll ways = 1;
	for (ll int i = 1;i<=n;i++)
	{
		ways = (ways%1000000007*(size_l[i]%1000000007))%1000000007;
	}
	cout<<ways<<endl;
	return 0;
}