#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

ll fac(ll n)
{
    ll ans=1;
    for(ll i=1; i<=n; i++)
        ans=(((ans)%mod)*((i)%mod))%mod;

    return ans%mod;

}

int main()
{

    ll n,x,pos;
    cin>>n>>x>>pos;

    ll l=0;
    ll r=n;
    ll sm = x-1;
    ll gr = n-x;
    ll ans = 1;
    ll sp = n-1;

    while(l<r)
    {
        ll mid = (l+r)/2;

        if(mid==pos)
        {
            l=mid+1;
        }

        else if(mid>pos)
        {
            ans = (ans%mod*gr%mod)%mod;
            gr--;
            sp--;
            r=mid;
        }

        else
        {
            ans = (ans%mod*sm%mod)%mod;
            sm--;
            sp--;
            l=mid+1;
        }


    }

    if(l>0 && l-1==pos)
        cout<<(ans%mod*fac(sp)%mod)%mod<<endl;
    else
        cout<<0<<endl;


    return 0;

}














