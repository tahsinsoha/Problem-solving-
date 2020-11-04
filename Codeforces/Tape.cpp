#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll arr[100007];
vector<int>v;

int main()
{
    ll n,m,k;
    cin>>n>>m>>k;
    ll ans=0;
    for( int i=1; i<=n; i++ )
        cin>> arr[i];

    for( int i=2; i<=n; i++ )
        v.push_back(arr[i]-arr[i-1]);
    sort(v.begin(),v.end());
    for( int i=0; i<n-k; i++ )
        ans+= v[i]-1;
    cout<<ans+n<<endl;
}
