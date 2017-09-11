#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector < long long int > boxes(n);
    for(int i=0;i<n;i++){
        cin>>boxes[i];
    }
    sort(boxes.begin(),boxes.end());
    long long int ans = 1;
    long long int prev = boxes[0]; //20
    long long int temp=0;
    long long int count = 1;
    long long int t_count = 0;
    for(int i=1;i<n;i++){
        temp+=boxes[i]; //30 40
        t_count+=1;
        if(temp>prev and t_count>count){
            prev = temp;
            temp = 0;
            count=t_count;
            t_count=0;
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}