#include<bits/stdc++.h>
using namespace std;

int maximumSum(int stack1[], int stack2[], int stack3[], int n1, int n2,int n3)
{
	int sum1 = 0,sum2 = 0, sum3 = 0;

	for(int i=0;i<n1;i++)
		sum1 += stack1[i];

	for(int j=0;j<n2;j++)
		sum2 += stack2[j];

	for(int k=0;k<n3;k++)
		sum3 += stack3[k];

	int top1 = 0; top2 = 0; top3 = 0;
	int ans = 0;

	while(1)
	{
		if(top1 == n1 || top2 == n2 || top3 == n3)
			return 0;

		if(sum1 == sum2 && sum2 == sum3)
			return sum1;

		if(sum1 >= sum2 && sum1 >= sum3)
			sum1 -= stack1[top1++];
		elseif(sum2 >= sum3 && sum2 >= sum1)
			sum2 -= stack2[top2++];
		elseif(sum3 >= sum2 && sum3 >= sum1)
			sum3 -= stack3[top3++];
	}
}

int main()
{
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	int stack1 = new int[n1];
	int stack2 = new int[n2];
	int stack3 = new int[n3];

	cout<<maximumSum(stack1, stack2, stack3, n1, n2, n3)<<endl;
	return 0;
}