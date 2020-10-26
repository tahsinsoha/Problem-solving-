#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    ll a,b;
    cin>>a>>b;

    ll g=__gcd(a,b);
    ll ans=0;

    for(ll i=2; i*i<=g; i++)
    {
        if(g%i)
            continue;
        else
        {
            while(g%i==0)
                g/=i;
            ans++;

        }
    }
    ans++;
    if(g!=1)
        ans++;

    cout<<ans<<endl;

    return 0;

}













