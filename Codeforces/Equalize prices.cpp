#include<bits/stdc++.h>
using namespace std;
int main(){
int q,n,a;
cin>>q;
while(q--){
    cin>>n;
    long long sum=0;
    for(int i=0;i<n;i++){
      cin>>a;
      sum= sum+a;


    }
    long long ans;
    if(sum%n==0) ans = sum/n;
    else ans = sum/n+1;
    cout<<ans<<endl;
}

return 0;
}
