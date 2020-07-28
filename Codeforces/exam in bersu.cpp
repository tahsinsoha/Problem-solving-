#include<bits/stdc++.h>
using namespace std;
int ans[110];
int main(){
int n,m;
cin>>n>>m;
int arr[n+5],baad[n+5];
for(int i= 0;i<n;i++){
    cin>>arr[i];
    if(i==0) continue;
    sort(arr,arr+i);
    int cur = arr[i];
    //ans[i]=1;
    for(int j=0;j<i;j++){
          if(arr[j]+cur<=m) {
            cur= cur+arr[j];
          //  ans[i]++;
          }
          else ans[i]++;
    }
 }
for(int i=0;i<n;i++) cout<<ans[i]<<" ";
return 0;
}
