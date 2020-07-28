#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define m 1000000007LL

ll bigmod(ll b, ll p)
{
    ll res = 1;
    while(p>0)
    {
        if(p&1)
            res = ((res%m) * (b%m))%m;
        p = p>>1;
        b = ((b%m)*(b%m))%m;

    }
    return res%m;
}
int main()
{
    ll x,y;
    cin>>x>>y;
    ll ans = bigmod(2LL,y);
  //  cout<<ans<<endl;
    ans--;
    ans = bigmod(ans,x);
    cout<<ans<<endl;
    return 0;
}
