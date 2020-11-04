#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];
ll Pow(ll a, ll b)
{
    ll res=1;
    while(b>0)
    {
        if(b&1)
            res= ((res%mod) * (a%mod))%mod;
        b=b>>1;
        a= (((a%mod) *(a%mod)))%mod;

    }
    return res;
}

int main()
{
    string s;
    cin>>s;
    int n = s.size();
    vector<ll>v,x;
    ll sum=0;
    ll z=0;

    for(int i=1; i<=n; i++)
    {
        z=(z%mod+i*Pow(10,i-1))%mod;
        v.push_back(z);

    }

    // for(int i=0;i<v.size();i++)
    //  cout<<v[i]<<" ";
    //cout<<endl;

    for(ll i=0; i<n; i++)
    {
        int p = s[i]-'0';
        // cout<<p<<endl;
        sum= (sum%mod+((((i*(i+1))/2)%mod)*(p%mod)*(Pow(10,n-i-1)%mod))%mod)%mod; // number tar aagey koyta substring kora jaay ,mane prefix niye
        // cout<<sum<<endl;
        if(i<n-1)
            sum=(sum%mod+((p%mod)*( v[n-i-2]%mod))%mod)%mod; //suffix baad diye koybhabe kora jaay
        // cout<<sum<<endl;


    }
    cout<<sum<<endl;
    return 0;

}












