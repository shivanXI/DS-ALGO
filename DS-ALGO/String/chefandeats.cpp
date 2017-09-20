/*#include <bits/stdc++.h>
using namespace std;

int main()
{
	/*int T,A,B;
	cin>>T;
	while(T--)
	{
		int curr_Limak = 1;
		int curr_Bob = 2;
		cin>>A>>B;
		while(curr_Limak <= A && curr_Bob <= B){
			curr_Limak += curr_Bob+1;
			int temp = curr_Bob+1;
			if(curr_Limak <= A){
				curr_Bob += temp+1;
				if(curr_Bob <= B)
				{
					continue;
				}else{
					cout<<"Limak"<<endl;
					break;
				}
			}else{
				cout<<"Bob"<<endl;
				break;
			}
		}
	}*/

#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int T;
	scanf("%d", &T);
	int L, B;
	while(T--)
	{
		scanf("%d%d", &L, &B);
		int count = 0;
		int L_C = 0;
		int B_C = 0;
		bool limak = false;
		bool bob = false;
		int i = 0;
		while(true)
		{
			count++;
			if(i%2 == 0)
			{
				L_C += count;
				if(L_C > L)
				{
					limak = true;
					break;
				}
			}
			else if(i%2 != 0)
			{
				B_C += count;
				if(B_C > B)
				{
					bob = true;
					break;
				}
			}
			i++;
		}
		if(limak)
			cout<<"Bob"<<endl;
		else if(bob)
			cout<<"Limak"<<endl;
	}
	return 0;
}



	