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

unsigned long long int modPow(unsigned long long int base, unsigned long long int exponent)
{
	if(exponent == 0)
		return 1;
	if(exponent == 1)
		return base;

	unsigned long long int temp = modPow(base, exponent/2);

	if (exponent %2 == 0)
		return (temp%mod * temp%mod) % mod;
	else
		return ((( temp%mod * temp%mod) %mod) * base%mod) % mod;
}