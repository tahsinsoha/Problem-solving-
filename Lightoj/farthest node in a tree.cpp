#include<bits/stdc++.h>
#define inf 1000000000
using namespace std;
vector<int>adj[30005];
vector<int>cost[30005];
int dis[30005],visited[30005],n;
void bfs(int s)
{
    for(int i=0; i<n; i++)
    {
        visited[i]=0;
        dis[i]=inf;
    }
    queue<int>q;
    q.push(s);
    visited[s]=1;
    dis[s]=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0; i<adj[u].size(); i++)
        {
            int v =adj[u][i];
            if(visited[v]==0)
            {
                visited[v]=1;
                dis[v]=dis[u]+cost[u][i];
                q.push(v);
            }
        }

    }
}
int main()
{
    int tc,u,v,w;
    cin>>tc;
    for(int t=1; t<=tc; t++)
    {
        cin>>n;
        for(int i=0; i<n-1; i++)
        {
            cin>>u>>v>>w;
            adj[u].push_back(v);
            adj[v].push_back(u);

            cost[u].push_back(w);
            cost[v].push_back(w);
        }
        bfs(0);
        int md=0,start;

        for(int i=0; i<=n-1; i++)
        {

            if(dis[i]>md)
            {
                start=i,md=dis[i];
            }
        }

        bfs(start);
        md=0;
        for(int i=0; i<=n-1; i++)
        {
            if(dis[i]>md)
            {
                md=dis[i];
            }
        }
        printf("Case %d: %d\n",t,md);
        for(int i=0; i<=n-1; i++)
        {
            {
                adj[i].clear();
                cost[i].clear();
            }
        }
    }
    return 0;
}

