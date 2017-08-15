#include <bits/stdc++.h>
using namespace std;


int maxWeightTopDown(int wt[], int val[], int k, map<pai<int, int>, int>& mp, int last, int diff)
{
	if(last == -1)
	{
		if(diff == 0)
			return 0;
		else
			return INT_MIN;
	}

	pair<int, int> tmp = make_pair(last, diff);
	if(mp.find(tmp) != mp.end())
		return mp[tmp];

	mp[tmp] = max(maxWeightTopDown(wt, val, k, mp, last-1, diff), wt[last]+maxWeightTopDown(wt, val, k, mp, last-1, diff + wt[last] - val[last]*k));
	
	return mp[tmp];	
}


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