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
	int x,y,a,b,q;

	long result = 0;
	cin>>x>>y;

	int array_l[x+y], size_l[x+y], size_Male[x+y], size_Female[x+y];
	for(int i=0;i<x+y;i++){
		array_l[i] = i;
		size_l[i] = 1;
		if(i<x){
			size_Male[i] = 1;
			size_Female[i] = 0;
		}else{
			size_Male[i] = 0;
			size_Female[i] = 1;
		}
	}

	cin>>q;
	for(int i=0; i<q; i++){
		cin>>a>>b;
		make_union(array_l, size_l, size_Male, size_Female, a-1, b-1);
	}

	cin>>q;
	for(int i=0; i<q; i++){
		cin>>a>>b;
		make_union(array_l, size_l, size_Male, size_Female, x+a-1, x+b-1);
	}

	cin>>q;
	for(int i=0; i<q; i++){
		cin>>a>>b;
		make_union(array_l, size_l, size_Male, size_Female, a-1, x+b-1);
	}

	for(int i=0; i<x+y; i++){
		if(array_l[i] == i){
			result += size_Male[i]*(long)(y-size_Female[i]);
		}
	}
	cout<<result;
	return 0;
}