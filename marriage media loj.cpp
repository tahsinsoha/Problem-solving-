#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>v[107];
ll n,m,x;
bool vis[107];
ll match[107];
ll ma[107],mh[107],ms[107];
ll wa[107],wh[107],wf[107];

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
        cin>>m>>n;
        for(int j=0; j<m; j++)
        {
            cin>>mh[j]>>ma[j]>>ms[j];
        }
        for(int j=0; j<n; j++)
        {
            cin>>wh[j]>>wa[j]>>wf[j];
        }


        for(int j=0; j<m; j++)
        {
            for(int k=0; k<n; k++ )
            {
                if(abs(mh[j]-wh[k])<=12 && abs(ma[j]-wa[k])<=5)
                {

                    if(ms[j]==wf[k])
                        v[j].push_back(k);
                }
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

