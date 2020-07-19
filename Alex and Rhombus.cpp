#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int sum = (n-1)*(n);
int ans = sum/2;
ans= 1+4*ans;
if(n==1) cout<<1<<endl;
else cout<<ans<<endl;

return 0;
}
