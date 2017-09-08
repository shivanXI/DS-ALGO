#include <bits/stdc++.h>
using namespace std;

int sum,cont = 0;


int myPow(int x, int p) {
  if (p == 0) return 1;
  if (p == 1) return x;
  return x * myPow(x, p-1);
}

int power_nth(int index, int X, int N)
{
	if(sum == X)
		cont++;
		return cont;
		
	if(X == 0)
		return cont;
	
	for(int j = index;j<=X;j++)
	{
		sum += myPow(j,N);
		X = X - sum;
		if(sum < X)
			power_nth(j++, X, N);
		else if(sum > X){
			X = X + sum;
            sum -= myPow(j,N);
			power_nth(j++, X, N);
		}else return cont++;
	}
}

int main()
{
	int X, N;
	cin>>X;
	cin>>N;
	int result = power_nth(1, X, N);
	cout<<result;
	return 0;
}