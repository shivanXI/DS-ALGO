#include <bits/stdc++.h>
using namespace std;

#define p 101
#define mod 1000000007

struct query
{
	int L, R;
};

bool isPalindrome(string str,int L, int R)
{
	while(R > L)
		if (str[L++] != str[R--])
			return (false);
	return (true);
}

