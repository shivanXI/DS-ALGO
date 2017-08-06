#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	string initial_check = "abcdefghijklmnopqrstuvwxyz1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	unordered_map<char, int> mp;
	for (int i = 0 ; i < initial_check.size(); i++)
	{
		mp[initial_check[i]] = i;
	}	
	cin >> t;
	getline(cin, str)
	while(t--){
		int index = 0, n = 1, hash = 0;
		getline(cin, str);
		for(char ch : str){
			if( ch == " "){
				index = 0;
				n += 1;
			}else{
				hash += index + mp[ch];
				index++ ;
			}
		} cout << hash*n << endl;
	}
	return 0;
}