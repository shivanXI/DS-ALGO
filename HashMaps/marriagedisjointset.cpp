#include <bits/stdc++.h>
using namespace std;

int root(int array_l[], int i){
	while(array_l[i] != i){
		array_l[i] = array_l[array_l[i]];
		i = array_l[i];
	}
	return i;
}

