#include <bits/stdc++.h>
using namespace std;

int max_Loot(int *hvalue, int n)
{
	if(n == 0)
		return 0;
	if(n == 1)
		return hvalue[0];
	if(n == 2)
		return max(hvalue[0], hvalue[1]);

	int dp_house[n];
	dp[0] = hvalue[0];
	dp[1] = max(hvalue[0], hvalue[1]);

	for(int i=2; i<n; i++)
		dp[i] = max(hvalue[i]+dp[i-2], dp[i-1]);

	return dp[n-1];
}

int main()
{
	int n;
	cin>>n;
	int hvalue[n];
	for(int i = 0; i<n;i++)
	{
		cin>>hvalue[i];
	}
	cout<<max_Loot(hvalue, n);
	return 0;
}
