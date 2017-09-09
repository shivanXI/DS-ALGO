#include <bits/stdc++.h>
using namespace std;

//int sum,cont = 0;


int myPow(int x, int p) {
  if (p == 0) return 1;
  if (p == 1) return x;
  return x * myPow(x, p-1);
}

int power_nth(int X, int N, int index = 0,int sum = 0)
{
	int i = index + 1;
	int result = 0;
	int k = myPow(i,N);
	while(k + sum < X){
		result += power_nth(X,N,i,k+sum);
		i++;
		k = myPow(i,N);
	}
	if(k+sum == X) result++;
	return result;
}

int main()
{
	int X, N;
	cin>>X;
	cin>>N;
	int result = power_nth(X, N);
	cout<<result;
	return 0;
}