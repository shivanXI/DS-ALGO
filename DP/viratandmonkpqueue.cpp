#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	long long int sum[n];
	
	for(int i=0;i<n;i++){
		sum[i]=0;
	}
	
	for(int i=0;i<3;i++)
		for(int j=0;j<n;j++)
		{
			long long int x;
			cin>>x;
			sum[]
		}
	
	priority_queue<long long int> queue;
	
	for(int i=0;i<n;i++)
	{
		queue.push(sum[i]);
	}
	
	int q;
	cin>>q;
	
	while(q--)
	{
		int k;
		cin>>k;
		if(k>queue.size()){
			printf("-1\n");
		}else{
			long long int temp[k-1];
			for(int i=0;i<k-1;i++)
			{
				temp[i] = queue.top();
				queue.pop();
			}
			printf("%d\n",-queue.top());
			queue.pop();
			for(int i=k-2;i>=0;i--)
			{
				queue.push(temp[i]);
			}
		}
	}
	return 0;
}