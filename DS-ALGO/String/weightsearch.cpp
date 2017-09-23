#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N,X;
	cin>>N>>X;
	int P[N];
	vector<int> temp1,temp2;
	int scale_1,scale_2;
	for(int i=1;i<=N;i++)
	{
		P[i] = int(pow(3,i-1));
		//cout<<P[i];
	}
	scale_1 = X;
	scale_2 = 0;
	for(int i=1;i<=N;i++)
	{
		if(P[i]<X){
			scale_1 += P[i];
			//cout<<scale_1<<endl;
			temp1.push_back(i);
			//printf("%d", temp1[0]);
		}else{
			temp2[0] = -1;
			
		}
	}
	for(int j=1;j<=N;j++)
	{
		if(scale_1 == P[j]){
			scale_2 = P[j];
			//cout<<scale_2<<endl;
			temp2.push_back(j);
			//cout<<temp2[0];
			//break;
		}/*else if(scale_1 > 0){
			scale_1 -= P[j];
			scale_2 += P[j];
			temp2.push_back(j);
			break;
		}*/else{
			temp2[0] = -1;
		
		}
	}

	for(int k=0;k!=temp1.size();k++)
	{
		cout<<temp1[k]<< " ";
	}
	cout<<endl;
	for(int k=0;k!=temp2.size();k++)
	{
		cout<<temp2[k];
	}


	return 0;
}