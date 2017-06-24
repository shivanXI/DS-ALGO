#include<stdio.h>
#include<algorithm>
#include<iostream>

using namespace std;

string s;
bool val[255][255];

int t;

int main()
{
	cin >> t;
	while(t--)
	{
		cin >> s;
		int count = 0;
		for(char a='A'; a<='Z'; a++)
			for(char b='B'; b<='Z'; b++)
				val[a][b] = false;

		for(int i=0;i<s.length()-1;i++)
			if(!val[s[i]][s[i+1]])
			{
				val[s[i]][s[i+1]] = true;
				++count;
			}
			cout << count << endl;
	}
}