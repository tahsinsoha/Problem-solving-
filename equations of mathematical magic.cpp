#include<bits/stdc++.h>
using namespace std;
int main(){

int t,n;
cin>>t;
while(t--){
cin>>n;
int ans = __builtin_popcount(n);
int res= pow(2,ans);
cout<<res<<endl;
}
return 0;
}
