#include <bits/stdc++.h>

using namespace std;

#define p push_back
#define m make_pair
#define F first
#define S second

const int N = 2020;
int n, L;

int main() {
	int t;
	cin>>t;
	while(t--){
		scanf("%d%d", &n, &L);
		pair<int, int> a[N];
		int flag = 0;

		for(int i = 0; i < n; i++){
			scanf("%d%d", &a[i].F, &a[i].S);
		}
		sort(a, a+n);

		for (int i = 0; i<n;i++){
			int maxSec = a[i].F + L;
			int curSec = a[i].S;
			for (int j = 0;j < n;j++){
				if(a[j].F <= curSec && a[j].F > a[i].F && a[j].S <= maxSec){
					curSec = max(curSec, a[j].S);
				}
			}
			if(curSec == maxSec){
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			puts("Yes");
		else
			puts("No");
	}
	return 0;
}