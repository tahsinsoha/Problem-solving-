#include <bits/stdc++.h>
#define ll long long
#define m 1000000007
using namespace std;

ll fact[100007], Inv[100007];

ll bigMod( ll b, ll p)
{
    ll res=1;

    while(p>0){
    if(p & 1)
        res= ((res%m)*(b%m))%m;
    p=p>>1;
    b=((b%m)*(b%m)%m);
    }

    return res%m;
}

void preCal(void)
{
    Inv[0]=fact[0]=1;

    for(ll i=1;i<=100000;i++)
    {
        fact[i]=(i*fact[i-1])%m;
        Inv[i]=bigMod( fact[i], m-2 );
    }

}

int main()
{
    preCal();

    int tc;
    cin>>tc;

    while(tc--)
    {
        ll n,k;
        scanf("%lld %lld", &n,&k);

        ll ans= fact[n] ;
        ans= (ans*Inv[n-k])%m;
        ans= (ans*Inv[k])%m;
        ans= (ans*fact[k-1])%m;
        ans= (ans*Inv[2])%m;

        printf("%lld\n", ans);
    }
}
