#include <bits/stdc++.h>
using namespace std;
vector<string> v;
vector<string> str;

void check_pass(string p)
{
	if(p.length() == 0)
	{
		for(auto it = str.begin();it!=str.end();it++)
			cout<<*it<<" ";
		return;
	}
	
	int m=0;i;
	for(i=1;i<=p.length();p++)
	{
		if(find(v.begin(),v.end(),p.substr(0,i))!=v.end())
		{
			m = 1;
			str.push_back(p.substr(0,i));
			break;
		}
	}

	if(m==0)
	{
		cout<<"WRONG PASSWORD";
		return;
	}else{
		p.erase(0,i);
		check_pass(p);
		return;
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i = 0;i<n;i++)
		{
			string b;
			getline(cin,b);
			v.push_back(b);
		}
		string g;
		getline(cin,g);
		check_pass(g);
		cout<<endl;
	}
	return 0;
}