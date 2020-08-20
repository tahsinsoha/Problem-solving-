#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];
vector<int>v[400];
bool vis[400], col[400];
bool poss=1;
int cnt0=0,cnt1=0,cnt=0;

void bfs(int p)
{
    queue<int>q;
    q.push(p);
    vis[p]=1;
    col[p]=0;
    cnt0=1;
    cnt1=0;

    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        if(!poss)
            break;
        for(int i=0; i<v[u].size(); i++)
        {
            int z = v[u][i];
            if(!vis[z])
            {

                vis[z]=1;
                col[z]=!col[u];
                if(!col[z])
                    cnt0++;
                else
                    cnt1++;
                q.push(z);
            }

            else if(col[z]==col[u])
            {
                poss=0;
                break;
            }

        }

    }

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(col,-1,sizeof(col));

        int n,m;
        cin>>n>>m;

        while(m--)
        {
            int x,y;
            cin>>x>>y;

            v[x].push_back(y);
            v[y].push_back(x);
        }

        int ans=0;
        for(int i=0; i<n; i++)
        {
            if(!poss)
                break;

            if(!vis[i])
            {
                bfs(i);
                cnt=min(cnt0,cnt1);
                if(!cnt1)
                    ans++;
                else
                    ans+=cnt;

            }

        }

        if(!poss)
            cout<<-1<<endl;
        else
            cout<<ans<<endl;

        memset(vis,0,sizeof(vis));

        for(int i=0; i<n; i++)
        {
            v[i].clear();
        }

        poss=1;


    }


    return 0;

}










