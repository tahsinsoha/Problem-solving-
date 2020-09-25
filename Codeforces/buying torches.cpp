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
        ll x,y,k;
        cin>>x>>y>>k;

        ll p = k*y+ k-1;
        ll q = x-1;

        ll ans = p/q;
        if(p%q!=0)
            ans++;

        ans+=k;
        cout<<ans<<endl;
    }


    return 0;

}












