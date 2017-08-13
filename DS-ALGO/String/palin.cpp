#include <bits/stdc++.h>
using namespace std;


int main()
{
	int t;

	cin >> t;

	while(t--)
	{
		string in;
		cin >> in;

		string temp = in;
		reverse(temp.begin(), temp.end());

		if(temp == in)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}


	return 0;
}