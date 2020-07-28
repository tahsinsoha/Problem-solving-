#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>v[107];
ll n,m,x;
bool vis[107];
ll match[107];
ll arr[107],brr[107];

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
        for(int j=0; j<102; j++)
            v[j].clear();
        cin>>n;
        for(int j=0; j<n; j++)
            cin>>arr[j];

        cin>>m;
        for(int j=0; j<m; j++)
            cin>>brr[j];

        for(int j=0; j<n; j++)
        {
            for(int k=0; k<m; k++ )
            {
                if(brr[k]%arr[j]==0)
                    v[j].push_back(k);
            }
        }

        memset(match, -1, sizeof(match));

        for(int j=0; j<107; j++)
        {

            memset(vis,0,sizeof(vis));
            if(bpm(j))
                ans++;
        }
        printf("Case %d: %lld\n",tc,ans);

    }
    return 0;
}
