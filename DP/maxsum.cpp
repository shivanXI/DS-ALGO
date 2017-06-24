//DP
#include<bits/stdc++.h>
#define MAX 1000
using namespace std;

int maxSum(int grid[2][MAX], int n)
{
	int incl = max(grid[0][0], grid[1][0]);
	int excl = 0, excl_new;

	for (int i=1; i<n; i++)
	{
		excl_new = max(excl, incl);
		incl = excl + max(grid[0][i], grid[1][i]);
		excl = excl_new;
	}

	return max(excl, incl);
}

int main()
{
	int grid[2][MAX] = {{ 1,2,3,4,5},{6,7,8,9,10}};
	int n = 5;
	cout << maxSum(grid, n);
	return 0;
}