#include <bits/stdc++.h>
using namespace std;





int maxWeight(int wt[], int val[], int k, int n)
{
	map<pair<int,int>, int> mp;
	return maxWeightTopDown(wt, val, k, mp, n-1, 0);
}




int main()
{

	int l;
	cin >> l;
	int wt[l], val[l];
	int k;
	cin >> k
	cout << maxWeight(wt, val, k, l);
	return 0;
}