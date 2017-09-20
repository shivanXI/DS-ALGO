#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define vi vector<int> 
#define vli vector<long long int>
#define rgod(i,a,b) for(int i=a;i>=b;i--)
#define god(i,a,b) for(int i=a;i<b;i++)

#define lli long long int
#define fi first
#define se second
#define pb push_back
#define pa pair<int,int>
 
lli modi(int n){  lli i=mod/n + 1; while(i<=1e9)if(((n*i)-1)%mod==0)return i;return 0;}
double tick(){static clock_t oldt,newt=clock();double diff=1.0*(newt-oldt)/CLOCKS_PER_SEC;oldt=newt;return diff;}
lli pom(lli n){ if(n==0)return 1;else{if(n%2)return (2*pom(n-1)); else{lli t=pom(n/2); return (t*t)%mod;}}}
 
int digcheck(int n)
{
    int d=n%10;
    while(n>0)
    {
      if(d==n%10)
        n/=10;
      else return -1;
    }
    return d;
}
 
int main()
{       
    
    int t=1;
    cin>>t;
    while(t--)
    {
     int h,m,count=0;
     cin>>h>>m;
     god(i,0,h)
      god(j,0,m)
      {
        if(digcheck(i)!=-1 && digcheck(j)!=-1 && digcheck(i)==digcheck(j))
         count++;
      }
      cout<<count<<endl;
    }
 //  cout<<"Execution time : "<<tick()<<"\n";
    return 0;
}     
 