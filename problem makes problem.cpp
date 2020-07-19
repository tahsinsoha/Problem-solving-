#include<bits/stdc++.h>
# define mod 1000000007
using namespace std;
long long fac[2000010];
long long bigmod(long long a,long b, long m)
{
    long long res=1;
    while(b>0)
    {
        if(b&1)
            res=(res*a)%m;
        a=(a*a)%m;
        b=b/2;
    }
    return res;
}
long long modinv(long long a,long long m)
{
    return bigmod(a,m-2,m);
}

void precal()
{
    fac[0]=fac[1]=1;
           for(int i=2; i<=2000010; i++)
       {
           fac[i]=(fac[i-1]*i)%mod;
       }
   }
   int main()
{
    precal();
    long long tc,n,k,ans;
    cin>>tc;
    for(long long i=1; i<=tc; i++)
    {
        cin>>n>>k;
        ans=fac[n+k-1]*modinv(fac[n],mod)%mod*modinv(fac[k-1],mod)%mod;
        printf("Case %lld: %lld\n",i,ans);

    }
    return 0;
}
