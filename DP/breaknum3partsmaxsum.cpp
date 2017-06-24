#include <bits/stdc++.h>
#define MAX 1000000
using namespace std;

//Recursive
int breakSum(int n)
{
	if(n == 0 || n == 1)
		return n;

	return max((breakSum(n/2) + breakSum(n/3) + breakSum(n/4)), n);
}

//DP 
int breakSum(int n)
{
	int dp[n+1];
	dp[0] = 0, dp[1] = 1;
	for(int i = 2; i <= n; i++)
		dp[i]  = max(dp[i/2] + dp[i/3] + dp[i/4], i);

	return dp[n];
}