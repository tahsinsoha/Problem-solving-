#include<bits/stdc++.h>
using namespace std;
long long  arr[100010];
long long cumsum[100010];
int main(){
long long n;
cin>>n;
for(int i=1;i<=n;i++){
    cin>>arr[i];
}
cumsum[0] = 0;
for(int i=1;i<=n;i++){
    cumsum[i] = cumsum[i-1]+arr[i];
}
int q,a,b;
cin>>q;
while(q--){
    cin>>a>>b;
    long long ans;
    ans = (cumsum[b]-cumsum[a-1]);
   // cout<<cumsum[b]<<" "<<cumsum[a-1]<<endl;
   // cout<<ans<<endl;
    ans = ans/10;
    cout<<ans<<endl;
}
return 0;
}
