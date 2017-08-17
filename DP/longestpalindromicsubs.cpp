#include <bits/stdc++.h>
using namespace std;

int max (int x, int y) {
	return (x>y) ? x : y; 
}

int lps(char *str)
{
	int n = strlen(str);
	int i,j, co;
	int L[n][n];

	for(i=0;i<n;i++)
	{
		L[i][i] = 1;
	}
	for(co=2; co<=n; co++)
	{
		for(i=0; i<n-co+1; i++)
		{
			j = i+co-1;
			if(str[i] == str[j] && co == 2)
				L[i][j] = 2;
			else if (str[i] == str[j])
				L[i][j] = L[i+1][j-1] + 2;
			else
				L[i][j] = max(L[i][j-1], L[i+1][j]);
		}
	}
	return L[0][n-1];
}

int main()
{
	return 0;
}