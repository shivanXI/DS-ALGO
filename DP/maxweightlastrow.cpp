#include <bits/stdc++.h>
using namespace std;
const int MAX = 1000;

int maxCost(int mat[][MAX], int N)
{
	int dp[N][N];
	memset(dp, 0 , sizeof(dp));

	dp[0][0] = mat[0][0];
	for(int i = 1; i<N; i++)
		dp[i][0] = mat[i][0] + dp[i-1][0];

	for(int i=1; i<N; i++)
		for(int j=1; j<i+1&&j<N; j++)
			dp[i][j] = mat[i][j] + max(dp[i-1][j],dp[i-1][j-1]);


	int result = 0;
	for(int i=0;i<N;i++)
		if(result < dp[N-1][i])
			result = dp[N-1][i];

	return result;
}