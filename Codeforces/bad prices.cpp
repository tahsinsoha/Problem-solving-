#include<bits/stdc++.h>
using namespace std;
int main(){
int t, n;
cin>>t;
for(int i=1;i<=t;i++){
    cin>>n;
    int arr[n+5];
    for(int j=0;j<n;j++) cin>>arr[j];
    int m = 2e+9;
    int ans=0;
    for(int k = n-1;k>=0;k--){
        if(arr[k]>m) ans++;
         m = min(m,arr[k]);

    }
    cout<<ans<<endl;
}

return 0;
}
