#include <bits/stdc++.h>
using namespace std;

int maxSumSubseqNo3Consec(int arr[], int n)
{
	int sum[n];
	
	//DP
	//Base case for first three elements
	sum[0] = arr[0];
	sum[1] = arr[0] + arr[1];
	sum[2] = max(sum[1], arr[1] + arr[2]);


	//for rest of the elements
	for(int i=3;i<n;i++)
		sum[i] = max(max(sum[i-1], sum[i-2] + arr[i]), arr[i]+arr[i-1]+sum[i-3]);

	return sum[n-1];
}