#include<bits/stdc++.h>
using namespace std;
int main(){
long double n,m,e;
cin>>n>>m;
//cout<<ceil(n/2.0)<<endl;
if(m>=ceil(n/2.0)){
    cout<<0<<" ";
}
else cout<<n-(m*2)<<" ";
if(m==0) {
    cout<<n<<endl;
    return 0;
}
int flag=0,temp=0;
for(long long int i=1;i<=n;i++){
    e = (i*(i+1))/2.0;
if(e>=m){
        temp=i+1;
    flag=1;
    break;
}
}
//cout<<temp<<endl;

if(flag) cout<<n-temp<<endl;
else{
   // int t =( m*(m+1))/2;
    cout<<0<<endl;
}
return 0;
}
