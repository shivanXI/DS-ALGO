#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	char A[10001];
	char B[10001];
	int T;
	cin>>T;
	while(T--)
	{
		cin>>A;
		cin>>B;
		flag = 0;
		for(int i=0;i<strlen(A);i++)
		{
			for(int j=0;j<strlen(B);j++)
			{
				if(A[i]==B[j])
				{
					flag = 1;
					break;
				}
			}
		}

		if(flag)
		{
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}


	return 0;
}