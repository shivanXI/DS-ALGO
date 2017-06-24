//DP

#include <stdio.h>
#include <limits.h>

//Naive Approach
int minJumps(int arr[], int l, int h)
{
	if(h == l)
		return 0;

	if (arr[l] == 0)
		return INT_MAX;

	int min  = INT_MAX;
	for(int i = l+1; i <=h && i <= l + arr[l]; i++)
	{
		int jumps = minJumps(arr, i ,h);
		if(jumps != INT_MAX && jumps+1 < min)
			min = jumps + 1;
	}

	return min;
}


// As it is an optimal substructure problem and also overlapping subproblem

// DP approach no. 1
// Moving from left to right jumps[i] indidcate minimum no. of jumps needed to reach arr[i] from arr[0]
// so we will return jumps[n-1] which denotes min no. of step to reach end of the array arr[n-1] from arr[0]
int min(int x, int y){
	return (x<y) ? x: y;
}

int minJumps(int arr[], int n)
{
	int *jumps = new int[n];
	int i,j;

	if(n == 0 || arr[0] == 0)
		return INT_MAX;
	jumps[0] = 0;

	for (i = 1; i<n; i++)
	{
		jumps[i] = INT_MAX;
		for( j = 0; j < i; j++)
		{
			if(i <= j + arr[i] && jumps[j] != INT_MAX)
			{
				jumps[i]  = min(jumps[i], jumps[j] + 1);
				break;
			}
		}
	}
	return jumps[n-1];
}

// DP approach no. 2
// Moving from right to left jumps[i] indidcate minimum no. of jumps needed to reach arr[n-1] from arr[i]
// so we will return jumps[n-1] which denotes min no. of step to reach end of the array arr[0] from arr[n-1]

int minJumps(int arr[], int n)
{
	int *jumps = new int[n];
	int min;

	jump[n-1] = 0;
	int i,j;

	for(i = n-2; i >= 0; i--)
	{
		if (arr[i] == 0)
			jumps[i] = INT_MAX;
		else if (arr[i] >= n-i-1)
			jumps[i] = 1;
		else
		{
			min = INT_MAX;
			for (int j  = i+1; j < n && j <= arr[i]+i; j++)
			{
				if(min > jumps[j])
					min = jumps[j];
			}

			if (min != INT_MAX)
				jumps[i] = min+1;
			else
				jumps[i] = min;
		}
	}
	return jumps[0];
}