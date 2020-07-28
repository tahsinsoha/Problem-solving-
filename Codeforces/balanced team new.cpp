#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n+5];
for(int i=0;i<n;i++) cin>>arr[i];
arr[n]= 2e9;
int ans=0;
int temp=0;
sort(arr,arr+n);
for(int i=0;i<n;i++){
    while(arr[temp]<=arr[i]+5) temp++;
    ans=max(ans,temp-i);

}
cout<<ans<<endl;
return 0;
}
