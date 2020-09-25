#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll a, b;
        cin>>a>> b;
        ll ca,cb;
        cin >>ca>>cb;
        ll wa, wb;
        cin >>wa>> wb;
        if (wa > wb)
            swap(wa, wb), swap(ca, cb);
        ll ans = 0;
        for (ll i=0; i<=ca&& wa*i<= a; i++)
        {
            ll k = min(cb*1, (a - wa*i)/wb); // ami b type koto  ta nibo
            ll la = ca - i, lb = cb - k; // follower koyta kore nite parbe
            ll cur = i + k;
            ll z = min(la, b / wa);
            cur += z;
            cur += min(lb, (b - wa * z) / wb);
            ans = max(ans, cur);
        }
        cout<<ans<<endl;

    }


    return 0;

}













