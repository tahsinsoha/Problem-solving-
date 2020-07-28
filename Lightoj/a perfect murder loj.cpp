#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>v[1007];
ll n,m,x,a,b;
bool vis[1007];
ll match[1007];
ll arr[1007],brr[1007];

bool bpm(int k)
{
    for(int j=0; j<v[k].size(); j++)
    {
        int r = v[k][j];
        if(!vis[r])
        {
            vis[r]=true;
            if(match[r]==-1 or bpm(match[r]))
            {
                match[r]=k;
                return true;
            }


        }

    }
    return false;
}

int main()
{
    int t;
    cin>>t;
    ll ans ;
    for(int tc=1; tc<=t; tc++)
    {
        ll ans = 0;
        for(int j=0; j<1002; j++)
            v[j].clear();
        cin>>n>>m;

       for(int j=0;j<m;j++){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
       }

        memset(match, -1, sizeof(match));

        for(int j=0; j<1007; j++)
        {

            memset(vis,0,sizeof(vis));
            if(bpm(j))
                ans++;
        }
        printf("Case %d: %lld\n",tc,(n-ans/2));

    }
    return 0;
}

