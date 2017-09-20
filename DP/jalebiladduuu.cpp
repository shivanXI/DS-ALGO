#include <bits/stdc++.h>
using namespace std;

int main()
{
		int T;
		string s,t;
		cin>>T;
		while(T--)
		{
			cin>>s;
			cin>>t;
			int temp;
			int j=0;
			char s_arr[s.length()];
			char t_arr[t.length()];
			s.copy(s_arr,0,s.length());
			t.copy(t_arr,0,t.length());
			cout<<s_arr<<endl;
			cout<<t_arr<<endl;
			while(j < s.length())
			{
				if(s_arr[j] == t_arr[j])
				{
					j++;
					continue;
				}else if((s_arr[j]!= '\0') && (t_arr[j] == '\0')){
					temp = j;
					s_arr[j] = '\0';
					cout<<"YES"<<endl;
					break;
				}else{
					cout<<"NO"<<endl;
					break;
				}
			}

		}

	return 0;
}