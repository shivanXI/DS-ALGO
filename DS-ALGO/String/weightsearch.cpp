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





//////////////////////////////////////////////////////////////////////////
//CORRECT SOLUTION FOR ALL TEST CASES RUNNING
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int n;
    
    unsigned long long x;
    
    scanf("%d",&n);
    
    cin>>x;
    
    unsigned long long a[]={1,3,9,27,81,243,729,2187,6561,19683,59049,177147,531441,1594323,4782969,14348907,43046721,129140163,387420489,1162261467};
    
    for(int i=0;i<n;i++)
    {
            if(x+a[i]<a[i+1])
            printf("-1\n");
            
            else if(x+a[i]>a[i+1])
            x=x+a[i];
            
            else if(x+a[i]==a[i+1])
            {
                int count=1;
                while(i!=0)
                {
                           printf("%d ",count);
                           i--;
                           count++;
                }
                
                printf("%d\n",count);
                
                printf("%d\n",(count+1));
                
                break;
                
            }
            
    }
    
    system ("pause");
    
    return 0;
}