#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i;
cin>>n;
int arr[n+5];
for(int i=0;i<n;i++) cin>>arr[i];
sort(arr,arr+n);
int ans=0;
for(int i=0;i<n;i=i+2){
ans= ans+ arr[i+1]-arr[i];
}
cout<<ans<<endl;

return 0;
}
