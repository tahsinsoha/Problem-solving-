#include<bits/stdc++.h>
#define mx 1007
using namespace std;
bool arr[1010];
vector<int>prime;
vector<int>facc[1010];
int dis[1010];
void sieve()
{
    arr[0]=arr[1]=1;

    for(int i=4; i<mx; i+=2)
        arr[i]=1;

    for(int i=3; i<mx; i++)
    {
        for(int j=i*i; j<mx; j+=(2*i))
        {
            if(arr[j]==0)
            {
                arr[j]=1;
            }
        }
    }
    for(int i=2; i<mx; i++)
    {
        if(arr[i]==0)
            prime.push_back(i);
    }
}
void fac()
{
    for(int i=2; i<mx; i++)
    {
        for(int j=0; j<prime.size(); j++)
        {
            if(i%prime[j]==0 && i>prime[j])
            {
                facc[i].push_back(prime[j]);
            }

        }
    }
}
int bfs(int s,int e)
{
    bool visited[1010];
    memset(visited,false,sizeof(visited));
    queue<int>q;
    memset(dis,0,sizeof(dis));
    q.push(s);
    dis[s]=0;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        if(u==e)
            return dis[u];
        for(int i=0; i<facc[u].size(); i++)
        {
            int v =u +facc[u][i];
            if(visited[v]==0 && v<=e)
            {
                visited[v]=1;
                q.push(v);
                dis[v]=dis[u]+1;
            }
        }
    }
    return -1;
}
int main()
{
    sieve();
    fac();
    int t,tc;
    cin>>t;
    for(tc=1; tc<=t; tc++)
    {
        int x,y;
        cin>>x>>y;
        int ans= bfs(x,y);
        printf("Case %d: %d\n",tc,ans);


    }

    return 0;
}
