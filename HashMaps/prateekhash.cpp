#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	map <int, int> hash;
	int collisions = 0;
	int result = 0;
	for(int i = 0; i<n; i++)
	{
		int val;
		cin >> val;
		int out = val;
		int sum_digit_val = 0;
		while(val){
			sum_digit_val += val%10;
			val/=10;
		}

		out = out^sum;
		result = max()

	}






	return 0;
}