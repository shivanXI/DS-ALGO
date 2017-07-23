#include <bits/stdc++.h>
using namespace std;

int root(int array_l[], int i){
	while(array_l[i] != i){
		array_l[i] = array_l[array_l[i]];
		i = array_l[i];
	}
	return i;
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
}