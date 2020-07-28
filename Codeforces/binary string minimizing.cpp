#include<bits/stdc++.h>
#define ll long long
using namespace std;
  ll arr[1000007];
int main()
{
    int t;
    string s;
    cin>>t;
    vector<ll>v;

    ll x,n,k;
    while(t--)
    {
        cin>>n>>k;
        cin>>s;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
                v.push_back(i);

            arr[i]=1;

        }
        for(int i=0; i<v.size(); i++)
        {

            x = min(k,v[i]-i);
            k-=x;
            arr[v[i]-x]=0;

        }
        for(int i=0; i<n; i++)
        {
            cout<<arr[i];
        }
        cout<<endl;
        v.clear();

    }

    return 0;
}
