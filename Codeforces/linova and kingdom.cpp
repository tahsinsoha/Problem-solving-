#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

vector<long long>edges[200007];
pair<int,int>level[200009];
long long p[200009];
void dfs(long long u, long long p)
{
    level[u].y=1LL;

    for(long long v: edges[u])
    {

        if(v==p)
            continue;

        else
        {
            level[v].x=level[u].x+1;
            dfs(v,u);
            level[u].y+=level[v].y;
        }
    }

    return ;

}
int main()
{
    long long  int n,k,u,v;

    cin>>n>>k;
    for(int i=0; i<n-1; i++)
    {

        cin>>u>>v;

        edges[u].push_back(v);
        edges[v].push_back(u);

    }

    dfs(1,-1);
    for(int i=1; i<=n; i++)
    {
        p[i] = level[i].x-level[i].y+1;


    }

    sort(p+1,p+n+1,greater<long long>());
    long long ans=0;

    for(int i=1; i<=k; i++)
    {
        ans+= p[i];

    }
    cout<<ans<<endl;
    return 0;
}



