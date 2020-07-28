#include<bits/stdc++.h>
#define ll  long long
#define max 100000
#define mod 1000000007
using namespace std;
bool vis[max];
vector< long long>prime;
void sieve()
{
    vis[0]=1;
    vis[1]=1;
    prime.push_back(2);
    for(ll i=3; i<max; i+=2)
    {
        if(vis[i]==0)
        {
            prime.push_back(i);
            for(ll j=i*i; j<max; j=j+(2*i))
            {
                vis[j]=1;

            }

        }
    }
}
ll power(ll x, ll y)
{
    ll res = 1;
    while(y>0)
    {
        if(y&1)
            res = (res*x)%mod;
        y=y>>1;
        x= (x*x)%mod;
    }
    return res;
}


int main()
{
    int t,tc;
    ll n,m;
    sieve();
    scanf("%d",&t);
    for( tc=1; tc<=t; tc++)
    {
        scanf("%lld %lld",&n,&m);
        ll ans = 1;
        ll p = n;

        for(int i=0; i<prime.size(); i++)
        {
            ll expo = 0;
            ll flag  = 0;
            if(prime[i]>p) break;
            if(p%prime[i]==0)
            {
                while(p%prime[i]==0)
                {
                    flag=1;
                    p=p/prime[i];
                    expo++;
                }

            }
            if(flag)
            {
                expo = expo*m;
                expo = expo +1;
                ll den = (power(prime[i],expo)-1)%mod;
                ll num = (power(prime[i]-1,mod-2))%mod;
                ll s = ((den%mod)*(num%mod))%mod;
                s = (s+mod)%mod;
                ans =((ans%mod)*(s%mod))%mod;
            }
        }
        if(p!=1)
        {
            ll expo = m+1;
            if(p%mod==0)
            {
                ans = 1;
            }
            else
            {
                ll den = (power(p,expo)-1)%mod;
                ll num = (power(p-1,mod-2))%mod;
                ll s = ((den%mod)*(num%mod))%mod;
              //  s = (s+mod)%mod;
                ans =((ans%mod)*(s%mod))%mod;
                ans = (ans+mod)%mod;
            }
        }
        printf("Case %d: %lld\n",tc,ans);
    }




    return 0;
}
