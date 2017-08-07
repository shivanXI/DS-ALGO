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

		out = out^sum_digit_val;
		result = max(result, out);
		if(hash.find(out) != hash.end()){
				collisions++;
				hash[out]++;
		}else{
				hash[out] = 1;
		}

	}

	if(collisions){
		int count = 0;
		auto it = hash.begin();
		count = it->second;
		result = it->first;
		it++;
		for(;it!=hash.end();it++){
			if(it->second>count){
				result = it->first;
				count = it->second;
			}else if(it->second==count){
					result = min(result,it->first);
				
			}
		}
	}

	cout << result << " "<< collisions <<endl;
	return 0;
}