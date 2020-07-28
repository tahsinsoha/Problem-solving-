#include<bits/stdc++.h>
#define ll long long
using namespace std;
//bool arr[mx];
 ll phi(ll n){
ll res=n;
for(ll i=2;i*i<=n;i++){
    if(n%i==0) {
        while(n%i==0) n/=i;
        res=res-res/i;
    }

}
if(n>1) res=res-res/n;
return res;
}


int main(){
int n;
while(cin>>n){
    if(n==0) return 0;
    if(n==1) cout<<0<<endl;
    else cout<<phi(n)<<endl;
   // cout<<1/2<<endl;
}



return 0;
}
