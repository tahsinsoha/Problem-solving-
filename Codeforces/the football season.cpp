#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,p,w,d;
    cin>>n>>p>>w>>d;
    for(ll y=0; y<w; y++)
    {
        ll r  = p - d*y;
        if(r<0 || r%w)
            continue;
       ll x = r/w;
        if(x+y >n)
            continue;
        cout<<x<<" "<<y<<" "<<n-x-y<<endl;
        return 0;
    }
    cout<<-1<<endl;

    return 0;
}
