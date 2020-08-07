#include<bits/stdc++.h>
using namespace std;
int arr[2000007];
int mrr[2000007];
vector <int> adj[100007];
vector<int>l;
int v[100007];
int cnt=0,ans=0,m;
void dfs(int i)
{
    int par;
    v[i] = 1;
    if(mrr[i])
        cnt++;
    else
        cnt=0;
    par=cnt;
    if(cnt>m)
        return;
    if(adj[i].size()==1 && i>1)
        ans++;


    int sz = adj[i].size();
    for(int j = 0; j < sz; j++)
    {
        int u = adj[i][j];
        if(v[u] == 0)
            dfs(u);
              cnt=par;
    }


}


int main()
{
    int n;
    cin>>n>>m;
    int a;

    for(int i=1; i<=n; i++)
    {
        cin>>a;
        if(a==1)
            mrr[i]++;
    }

    for(int i=1; i<=n; i++)
    {
        v[i]=0;
    }

    for(int i=1; i<n; i++)
    {

        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cnt=0;
    ans=0;
    dfs(1);

    cout<<ans<<endl;


    return 0;
}

