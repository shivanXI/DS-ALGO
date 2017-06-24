#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int lim = 1e3 + 1;
const int maxn = 1e3;
const int maxk = 1e3;

const int ll mod = 1e9 + 7;

vector<LL> E(lim);
vector<int> parent(lim);


int find(int a)
{
	if(a != parent[a])
		parent[a] = find(parent[a]);
	return parent[a];
}

void union(int a, int b)
{
	a = find(a);
	b = find(b);
	if(a != b)
		parent[a] = b;
}

int main()
{
	int n;
	scanf("%d", &n);
	assert(1 <= n and n <= maxn);
	for(int i = 1; i <= n; i++)
		scanf("%lld", &E[i]);
	
	for(int i = 1; i<=n; i++)
		parent[i] = i;

	int k;
	scanf("%d", &k);
	assert(1 <= k and k <= maxk);
	for(int i = 1; i<=n; i++)
		parent[i] = find(i);

	map<int, multiset<int> > mp;
	for(int i = 1; i <= n; i++)
		mp[parent[i]].insert(E[i]);

	ll result = 1;

	for (auto j: mp)
	{
		ll cnt = 1;

		int low = *(j.second.begin());
		j.second.erase(j.second.begin());

		for(auto p: j.second)
		{
			if(p != low)
				break;
			cnt++;
		}

		result = (result * cnt) % mod;
	}

	printf("%lld\n", result);
	return 0;
}