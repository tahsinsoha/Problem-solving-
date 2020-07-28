#include<bits/stdc++.h>
using namespace std;
int main(){
int n,t,i,time;
vector<int>arr;
int sum=0,val=0,aside=0,ans=0;
cin>>n>>t;

for(i=0;i<n;i++){
    cin>>time;
    arr.push_back(time);
sum=sum+arr[i];
val++;
if(sum>t){
    sum=sum-arr[aside];
aside++;
val--;
}
ans=max(ans,val);
}
cout<<ans<<endl;


return 0;
}
