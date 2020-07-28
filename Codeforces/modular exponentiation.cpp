#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n,m,poww,ans;
cin>>n>>m;
if(n<27){
    poww=pow(2,n);
ans=m%poww;
cout<<ans<<endl;
return 0;
}

else {
    cout<<m<<endl;
    return 0;
}




return 0;
}
