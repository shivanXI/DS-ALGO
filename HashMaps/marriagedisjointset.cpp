#include <bits/stdc++.h>
using namespace std;

int root(int array_l[], int i){
	while(array_l[i] != i){
		array_l[i] = array_l[array_l[i]];
		i = array_l[i];
	}
	return i;
}

void make_union(int array_l[], int size_l[], int size_Male[], int size_Female[], int a, int b){
	int ra = root(array_l, a);
	int rb = root(array_l, b);
	if(ra != rb){
		if(size[ra] > size[rb]){
			array_l[rb] = array_l[ra];
			size_l[ra] += size_l[rb];
			size_Male[ra] += size_Male[rb];
			size_Female[ra] += size_Female[rb];
		
		}else{
			array_l[ra] = array_l[rb];
			size_l[rb] += size_l[ra];
			size_Male[rb] += size_Male[ra];
			size_Female[rb] += size_Female[ra];

		}

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

	} 
}