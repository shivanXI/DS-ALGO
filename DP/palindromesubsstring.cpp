#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int l = len(s);
	int n = l;
	int dp[l][l];

	memset(dp, 0, sizeof(dp));

	for(int i = 0;i<l;i++)
		dp[i][i] = 1;
	int total = n;

	for(int len=2;len<=l;len++)
	{
		for(int start=0; start+len<=l; start++)
		{
			int end = start + len - 1;
			if(len==2)
			{
				if(s[start]==s[end])
					dp[start][end] = 1;
			}else{
				if(dp[start+1][end-1]==1 && s[start]==s[end])
					dp[start][end]=1;
			}
			if(dp[start][end])
			{
				total++;
			}
		}
	}

	cout<<total<<endl;

	return 0;
}