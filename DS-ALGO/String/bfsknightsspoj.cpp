#include <bits/stdc++.h>
using namespace std;

struct cow
{
	int x;
	int y;
	int dist;
};
queue<cow> q;

cow p1,p2,p3;

int x[10]={0,-1,-1,-2,-2,2,2,1,1};
int y[10]={0,-2,2,-1,1,-1,1,-2,2};

bool mark[9][9];

void makefalse()
{
	for(int i=1;i<=8;i++)
		for(int j=1;j<=8;j++)
			mark[i][j]=false;
}

int main()
{
	int kk,b,t,cc,from,to,index,n,x1,y1,x2,y2,m,i,j,k;
	char c;
	cin>>t;
	for(kk=1;kk<=t;kk++)
	{
		while(!q.empty())
			q.pop();
		
		cin>>c>>y1;
		x1=c-'a'+1;
		cin>>c>>y2;
		x2=c-'a'+1;
		p1.x=x1;
		p1.y=y1;
		p1.dist=0;
		makefalse();
		q.push(p1);
		
		while(!q.empty())
		{
			i=q.front().x;
			j=q.front().y;
			if(i==x2 && j==y2)
			{
				cout<<q.front().dist<<endl;
				break;
			}
			b=q.front().dist;
			for(k=1;k<=8;k++)
				if(i+x[k]>0 && i+x[k]<=8 && j+y[k]>0 && j+y[k]<=8 && mark[i+x[k]][j+y[k]]==false)
				{
					mark[i+x[k]][j+y[k]]=true;
					p1.x=i+x[k];
					p1.y=j+y[k];
					p1.dist=b+1;
					q.push(p1);
				}
			q.pop();
		}
	}
	return 0;
}