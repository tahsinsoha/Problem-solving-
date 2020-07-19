#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
long long fac[1000007];
map<long long, bool>mp;
long long ans;
long long bigmod(long long x, long long y){
long long res=1;
while(y>0){
    if(y&1)
        res = (res*x) %mod;
    x= (x*x)%mod;
    y>>=1;
}
return res;
}
void solve(){
fac[0]=1;
for(int i=1;i<1000007;i++)
    fac[i] = (fac[i-1]*i)%mod;
}
int main(){
    solve();
long long a,b,n;
cin>>a>>b>>n;
for(int i=0;i<=n;i++){
    long long sum = a*i+b*(n-i);
    if(mp[sum]) continue;
    mp[sum]==1;
    long long tmp = sum;
    bool flag = 1;
    while(sum){
        if(sum%10 !=a && sum%10!=b){
            flag=0;
            break;
        }
        sum=sum/10;
    }
   // long long ans=0;
    if(flag){
        long long t1 = (fac[n]*bigmod(fac[i],mod-2))%mod;
        t1 = (t1*bigmod(fac[n-i],mod-2))%mod;
        ans = (ans+t1)%mod;
    }
}
cout<<ans<<endl;
return 0;
}
