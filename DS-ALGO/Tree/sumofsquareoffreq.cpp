#include <bits/stdc++.h>
using namespace std;

const int MAX_CHAR = 26;

int minStringValue(string str, int k)
{
	int l = str.length();

	if (k >= l)
		return 0;

	int frequency[MAX_CHAR] = {0};
	for(int i=0; i<l; i++)
		frequency[str[i] - 'a']++;

	priority_queue<int> q;
	for(int i=0; i<MAX_CHAR; i++)
		q.push(frequency[i]);

	while(k--)
	{
		int temp = q.top();
		q.pop();
		temp = temp - 1;
		q.push(temp);
	}

	while(!q.empty())
	{
		int temp = q.top();
		result += temp*temp;
		q.pop();
	}

	return result;
} 