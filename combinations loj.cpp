#include<bits/stdc++.h>
#define m 1000003
//#define unsigned long long ull
using namespace std;
unsigned long long  fac[1000007];
unsigned long long  bigmod(unsigned long long  b, unsigned long long p, unsigned long long mod){
unsigned long long res=1;
while(p>0){
if(p&1) res= (res*b)%mod;
b=(b*b)%mod;
p=p/2;
}
return res%mod;
}
int main(){
fac[0]=1;
for(int i=1;i<=1000002;i++)
    fac[i]=(fac[i-1]%m*i%m)%m;
    int t;
    cin>>t;
for(int tc=1;tc<=t;tc++){
int n,r;
cin>>n>>r;
unsigned long long ans = fac[r]*fac[n-r];
ans = ans%m;
ans = bigmod(ans,m-2,m);
cout<<"Case "<<tc<<": ";
cout<<(fac[n]*ans)%m<<endl;

}

return 0;
}
