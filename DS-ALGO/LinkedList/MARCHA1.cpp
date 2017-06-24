#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<vector>


int a[21];
using namespace std;
 

int solution(int i, int m, int n)
{
	int flag,sum;

	flag = 0;
	for(int j=i;j<n;j++)
	{
		sum = m-a[j];
		if(sum==0)
			return 1;
		else if(sum>0)
		{
			flag = solution(j+1,sum,n);
			if(flag)
				return 1;
		}
	}

	return 0;
}

int main()
{   
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int val = 0;
		int n,m;
		scanf("%d%d", &n,&m);
		
		for(int i=0;i<n;i++)
		{
			scanf("%d",a+i);
		}
		
		sort(a,a+n);

		val = solution(0,m,n);
		if(val)
			printf("Yes \n");
		else
			printf("No \n");

	}

	return 0;

}
