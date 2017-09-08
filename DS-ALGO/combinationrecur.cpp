#include <bits/stdc++.h>
 
using namespace std;

void printPermutation(string str, string out)
{
	if(str.size() == 0)
	{
		cout << out << endl;
		return;
	}

	for(int i = 0; i< str.size(); i++)
	{
		printPermutation(str.substr(1), out+str[0]);
		rotate(str.begin(), str.begin()+1, str.end());
	}
}

void printCombination(int arr[], int n, int r)
{
	int data[r];
	combinationUtil(arr,n,r,0,data,0);
}

void combinationUtil(int arr[], int n, int r, int index, int data[], int i)
{
	if(index == r)
	{
		for(int j=0;j<r;j++)
			printf("%d ",data[j]);
		
		printf("\n");
		return;
	}

	if(i>=n)
		return;

	data[index] = arr[i];
	combinationUtil(arr, n, r, index+1, data, i+1);
	//to handle duplicate elements
	while(arr[i] == arr[i+1])
		i++;
	combinationUtil(arr, n, r, index, data, i+1);
}

int main()
{
	printCombination(arr,n,r);
	printPermutation(str,"");

	return 0;
}
